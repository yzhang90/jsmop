/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef _IPC_TESTSHELL_XPCSHELLENVIRONMENT_H_
#define _IPC_TESTSHELL_XPCSHELLENVIRONMENT_H_

#include "base/basictypes.h"

#include <string>
#include <stdio.h>

#include "nsAutoJSValHolder.h"
#include "nsCOMPtr.h"
#include "nsDebug.h"
#include "nsStringGlue.h"
#include "nsJSPrincipals.h"
#include "nsContentUtils.h"
#include "js/TypeDecls.h"

struct JSPrincipals;

namespace mozilla {
namespace ipc {

class XPCShellEnvironment
{
public:
    static XPCShellEnvironment* CreateEnvironment();
    ~XPCShellEnvironment();

    void ProcessFile(JSContext *cx, JS::Handle<JSObject*> obj,
                     const char *filename, FILE *file, bool forceTTY);
    bool EvaluateString(const nsString& aString,
                        nsString* aResult = nullptr);

    JSPrincipals* GetPrincipal() {
        return nsJSPrincipals::get(nsContentUtils::GetSystemPrincipal());
    }

    JSObject* GetGlobalObject() {
        return mGlobalHolder.ToJSObject();
    }

    void SetIsQuitting() {
        mQuitting = true;
    }
    bool IsQuitting() {
        return mQuitting;
    }

protected:
    XPCShellEnvironment();
    bool Init();

private:
    nsAutoJSValHolder mGlobalHolder;

    bool mQuitting;
};

} /* namespace ipc */
} /* namespace mozilla */

#endif /* _IPC_TESTSHELL_XPCSHELLENVIRONMENT_H_ */