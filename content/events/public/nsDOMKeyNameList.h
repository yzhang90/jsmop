/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

/**
 * This header file defines all DOM key name which are used for DOM
 * KeyboardEvent.key.
 * You must define NS_DEFINE_KEYNAME macro before including this.
 *
 * It must have two arguments, (aCPPName, aDOMKeyName)
 * aCPPName is usable name for a part of C++ constants.
 * aDOMKeyName is the actual value.
 */

#define DEFINE_KEYNAME_INTERNAL(aCPPName, aDOMKeyName) \
  NS_DEFINE_KEYNAME(aCPPName, aDOMKeyName)

#define DEFINE_KEYNAME_WITH_SAME_NAME(aName) \
  DEFINE_KEYNAME_INTERNAL(aName, #aName)

DEFINE_KEYNAME_WITH_SAME_NAME(Unidentified)
DEFINE_KEYNAME_INTERNAL(PrintableKey, "MozPrintableKey")

DEFINE_KEYNAME_WITH_SAME_NAME(Attn)
DEFINE_KEYNAME_WITH_SAME_NAME(Apps)
DEFINE_KEYNAME_WITH_SAME_NAME(Crsel)
DEFINE_KEYNAME_WITH_SAME_NAME(Exsel)
DEFINE_KEYNAME_WITH_SAME_NAME(F1)
DEFINE_KEYNAME_WITH_SAME_NAME(F2)
DEFINE_KEYNAME_WITH_SAME_NAME(F3)
DEFINE_KEYNAME_WITH_SAME_NAME(F4)
DEFINE_KEYNAME_WITH_SAME_NAME(F5)
DEFINE_KEYNAME_WITH_SAME_NAME(F6)
DEFINE_KEYNAME_WITH_SAME_NAME(F7)
DEFINE_KEYNAME_WITH_SAME_NAME(F8)
DEFINE_KEYNAME_WITH_SAME_NAME(F9)
DEFINE_KEYNAME_WITH_SAME_NAME(F10)
DEFINE_KEYNAME_WITH_SAME_NAME(F11)
DEFINE_KEYNAME_WITH_SAME_NAME(F12)
DEFINE_KEYNAME_WITH_SAME_NAME(F13)
DEFINE_KEYNAME_WITH_SAME_NAME(F14)
DEFINE_KEYNAME_WITH_SAME_NAME(F15)
DEFINE_KEYNAME_WITH_SAME_NAME(F16)
DEFINE_KEYNAME_WITH_SAME_NAME(F17)
DEFINE_KEYNAME_WITH_SAME_NAME(F18)
DEFINE_KEYNAME_WITH_SAME_NAME(F19)
DEFINE_KEYNAME_WITH_SAME_NAME(F20)
DEFINE_KEYNAME_WITH_SAME_NAME(F21)
DEFINE_KEYNAME_WITH_SAME_NAME(F22)
DEFINE_KEYNAME_WITH_SAME_NAME(F23)
DEFINE_KEYNAME_WITH_SAME_NAME(F24)
DEFINE_KEYNAME_WITH_SAME_NAME(F25)
DEFINE_KEYNAME_WITH_SAME_NAME(F26)
DEFINE_KEYNAME_WITH_SAME_NAME(F27)
DEFINE_KEYNAME_WITH_SAME_NAME(F28)
DEFINE_KEYNAME_WITH_SAME_NAME(F29)
DEFINE_KEYNAME_WITH_SAME_NAME(F30)
DEFINE_KEYNAME_WITH_SAME_NAME(F31)
DEFINE_KEYNAME_WITH_SAME_NAME(F32)
DEFINE_KEYNAME_WITH_SAME_NAME(F33)
DEFINE_KEYNAME_WITH_SAME_NAME(F34)
DEFINE_KEYNAME_WITH_SAME_NAME(F35)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication1)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication2)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication3)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication4)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication5)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication6)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication7)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication8)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication9)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication10)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication11)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication12)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication13)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication14)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication15)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication16)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication17)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchApplication18)
DEFINE_KEYNAME_WITH_SAME_NAME(LaunchMail)
DEFINE_KEYNAME_WITH_SAME_NAME(List)
DEFINE_KEYNAME_WITH_SAME_NAME(Props)
DEFINE_KEYNAME_WITH_SAME_NAME(Soft1)
DEFINE_KEYNAME_WITH_SAME_NAME(Soft2)
DEFINE_KEYNAME_WITH_SAME_NAME(Soft3)
DEFINE_KEYNAME_WITH_SAME_NAME(Soft4)
DEFINE_KEYNAME_WITH_SAME_NAME(Accept)
DEFINE_KEYNAME_WITH_SAME_NAME(Again)
DEFINE_KEYNAME_WITH_SAME_NAME(Enter)
DEFINE_KEYNAME_WITH_SAME_NAME(Find)
DEFINE_KEYNAME_WITH_SAME_NAME(Help)
DEFINE_KEYNAME_WITH_SAME_NAME(Info)
DEFINE_KEYNAME_WITH_SAME_NAME(Menu)
DEFINE_KEYNAME_WITH_SAME_NAME(Pause)
DEFINE_KEYNAME_WITH_SAME_NAME(Play)
DEFINE_KEYNAME_WITH_SAME_NAME(ScrollLock) // IE9 users "Scroll"
DEFINE_KEYNAME_WITH_SAME_NAME(Execute)
DEFINE_KEYNAME_WITH_SAME_NAME(Cancel)
DEFINE_KEYNAME_WITH_SAME_NAME(Esc)
DEFINE_KEYNAME_WITH_SAME_NAME(Exit)
DEFINE_KEYNAME_WITH_SAME_NAME(Zoom)
DEFINE_KEYNAME_WITH_SAME_NAME(Separator)
DEFINE_KEYNAME_WITH_SAME_NAME(Spacebar)
DEFINE_KEYNAME_WITH_SAME_NAME(Add)
DEFINE_KEYNAME_WITH_SAME_NAME(Subtract)
DEFINE_KEYNAME_WITH_SAME_NAME(Multiply)
DEFINE_KEYNAME_WITH_SAME_NAME(Divide)
DEFINE_KEYNAME_WITH_SAME_NAME(Equals)
DEFINE_KEYNAME_WITH_SAME_NAME(Decimal)
DEFINE_KEYNAME_WITH_SAME_NAME(BrightnessDown)
DEFINE_KEYNAME_WITH_SAME_NAME(BrightnessUp)
DEFINE_KEYNAME_WITH_SAME_NAME(Camera)
DEFINE_KEYNAME_WITH_SAME_NAME(Eject)
DEFINE_KEYNAME_WITH_SAME_NAME(Power)
DEFINE_KEYNAME_WITH_SAME_NAME(PrintScreen)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserFavorites)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserHome)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserRefresh)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserSearch)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserStop)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserBack)
DEFINE_KEYNAME_WITH_SAME_NAME(BrowserForward)
DEFINE_KEYNAME_WITH_SAME_NAME(Left)
DEFINE_KEYNAME_WITH_SAME_NAME(PageDown)
DEFINE_KEYNAME_WITH_SAME_NAME(PageUp)
DEFINE_KEYNAME_WITH_SAME_NAME(Right)
DEFINE_KEYNAME_WITH_SAME_NAME(Up)
DEFINE_KEYNAME_WITH_SAME_NAME(UpLeft)
DEFINE_KEYNAME_WITH_SAME_NAME(UpRight)
DEFINE_KEYNAME_WITH_SAME_NAME(Down)
DEFINE_KEYNAME_WITH_SAME_NAME(DownLeft)
DEFINE_KEYNAME_WITH_SAME_NAME(DownRight)
DEFINE_KEYNAME_WITH_SAME_NAME(Home)
DEFINE_KEYNAME_WITH_SAME_NAME(End)
DEFINE_KEYNAME_WITH_SAME_NAME(Select)
DEFINE_KEYNAME_WITH_SAME_NAME(Tab)
DEFINE_KEYNAME_WITH_SAME_NAME(Backspace)
DEFINE_KEYNAME_WITH_SAME_NAME(Clear)
DEFINE_KEYNAME_WITH_SAME_NAME(Copy)
DEFINE_KEYNAME_WITH_SAME_NAME(Cut)
DEFINE_KEYNAME_WITH_SAME_NAME(Del)
DEFINE_KEYNAME_WITH_SAME_NAME(EraseEof)
DEFINE_KEYNAME_WITH_SAME_NAME(Insert)
DEFINE_KEYNAME_WITH_SAME_NAME(Paste)
DEFINE_KEYNAME_WITH_SAME_NAME(Undo)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadGrave)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadAcute)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadCircumflex)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadTilde)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadMacron)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadBreve)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadAboveDot)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadUmlaut)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadAboveRing)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadDoubleacute)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadCaron)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadCedilla)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadOgonek)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadIota)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadVoicedSound)
DEFINE_KEYNAME_WITH_SAME_NAME(DeadSemivoicedSound)
DEFINE_KEYNAME_WITH_SAME_NAME(Alphanumeric)
DEFINE_KEYNAME_WITH_SAME_NAME(Alt)
DEFINE_KEYNAME_WITH_SAME_NAME(AltGraph)
DEFINE_KEYNAME_WITH_SAME_NAME(CapsLock)
DEFINE_KEYNAME_WITH_SAME_NAME(Control)
DEFINE_KEYNAME_WITH_SAME_NAME(Fn)
DEFINE_KEYNAME_WITH_SAME_NAME(FnLock)
DEFINE_KEYNAME_WITH_SAME_NAME(Meta)
DEFINE_KEYNAME_WITH_SAME_NAME(Process)
DEFINE_KEYNAME_WITH_SAME_NAME(NumLock)
DEFINE_KEYNAME_WITH_SAME_NAME(Shift)
DEFINE_KEYNAME_WITH_SAME_NAME(SymbolLock)
DEFINE_KEYNAME_WITH_SAME_NAME(OS) // IE9 uses "Win"
DEFINE_KEYNAME_WITH_SAME_NAME(Compose)
DEFINE_KEYNAME_WITH_SAME_NAME(AllCandidates)
DEFINE_KEYNAME_WITH_SAME_NAME(NextCandidate)
DEFINE_KEYNAME_WITH_SAME_NAME(PreviousCandidate)
DEFINE_KEYNAME_WITH_SAME_NAME(CodeInput)
DEFINE_KEYNAME_WITH_SAME_NAME(Convert)
DEFINE_KEYNAME_WITH_SAME_NAME(Nonconvert)
DEFINE_KEYNAME_WITH_SAME_NAME(FinalMode)
DEFINE_KEYNAME_WITH_SAME_NAME(FullWidth)
DEFINE_KEYNAME_WITH_SAME_NAME(HalfWidth)
DEFINE_KEYNAME_WITH_SAME_NAME(ModeChange)
DEFINE_KEYNAME_WITH_SAME_NAME(RomanCharacters)
DEFINE_KEYNAME_WITH_SAME_NAME(HangulMode)
DEFINE_KEYNAME_WITH_SAME_NAME(HanjaMode)
DEFINE_KEYNAME_WITH_SAME_NAME(JunjaMode)
DEFINE_KEYNAME_WITH_SAME_NAME(Hiragana)
DEFINE_KEYNAME_WITH_SAME_NAME(KanaMode)
DEFINE_KEYNAME_WITH_SAME_NAME(KanjiMode)
DEFINE_KEYNAME_WITH_SAME_NAME(Katakana)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioFaderFront)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioFaderRear)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioBalanceLeft)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioBalanceRight)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioBassBoostDown)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioBassBoostUp)
DEFINE_KEYNAME_WITH_SAME_NAME(VolumeMute)
DEFINE_KEYNAME_WITH_SAME_NAME(VolumeDown)
DEFINE_KEYNAME_WITH_SAME_NAME(VolumeUp)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaPause)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaPlay)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaStop)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaNextTrack)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaPreviousTrack)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaPlayPause)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaTrackSkip)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaTrackStart)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaTrackEnd)
DEFINE_KEYNAME_WITH_SAME_NAME(SelectMedia)
DEFINE_KEYNAME_WITH_SAME_NAME(Blue)
DEFINE_KEYNAME_WITH_SAME_NAME(Brown)
DEFINE_KEYNAME_WITH_SAME_NAME(ChannelDown)
DEFINE_KEYNAME_WITH_SAME_NAME(ChannelUp)
DEFINE_KEYNAME_WITH_SAME_NAME(ClearFavorite0)
DEFINE_KEYNAME_WITH_SAME_NAME(ClearFavorite1)
DEFINE_KEYNAME_WITH_SAME_NAME(ClearFavorite2)
DEFINE_KEYNAME_WITH_SAME_NAME(ClearFavorite3)
DEFINE_KEYNAME_WITH_SAME_NAME(Dimmer)
DEFINE_KEYNAME_WITH_SAME_NAME(DisplaySwap)
DEFINE_KEYNAME_WITH_SAME_NAME(FastFwd)
DEFINE_KEYNAME_WITH_SAME_NAME(Green)
DEFINE_KEYNAME_WITH_SAME_NAME(Grey)
DEFINE_KEYNAME_WITH_SAME_NAME(Guide)
DEFINE_KEYNAME_WITH_SAME_NAME(InstantReplay)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaLast)
DEFINE_KEYNAME_WITH_SAME_NAME(Link)
DEFINE_KEYNAME_WITH_SAME_NAME(Live)
DEFINE_KEYNAME_WITH_SAME_NAME(Lock)
DEFINE_KEYNAME_WITH_SAME_NAME(NextDay)
DEFINE_KEYNAME_WITH_SAME_NAME(NextFavoriteChannel)
DEFINE_KEYNAME_WITH_SAME_NAME(OnDemand)
DEFINE_KEYNAME_WITH_SAME_NAME(PinPDown)
DEFINE_KEYNAME_WITH_SAME_NAME(PinPMove)
DEFINE_KEYNAME_WITH_SAME_NAME(PinPToggle)
DEFINE_KEYNAME_WITH_SAME_NAME(PinPUp)
DEFINE_KEYNAME_WITH_SAME_NAME(PlaySpeedDown)
DEFINE_KEYNAME_WITH_SAME_NAME(PlaySpeedReset)
DEFINE_KEYNAME_WITH_SAME_NAME(PlaySpeedUp)
DEFINE_KEYNAME_WITH_SAME_NAME(PrevDay)
DEFINE_KEYNAME_WITH_SAME_NAME(RandomToggle)
DEFINE_KEYNAME_WITH_SAME_NAME(RecallFavorite0)
DEFINE_KEYNAME_WITH_SAME_NAME(RecallFavorite1)
DEFINE_KEYNAME_WITH_SAME_NAME(RecallFavorite2)
DEFINE_KEYNAME_WITH_SAME_NAME(RecallFavorite3)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaRecord)
DEFINE_KEYNAME_WITH_SAME_NAME(RecordSpeedNext)
DEFINE_KEYNAME_WITH_SAME_NAME(Red)
DEFINE_KEYNAME_WITH_SAME_NAME(MediaRewind)
DEFINE_KEYNAME_WITH_SAME_NAME(RfBypass)
DEFINE_KEYNAME_WITH_SAME_NAME(ScanChannelsToggle)
DEFINE_KEYNAME_WITH_SAME_NAME(ScreenModeNext)
DEFINE_KEYNAME_WITH_SAME_NAME(Settings)
DEFINE_KEYNAME_WITH_SAME_NAME(SplitScreenToggle)
DEFINE_KEYNAME_WITH_SAME_NAME(StoreFavorite0)
DEFINE_KEYNAME_WITH_SAME_NAME(StoreFavorite1)
DEFINE_KEYNAME_WITH_SAME_NAME(StoreFavorite2)
DEFINE_KEYNAME_WITH_SAME_NAME(StoreFavorite3)
DEFINE_KEYNAME_WITH_SAME_NAME(Subtitle)
DEFINE_KEYNAME_WITH_SAME_NAME(AudioSurroundModeNext)
DEFINE_KEYNAME_WITH_SAME_NAME(Teletext)
DEFINE_KEYNAME_WITH_SAME_NAME(VideoModeNext)
DEFINE_KEYNAME_WITH_SAME_NAME(DisplayWide)
DEFINE_KEYNAME_WITH_SAME_NAME(Wink)
DEFINE_KEYNAME_WITH_SAME_NAME(Yellow)

#undef DEFINE_KEYNAME_WITH_SAME_NAME
#undef DEFINE_KEYNAME_INTERNAL
