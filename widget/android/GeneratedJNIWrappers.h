// GENERATED CODE
// Generated by the Java program at /build/annotationProcessors at compile time from
// annotations on Java methods. To update, change the annotations on the corresponding Java
// methods and rerun the build. Manually updating this file will cause your build to fail.

protected:
jclass mGeckoAppShellClass;
jmethodID jAcknowledgeEvent;
jmethodID jAddPluginViewWrapper;
jmethodID jAlertsProgressListener_OnProgress;
jmethodID jCancelVibrate;
jmethodID jCheckURIVisited;
jmethodID jClearMessageList;
jmethodID jCloseCamera;
jmethodID jCloseNotification;
jmethodID jCreateMessageListWrapper;
jmethodID jCreateShortcut;
jmethodID jDeleteMessageWrapper;
jmethodID jDisableBatteryNotifications;
jmethodID jDisableNetworkNotifications;
jmethodID jDisableScreenOrientationNotifications;
jmethodID jDisableSensor;
jmethodID jEnableBatteryNotifications;
jmethodID jEnableLocation;
jmethodID jEnableLocationHighAccuracy;
jmethodID jEnableNetworkNotifications;
jmethodID jEnableScreenOrientationNotifications;
jmethodID jEnableSensor;
jmethodID jGetContext;
jmethodID jGetCurrentBatteryInformationWrapper;
jmethodID jGetCurrentNetworkInformationWrapper;
jmethodID jGetDpiWrapper;
jmethodID jGetExtensionFromMimeTypeWrapper;
jmethodID jGetGfxInfoDataWrapper;
jmethodID jGetHandlersForMimeTypeWrapper;
jmethodID jGetHandlersForURLWrapper;
jmethodID jGetIconForExtensionWrapper;
jmethodID jGetMessageWrapper;
jmethodID jGetMimeTypeFromExtensionsWrapper;
jmethodID jGetNextMessageInListWrapper;
jmethodID jGetProxyForURIWrapper;
jmethodID jGetScreenDepthWrapper;
jmethodID jGetScreenOrientationWrapper;
jmethodID jGetShowPasswordSetting;
jmethodID jGetSystemColoursWrapper;
jmethodID jHandleGeckoMessageWrapper;
jmethodID jHideProgressDialog;
jmethodID jInitCameraWrapper;
jmethodID jIsNetworkLinkKnown;
jmethodID jIsNetworkLinkUp;
jmethodID jIsTablet;
jmethodID jKillAnyZombies;
jmethodID jLockScreenOrientation;
jmethodID jMarkURIVisited;
jmethodID jMoveTaskToBack;
jmethodID jNotifyDefaultPrevented;
jmethodID jNotifyIME;
jmethodID jNotifyIMEChange;
jmethodID jNotifyIMEContext;
jmethodID jNotifyWakeLockChanged;
jmethodID jNotifyXreExit;
jmethodID jOpenUriExternal;
jmethodID jPerformHapticFeedback;
jmethodID jPumpMessageLoop;
jmethodID jRegisterSurfaceTextureFrameListener;
jmethodID jRemovePluginView;
jmethodID jScanMedia;
jmethodID jScheduleRestart;
jmethodID jSendMessageWrapper;
jmethodID jSetFullScreen;
jmethodID jSetKeepScreenOn;
jmethodID jSetSelectedLocale;
jmethodID jSetURITitle;
jmethodID jShowAlertNotificationWrapper;
jmethodID jShowFilePickerAsyncWrapper;
jmethodID jShowFilePickerForExtensionsWrapper;
jmethodID jShowFilePickerForMimeTypeWrapper;
jmethodID jShowInputMethodPicker;
jmethodID jUnlockProfile;
jmethodID jUnlockScreenOrientation;
jmethodID jUnregisterSurfaceTextureFrameListener;
jmethodID jVibrate1;
jmethodID jVibrateA;

jclass mGeckoJavaSamplerClass;
jmethodID jGetFrameNameJavaProfilingWrapper;
jmethodID jGetSampleTimeJavaProfiling;
jmethodID jGetThreadNameJavaProfilingWrapper;
jmethodID jPauseJavaProfiling;
jmethodID jStartJavaProfiling;
jmethodID jStopJavaProfiling;
jmethodID jUnpauseJavaProfiling;

jclass mThumbnailHelperClass;
jmethodID jSendThumbnail;

jclass mGLControllerClass;
jmethodID jProvideEGLSurfaceWrapper;

jclass mLayerViewClass;
jmethodID jRegisterCompositorWrapper;

jclass mNativePanZoomControllerClass;
jmethodID jPostDelayedCallbackWrapper;
jmethodID jRequestContentRepaintWrapper;

jclass mClipboardClass;
jmethodID jGetClipboardTextWrapper;
jmethodID jSetClipboardText;

public:
void AcknowledgeEvent();
void AddPluginViewWrapper(jobject a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, bool a5);
void AlertsProgressListener_OnProgress(const nsAString& a0, int64_t a1, int64_t a2, const nsAString& a3);
void CancelVibrate();
void CheckURIVisited(const nsAString& a0);
void ClearMessageList(int32_t a0);
void CloseCamera();
void CloseNotification(const nsAString& a0);
void CreateMessageListWrapper(int64_t a0, int64_t a1, jobjectArray a2, int32_t a3, int32_t a4, bool a5, int32_t a6);
void CreateShortcut(const nsAString& a0, const nsAString& a1, const nsAString& a2, const nsAString& a3);
void DeleteMessageWrapper(int32_t a0, int32_t a1);
void DisableBatteryNotifications();
void DisableNetworkNotifications();
void DisableScreenOrientationNotifications();
void DisableSensor(int32_t a0);
void EnableBatteryNotifications();
void EnableLocation(bool a0);
void EnableLocationHighAccuracy(bool a0);
void EnableNetworkNotifications();
void EnableScreenOrientationNotifications();
void EnableSensor(int32_t a0);
jobject GetContext();
jdoubleArray GetCurrentBatteryInformationWrapper();
jdoubleArray GetCurrentNetworkInformationWrapper();
int32_t GetDpiWrapper();
jstring GetExtensionFromMimeTypeWrapper(const nsAString& a0);
jstring GetGfxInfoDataWrapper();
jobjectArray GetHandlersForMimeTypeWrapper(const nsAString& a0, const nsAString& a1);
jobjectArray GetHandlersForURLWrapper(const nsAString& a0, const nsAString& a1);
jbyteArray GetIconForExtensionWrapper(const nsAString& a0, int32_t a1);
void GetMessageWrapper(int32_t a0, int32_t a1);
jstring GetMimeTypeFromExtensionsWrapper(const nsAString& a0);
void GetNextMessageInListWrapper(int32_t a0, int32_t a1);
jstring GetProxyForURIWrapper(const nsAString& a0, const nsAString& a1, const nsAString& a2, int32_t a3);
int32_t GetScreenDepthWrapper();
int16_t GetScreenOrientationWrapper();
bool GetShowPasswordSetting();
jintArray GetSystemColoursWrapper();
jstring HandleGeckoMessageWrapper(const nsAString& a0);
void HideProgressDialog();
jintArray InitCameraWrapper(const nsAString& a0, int32_t a1, int32_t a2, int32_t a3);
bool IsNetworkLinkKnown();
bool IsNetworkLinkUp();
bool IsTablet();
void KillAnyZombies();
void LockScreenOrientation(int32_t a0);
void MarkURIVisited(const nsAString& a0);
void MoveTaskToBack();
void NotifyDefaultPrevented(bool a0);
static void NotifyIME(int32_t a0);
static void NotifyIMEChange(const nsAString& a0, int32_t a1, int32_t a2, int32_t a3);
static void NotifyIMEContext(int32_t a0, const nsAString& a1, const nsAString& a2, const nsAString& a3);
void NotifyWakeLockChanged(const nsAString& a0, const nsAString& a1);
void NotifyXreExit();
bool OpenUriExternal(const nsAString& a0, const nsAString& a1, const nsAString& a2 = EmptyString(), const nsAString& a3 = EmptyString(), const nsAString& a4 = EmptyString(), const nsAString& a5 = EmptyString());
void PerformHapticFeedback(bool a0);
bool PumpMessageLoop();
void RegisterSurfaceTextureFrameListener(jobject a0, int32_t a1);
void RemovePluginView(jobject a0, bool a1);
void ScanMedia(const nsAString& a0, const nsAString& a1);
void ScheduleRestart();
void SendMessageWrapper(const nsAString& a0, const nsAString& a1, int32_t a2);
void SetFullScreen(bool a0);
void SetKeepScreenOn(bool a0);
void SetSelectedLocale(const nsAString& a0);
void SetURITitle(const nsAString& a0, const nsAString& a1);
void ShowAlertNotificationWrapper(const nsAString& a0, const nsAString& a1, const nsAString& a2, const nsAString& a3, const nsAString& a4);
void ShowFilePickerAsyncWrapper(const nsAString& a0, int64_t a1);
jstring ShowFilePickerForExtensionsWrapper(const nsAString& a0);
jstring ShowFilePickerForMimeTypeWrapper(const nsAString& a0);
void ShowInputMethodPicker();
bool UnlockProfile();
void UnlockScreenOrientation();
void UnregisterSurfaceTextureFrameListener(jobject a0);
void Vibrate1(int64_t a0);
void VibrateA(jlongArray a0, int32_t a1);
jstring GetFrameNameJavaProfilingWrapper(int32_t a0, int32_t a1, int32_t a2);
jdouble GetSampleTimeJavaProfiling(int32_t a0, int32_t a1);
jstring GetThreadNameJavaProfilingWrapper(int32_t a0);
void PauseJavaProfiling();
void StartJavaProfiling(int32_t a0, int32_t a1);
void StopJavaProfiling();
void UnpauseJavaProfiling();
void SendThumbnail(jobject a0, int32_t a1, bool a2);
jobject ProvideEGLSurfaceWrapper(jobject aTarget);
jobject RegisterCompositorWrapper();
void PostDelayedCallbackWrapper(jobject aTarget, int64_t a0);
void RequestContentRepaintWrapper(jobject aTarget, jfloat a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4);
jstring GetClipboardTextWrapper();
void SetClipboardText(const nsAString& a0);
