/* Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/ */

MARIONETTE_TIMEOUT = 60000;
MARIONETTE_HEAD_JS = 'head.js';

SpecialPowers.addPermission("telephony", true, document);

let telephony = window.navigator.mozTelephony;
let number = "5555552368";
let outgoing;
let calls;

function getExistingCalls() {
  emulator.run("gsm list", function(result) {
    log("Initial call list: " + result);
    if (result[0] == "OK") {
      verifyInitialState(false);
    } else {
      cancelExistingCalls(result);
    }
  });
}

function cancelExistingCalls(callList) {
  if (callList.length && callList[0] != "OK") {
    // Existing calls remain; get rid of the next one in the list
    nextCall = callList.shift().split(/\s+/)[2].trim();
    log("Cancelling existing call '" + nextCall +"'");
    emulator.run("gsm cancel " + nextCall, function(result) {
      if (result[0] == "OK") {
        cancelExistingCalls(callList);
      } else {
        log("Failed to cancel existing call");
        cleanUp();
      }
    });
  } else {
    // No more calls in the list; give time for emulator to catch up
    waitFor(verifyInitialState, function() {
      return (telephony.calls.length === 0);
    });
  }
}

function verifyInitialState(confirmNoCalls = true) {
  log("Verifying initial state.");
  ok(telephony);
  is(telephony.active, null);
  ok(telephony.calls);
  is(telephony.calls.length, 0);
  if (confirmNoCalls) {
    emulator.run("gsm list", function(result) {
    log("Initial call list: " + result);
      is(result[0], "OK");
      if (result[0] == "OK") {
        dial();
      } else {
        log("Call exists from a previous test, failing out.");
        cleanUp();
      }
    });
  } else {
    dial();
  }
}

function dial() {
  log("Make an outgoing call.");

  outgoing = telephony.dial(number);
  ok(outgoing);
  is(outgoing.number, number);
  is(outgoing.state, "dialing");
  is(outgoing, telephony.active);
  //ok(telephony.calls === calls); // bug 717414
  is(telephony.calls.length, 1);
  is(telephony.calls[0], outgoing);

  outgoing.onalerting = function onalerting(event) {
    log("Received 'onalerting' call event.");
    is(outgoing, event.call);
    is(outgoing.state, "alerting");

    emulator.run("gsm list", function(result) {
      log("Call list is now: " + result);
      is(result[0], "outbound to  " + number + " : ringing");
      is(result[1], "OK");
      answer();
    });
  };
}

function answer() {
  log("Answering the outgoing call.");

  // We get no "connecting" event when the remote party answers the call.

  outgoing.onconnected = function onconnected(event) {
    log("Received 'connected' call event.");
    is(outgoing, event.call);
    is(outgoing.state, "connected");

    is(outgoing, telephony.active);

    emulator.run("gsm list", function(result) {
      log("Call list is now: " + result);
      is(result[0], "outbound to  " + number + " : active");
      is(result[1], "OK");
      hold();
    });
  };
  emulator.run("gsm accept " + number);
}

function hold() {
  log("Holding the outgoing call.");

  outgoing.onholding = function onholding(event) {
    log("Received 'holding' call event.");
    is(outgoing, event.call);
    is(outgoing.state, "holding");

    is(outgoing, telephony.active);
  };

  outgoing.onheld = function onheld(event) {
    log("Received 'held' call event.");
    is(outgoing, event.call);
    is(outgoing.state, "held");

    is(telephony.active, null);
    is(telephony.calls.length, 1);

    emulator.run("gsm list", function(result) {
      log("Call list is now: " + result);
      is(result[0], "outbound to  " + number + " : held");
      is(result[1], "OK");
      hangUp();
    });
  };
  outgoing.hold();
}

function hangUp() {
  log("Hanging up the outgoing call.");

  let gotDisconnecting = false;
  outgoing.ondisconnecting = function ondisconnecting(event) {
    log("Received disconnecting call event.");
    is(outgoing, event.call);
    is(outgoing.state, "disconnecting");
    gotDisconnecting = true;
  };

  outgoing.ondisconnected = function ondisconnected(event) {
    log("Received 'disconnected' call event.");
    is(outgoing, event.call);
    is(outgoing.state, "disconnected");
    ok(gotDisconnecting);

    is(telephony.active, null);
    is(telephony.calls.length, 0);

    emulator.run("gsm list", function(result) {
      log("Call list is now: " + result);
      is(result[0], "OK");
      cleanUp();
    });
  };

  outgoing.hangUp();
}

function cleanUp() {
  SpecialPowers.removePermission("telephony", document);
  finish();
}

startTest(function() {
  getExistingCalls();
});