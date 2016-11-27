#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRButtonId_k_EButton_A OPENVR_FNTABLE_CALLTYPE VROverlayFlags_Panorama */
  /* Offset 1 gives the best switch position.  */
  switch (name[1]) {
  case 'P':
    if (memEQ(name, "OPENVR_FNTABLE_CALLTYPE", 23)) {
    /*                ^                            */
#ifdef OPENVR_FNTABLE_CALLTYPE
      *iv_return = OPENVR_FNTABLE_CALLTYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "VROverlayFlags_Panorama", 23)) {
    /*                ^                            */
      *iv_return = VROverlayFlags_Panorama;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "EVRButtonId_k_EButton_A", 23)) {
    /*                ^                            */
      *iv_return = EVRButtonId_k_EButton_A;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EChaperoneConfigFile_Live EChaperoneConfigFile_Temp
     EVRButtonId_k_EButton_Max EVREventType_VREvent_None
     EVREventType_VREvent_Quit EVRNotificationStyle_None
     EVRState_VRState_NotReady VROverlayInputMethod_None */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case 'e':
    if (memEQ(name, "VROverlayInputMethod_None", 25)) {
    /*                   ^                           */
      *iv_return = VROverlayInputMethod_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRNotificationStyle_None", 25)) {
    /*                   ^                           */
      *iv_return = EVRNotificationStyle_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EChaperoneConfigFile_Live", 25)) {
    /*                   ^                           */
      *iv_return = EChaperoneConfigFile_Live;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EChaperoneConfigFile_Temp", 25)) {
    /*                   ^                           */
      *iv_return = EChaperoneConfigFile_Temp;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRState_VRState_NotReady", 25)) {
    /*                   ^                           */
      *iv_return = EVRState_VRState_NotReady;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVRButtonId_k_EButton_Max", 25)) {
    /*                   ^                           */
      *iv_return = EVRButtonId_k_EButton_Max;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "EVREventType_VREvent_None", 25)) {
    /*                   ^                           */
      *iv_return = EVREventType_VREvent_None;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_Quit", 25)) {
    /*                   ^                           */
      *iv_return = EVREventType_VREvent_Quit;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_26 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRButtonId_k_EButton_Grip EVRState_VRState_Searching
     EVRState_VRState_Undefined VROverlayInputMethod_Mouse */
  /* Offset 25 gives the best switch position.  */
  switch (name[25]) {
  case 'd':
    if (memEQ(name, "EVRState_VRState_Undefine", 25)) {
    /*                                        d      */
      *iv_return = EVRState_VRState_Undefined;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "VROverlayInputMethod_Mous", 25)) {
    /*                                        e      */
      *iv_return = VROverlayInputMethod_Mouse;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVRState_VRState_Searchin", 25)) {
    /*                                        g      */
      *iv_return = EVRState_VRState_Searching;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRButtonId_k_EButton_Gri", 25)) {
    /*                                        p      */
      *iv_return = EVRButtonId_k_EButton_Grip;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_27 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EColorSpace_ColorSpace_Auto EVRButtonId_k_EButton_Axis0
     EVRButtonId_k_EButton_Axis1 EVRButtonId_k_EButton_Axis2
     EVRButtonId_k_EButton_Axis3 EVRButtonId_k_EButton_Axis4
     EVREventType_VREvent_Scroll */
  /* Offset 26 gives the best switch position.  */
  switch (name[26]) {
  case '0':
    if (memEQ(name, "EVRButtonId_k_EButton_Axis", 26)) {
    /*                                         0      */
      *iv_return = EVRButtonId_k_EButton_Axis0;
      return PERL_constant_ISIV;
    }
    break;
  case '1':
    if (memEQ(name, "EVRButtonId_k_EButton_Axis", 26)) {
    /*                                         1      */
      *iv_return = EVRButtonId_k_EButton_Axis1;
      return PERL_constant_ISIV;
    }
    break;
  case '2':
    if (memEQ(name, "EVRButtonId_k_EButton_Axis", 26)) {
    /*                                         2      */
      *iv_return = EVRButtonId_k_EButton_Axis2;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "EVRButtonId_k_EButton_Axis", 26)) {
    /*                                         3      */
      *iv_return = EVRButtonId_k_EButton_Axis3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "EVRButtonId_k_EButton_Axis", 26)) {
    /*                                         4      */
      *iv_return = EVRButtonId_k_EButton_Axis4;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVREventType_VREvent_Scrol", 26)) {
    /*                                         l      */
      *iv_return = EVREventType_VREvent_Scroll;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EColorSpace_ColorSpace_Aut", 26)) {
    /*                                         o      */
      *iv_return = EColorSpace_ColorSpace_Auto;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_28 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_OK EColorSpace_ColorSpace_Gamma
     EVRButtonId_k_EButton_System EVRState_VRState_Ready_Alert */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'e':
    if (memEQ(name, "EVRState_VRState_Ready_Alert", 28)) {
    /*                      ^                           */
      *iv_return = EVRState_VRState_Ready_Alert;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ChaperoneCalibrationState_OK", 28)) {
    /*                      ^                           */
      *iv_return = ChaperoneCalibrationState_OK;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRButtonId_k_EButton_System", 28)) {
    /*                      ^                           */
      *iv_return = EVRButtonId_k_EButton_System;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EColorSpace_ColorSpace_Gamma", 28)) {
    /*                      ^                           */
      *iv_return = EColorSpace_ColorSpace_Gamma;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_29 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EColorSpace_ColorSpace_Linear EVRButtonId_k_EButton_DPad_Up
     EVRInitError_VRInitError_None EVRNotificationType_Transient
     EVRSubmitFlags_Submit_Default VROverlayFlags_NoDashboardTab
     VROverlayFlags_StereoPanorama */
  /* Offset 24 gives the best switch position.  */
  switch (name[24]) {
  case '_':
    if (memEQ(name, "EVRInitError_VRInitError_None", 29)) {
    /*                                       ^           */
      *iv_return = EVRInitError_VRInitError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRButtonId_k_EButton_DPad_Up", 29)) {
    /*                                       ^           */
      *iv_return = EVRButtonId_k_EButton_DPad_Up;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "EVRSubmitFlags_Submit_Default", 29)) {
    /*                                       ^           */
      *iv_return = EVRSubmitFlags_Submit_Default;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EColorSpace_ColorSpace_Linear", 29)) {
    /*                                       ^           */
      *iv_return = EColorSpace_ColorSpace_Linear;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "VROverlayFlags_StereoPanorama", 29)) {
    /*                                       ^           */
      *iv_return = VROverlayFlags_StereoPanorama;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "VROverlayFlags_NoDashboardTab", 29)) {
    /*                                       ^           */
      *iv_return = VROverlayFlags_NoDashboardTab;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVRNotificationType_Transient", 29)) {
    /*                                       ^           */
      *iv_return = EVRNotificationType_Transient;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_31 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Error EVRButtonId_k_EButton_DPad_Down
     EVRButtonId_k_EButton_DPad_Left EVREventType_VREvent_FocusEnter
     EVREventType_VREvent_FocusLeave EVREventType_VREvent_IpdChanged
     VROverlayFlags_ShowGamepadFocus */
  /* Offset 28 gives the best switch position.  */
  switch (name[28]) {
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_FocusLeave", 31)) {
    /*                                           ^         */
      *iv_return = EVREventType_VREvent_FocusLeave;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "VROverlayFlags_ShowGamepadFocus", 31)) {
    /*                                           ^         */
      *iv_return = VROverlayFlags_ShowGamepadFocus;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRButtonId_k_EButton_DPad_Left", 31)) {
    /*                                           ^         */
      *iv_return = EVRButtonId_k_EButton_DPad_Left;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVREventType_VREvent_IpdChanged", 31)) {
    /*                                           ^         */
      *iv_return = EVREventType_VREvent_IpdChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRButtonId_k_EButton_DPad_Down", 31)) {
    /*                                           ^         */
      *iv_return = EVRButtonId_k_EButton_DPad_Down;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ChaperoneCalibrationState_Error", 31)) {
    /*                                           ^         */
      *iv_return = ChaperoneCalibrationState_Error;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVREventType_VREvent_FocusEnter", 31)) {
    /*                                           ^         */
      *iv_return = EVREventType_VREvent_FocusEnter;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_32 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRButtonId_k_EButton_DPad_Right EVREventType_VREvent_ButtonPress
     EVREventType_VREvent_ButtonTouch EVREventType_VREvent_ImageFailed
     EVREventType_VREvent_ImageLoaded EVREventType_VREvent_ProcessQuit
     EVREventType_VREvent_RenderToast EVRInitError_VRInitError_Unknown
     EVRNotificationStyle_Application EVRState_VRState_Ready_Alert_Low
     EVRState_VRState_Searching_Alert */
  /* Offset 28 gives the best switch position.  */
  switch (name[28]) {
  case 'Q':
    if (memEQ(name, "EVREventType_VREvent_ProcessQuit", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_ProcessQuit;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRState_VRState_Ready_Alert_Low", 32)) {
    /*                                           ^          */
      *iv_return = EVRState_VRState_Ready_Alert_Low;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_ImageLoaded", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_ImageLoaded;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRButtonId_k_EButton_DPad_Right", 32)) {
    /*                                           ^          */
      *iv_return = EVRButtonId_k_EButton_DPad_Right;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_ImageFailed", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_ImageFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRState_VRState_Searching_Alert", 32)) {
    /*                                           ^          */
      *iv_return = EVRState_VRState_Searching_Alert;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_Unknown", 32)) {
    /*                                           ^          */
      *iv_return = EVRInitError_VRInitError_Unknown;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVREventType_VREvent_ButtonTouch", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_ButtonTouch;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_RenderToast", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_RenderToast;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVREventType_VREvent_ButtonPress", 32)) {
    /*                                           ^          */
      *iv_return = EVREventType_VREvent_ButtonPress;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRNotificationStyle_Application", 32)) {
    /*                                           ^          */
      *iv_return = EVRNotificationStyle_Application;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_33 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Warning EGraphicsAPIConvention_API_OpenGL
     EVREventType_VREvent_HideKeyboard EVREventType_VREvent_KeyboardDone
     EVREventType_VREvent_OverlayShown EVREventType_VREvent_ShowKeyboard
     EVREventType_VREvent_StatusUpdate EVREventType_VREvent_TouchPadMove
     EVRMouseButton_VRMouseButton_Left VROverlayFlags_SendVRScrollEvents
     VROverlayFlags_SideBySide_Crossed */
  /* Offset 22 gives the best switch position.  */
  switch (name[22]) {
  case 'B':
    if (memEQ(name, "EVRMouseButton_VRMouseButton_Left", 33)) {
    /*                                     ^                 */
      *iv_return = EVRMouseButton_VRMouseButton_Left;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EGraphicsAPIConvention_API_OpenGL", 33)) {
    /*                                     ^                 */
      *iv_return = EGraphicsAPIConvention_API_OpenGL;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "ChaperoneCalibrationState_Warning", 33)) {
    /*                                     ^                 */
      *iv_return = ChaperoneCalibrationState_Warning;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "VROverlayFlags_SendVRScrollEvents", 33)) {
    /*                                     ^                 */
      *iv_return = VROverlayFlags_SendVRScrollEvents;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_KeyboardDone", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_KeyboardDone;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVREventType_VREvent_ShowKeyboard", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_ShowKeyboard;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_HideKeyboard", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_HideKeyboard;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "VROverlayFlags_SideBySide_Crossed", 33)) {
    /*                                     ^                 */
      *iv_return = VROverlayFlags_SideBySide_Crossed;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVREventType_VREvent_TouchPadMove", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_TouchPadMove;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVREventType_VREvent_StatusUpdate", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_StatusUpdate;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "EVREventType_VREvent_OverlayShown", 33)) {
    /*                                     ^                 */
      *iv_return = EVREventType_VREvent_OverlayShown;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_34 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EGraphicsAPIConvention_API_DirectX EVREventType_VREvent_ButtonUnpress
     EVREventType_VREvent_ButtonUntouch EVREventType_VREvent_MouseButtonUp
     EVREventType_VREvent_OverlayHidden EVRMouseButton_VRMouseButton_Right
     VROverlayFlags_SideBySide_Parallel */
  /* Offset 31 gives the best switch position.  */
  switch (name[31]) {
  case 'c':
    if (memEQ(name, "EGraphicsAPIConvention_API_DirectX", 34)) {
    /*                                              ^         */
      *iv_return = EGraphicsAPIConvention_API_DirectX;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVREventType_VREvent_OverlayHidden", 34)) {
    /*                                              ^         */
      *iv_return = EVREventType_VREvent_OverlayHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_ButtonUnpress", 34)) {
    /*                                              ^         */
      *iv_return = EVREventType_VREvent_ButtonUnpress;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVRMouseButton_VRMouseButton_Right", 34)) {
    /*                                              ^         */
      *iv_return = EVRMouseButton_VRMouseButton_Right;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "VROverlayFlags_SideBySide_Parallel", 34)) {
    /*                                              ^         */
      *iv_return = VROverlayFlags_SideBySide_Parallel;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVREventType_VREvent_MouseButtonUp", 34)) {
    /*                                              ^         */
      *iv_return = EVREventType_VREvent_MouseButtonUp;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVREventType_VREvent_ButtonUntouch", 34)) {
    /*                                              ^         */
      *iv_return = EVREventType_VREvent_ButtonUntouch;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_35 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVREventType_VREvent_KeyboardClosed EVREventType_VREvent_MCImageUpdated
     EVREventType_VREvent_ResetDashboard EVREventType_VREvent_SceneFocusLost
     EVRInitError_VRInitError_IPC_Failed EVRInitError_VRInitError_Init_Retry
     EVRMouseButton_VRMouseButton_Middle EVRNotificationStyle_Contact_Active
     EVROverlayError_VROverlayError_None VROverlayFlags_AcceptsGamepadEvents
     VROverlayFlags_SendVRTouchpadEvents */
  /* Offset 30 gives the best switch position.  */
  switch (name[30]) {
  case 'R':
    if (memEQ(name, "EVRInitError_VRInitError_Init_Retry", 35)) {
    /*                                             ^           */
      *iv_return = EVRInitError_VRInitError_Init_Retry;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVROverlayError_VROverlayError_None", 35)) {
    /*                                             ^           */
      *iv_return = EVROverlayError_VROverlayError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_Failed", 35)) {
    /*                                             ^           */
      *iv_return = EVRInitError_VRInitError_IPC_Failed;
      return PERL_constant_ISIV;
    }
    break;
  case 'b':
    if (memEQ(name, "EVREventType_VREvent_ResetDashboard", 35)) {
    /*                                             ^           */
      *iv_return = EVREventType_VREvent_ResetDashboard;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVRNotificationStyle_Contact_Active", 35)) {
    /*                                             ^           */
      *iv_return = EVRNotificationStyle_Contact_Active;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVREventType_VREvent_MCImageUpdated", 35)) {
    /*                                             ^           */
      *iv_return = EVREventType_VREvent_MCImageUpdated;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRMouseButton_VRMouseButton_Middle", 35)) {
    /*                                             ^           */
      *iv_return = EVRMouseButton_VRMouseButton_Middle;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVREventType_VREvent_KeyboardClosed", 35)) {
    /*                                             ^           */
      *iv_return = EVREventType_VREvent_KeyboardClosed;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_SceneFocusLost", 35)) {
    /*                                             ^           */
      *iv_return = EVREventType_VREvent_SceneFocusLost;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "VROverlayFlags_AcceptsGamepadEvents", 35)) {
    /*                                             ^           */
      *iv_return = VROverlayFlags_AcceptsGamepadEvents;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "VROverlayFlags_SendVRTouchpadEvents", 35)) {
    /*                                             ^           */
      *iv_return = VROverlayFlags_SendVRTouchpadEvents;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_36 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRApplicationType_VRApplication_Max EVRButtonId_k_EButton_Dashboard_Back
     EVREventType_VREvent_MouseButtonDown EVREventType_VREvent_ScreenshotTaken
     EVRNotificationStyle_Contact_Enabled EVRSubmitFlags_Submit_GlRenderBuffer
     */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'a':
    if (memEQ(name, "EVRButtonId_k_EButton_Dashboard_Back", 36)) {
    /*                                      ^                   */
      *iv_return = EVRButtonId_k_EButton_Dashboard_Back;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRSubmitFlags_Submit_GlRenderBuffer", 36)) {
    /*                                      ^                   */
      *iv_return = EVRSubmitFlags_Submit_GlRenderBuffer;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRNotificationStyle_Contact_Enabled", 36)) {
    /*                                      ^                   */
      *iv_return = EVRNotificationStyle_Contact_Enabled;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRApplicationType_VRApplication_Max", 36)) {
    /*                                      ^                   */
      *iv_return = EVRApplicationType_VRApplication_Max;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVREventType_VREvent_ScreenshotTaken", 36)) {
    /*                                      ^                   */
      *iv_return = EVREventType_VREvent_ScreenshotTaken;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVREventType_VREvent_MouseButtonDown", 36)) {
    /*                                      ^                   */
      *iv_return = EVREventType_VREvent_MouseButtonDown;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_37 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EOverlayDirection_OverlayDirection_Up
     EVRButtonId_k_EButton_ApplicationMenu
     EVRButtonId_k_EButton_SteamVR_Trigger
     EVREventType_VREvent_EnterStandbyMode
     EVREventType_VREvent_HideRenderModels
     EVREventType_VREvent_LeaveStandbyMode
     EVREventType_VREvent_QuitAcknowledged
     EVREventType_VREvent_SceneFocusGained
     EVREventType_VREvent_ScreenshotFailed
     EVREventType_VREvent_ShowRenderModels
     EVRFirmwareError_VRFirmwareError_Fail
     EVRFirmwareError_VRFirmwareError_None
     EVRNotificationStyle_Contact_Disabled
     EVRSettingsError_VRSettingsError_None */
  /* Offset 22 gives the best switch position.  */
  switch (name[22]) {
  case 'A':
    if (memEQ(name, "EVRButtonId_k_EButton_ApplicationMenu", 37)) {
    /*                                     ^                     */
      *iv_return = EVRButtonId_k_EButton_ApplicationMenu;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "EVRButtonId_k_EButton_SteamVR_Trigger", 37)) {
    /*                                     ^                     */
      *iv_return = EVRButtonId_k_EButton_SteamVR_Trigger;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVREventType_VREvent_SceneFocusGained", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_SceneFocusGained;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_ScreenshotFailed", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_ScreenshotFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_LeaveStandbyMode", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_LeaveStandbyMode;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVREventType_VREvent_ShowRenderModels", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_ShowRenderModels;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_HideRenderModels", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_HideRenderModels;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EOverlayDirection_OverlayDirection_Up", 37)) {
    /*                                     ^                     */
      *iv_return = EOverlayDirection_OverlayDirection_Up;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRFirmwareError_VRFirmwareError_Fail", 37)) {
    /*                                     ^                     */
      *iv_return = EVRFirmwareError_VRFirmwareError_Fail;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRFirmwareError_VRFirmwareError_None", 37)) {
    /*                                     ^                     */
      *iv_return = EVRFirmwareError_VRFirmwareError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVREventType_VREvent_EnterStandbyMode", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_EnterStandbyMode;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRNotificationStyle_Contact_Disabled", 37)) {
    /*                                     ^                     */
      *iv_return = EVRNotificationStyle_Contact_Disabled;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRSettingsError_VRSettingsError_None", 37)) {
    /*                                     ^                     */
      *iv_return = EVRSettingsError_VRSettingsError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVREventType_VREvent_QuitAcknowledged", 37)) {
    /*                                     ^                     */
      *iv_return = EVREventType_VREvent_QuitAcknowledged;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_38 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRApplicationType_VRApplication_Other
     EVRApplicationType_VRApplication_Scene
     EVRButtonId_k_EButton_SteamVR_Touchpad
     EVREventType_VREvent_InputFocusChanged
     EVREventType_VREvent_KeyboardCharInput
     EVREventType_VREvent_RequestScreenshot
     EVREventType_VREvent_SceneFocusChanged
     EVRInitError_VRInitError_Driver_Failed
     EVRInitError_VRInitError_Init_Internal
     VROverlayFlags_ShowTouchPadScrollWheel */
  /* Offset 26 gives the best switch position.  */
  switch (name[26]) {
  case 'F':
    if (memEQ(name, "EVREventType_VREvent_InputFocusChanged", 38)) {
    /*                                         ^                  */
      *iv_return = EVREventType_VREvent_InputFocusChanged;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_SceneFocusChanged", 38)) {
    /*                                         ^                  */
      *iv_return = EVREventType_VREvent_SceneFocusChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_KeyboardCharInput", 38)) {
    /*                                         ^                  */
      *iv_return = EVREventType_VREvent_KeyboardCharInput;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVRApplicationType_VRApplication_Other", 38)) {
    /*                                         ^                  */
      *iv_return = EVRApplicationType_VRApplication_Other;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRApplicationType_VRApplication_Scene", 38)) {
    /*                                         ^                  */
      *iv_return = EVRApplicationType_VRApplication_Scene;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "VROverlayFlags_ShowTouchPadScrollWheel", 38)) {
    /*                                         ^                  */
      *iv_return = VROverlayFlags_ShowTouchPadScrollWheel;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRButtonId_k_EButton_SteamVR_Touchpad", 38)) {
    /*                                         ^                  */
      *iv_return = EVRButtonId_k_EButton_SteamVR_Touchpad;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_Init_Internal", 38)) {
    /*                                         ^                  */
      *iv_return = EVRInitError_VRInitError_Init_Internal;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_Failed", 38)) {
    /*                                         ^                  */
      *iv_return = EVRInitError_VRInitError_Driver_Failed;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_RequestScreenshot", 38)) {
    /*                                         ^                  */
      *iv_return = EVREventType_VREvent_RequestScreenshot;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_39 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EOverlayDirection_OverlayDirection_Down
     EOverlayDirection_OverlayDirection_Left
     EVREventType_VREvent_DashboardActivated
     EVREventType_VREvent_DashboardRequested
     EVREventType_VREvent_InputFocusCaptured
     EVREventType_VREvent_InputFocusReleased
     EVREventType_VREvent_Notification_Shown
     EVRInitError_VRInitError_Driver_Unknown
     EVRInitError_VRInitError_Init_NoLogPath
     EVROverlayError_VROverlayError_KeyInUse
     EVRScreenshotType_VRScreenshotType_Mono
     EVRScreenshotType_VRScreenshotType_None
     VROverlayFlags_SortWithNonSceneOverlays */
  /* Offset 35 gives the best switch position.  */
  switch (name[35]) {
  case 'D':
    if (memEQ(name, "EOverlayDirection_OverlayDirection_Down", 39)) {
    /*                                                  ^          */
      *iv_return = EOverlayDirection_OverlayDirection_Down;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "EOverlayDirection_OverlayDirection_Left", 39)) {
    /*                                                  ^          */
      *iv_return = EOverlayDirection_OverlayDirection_Left;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_Mono", 39)) {
    /*                                                  ^          */
      *iv_return = EVRScreenshotType_VRScreenshotType_Mono;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_None", 39)) {
    /*                                                  ^          */
      *iv_return = EVRScreenshotType_VRScreenshotType_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NoLogPath", 39)) {
    /*                                                  ^          */
      *iv_return = EVRInitError_VRInitError_Init_NoLogPath;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_DashboardActivated", 39)) {
    /*                                                  ^          */
      *iv_return = EVREventType_VREvent_DashboardActivated;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_InputFocusReleased", 39)) {
    /*                                                  ^          */
      *iv_return = EVREventType_VREvent_InputFocusReleased;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVREventType_VREvent_Notification_Shown", 39)) {
    /*                                                  ^          */
      *iv_return = EVREventType_VREvent_Notification_Shown;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "VROverlayFlags_SortWithNonSceneOverlays", 39)) {
    /*                                                  ^          */
      *iv_return = VROverlayFlags_SortWithNonSceneOverlays;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_Unknown", 39)) {
    /*                                                  ^          */
      *iv_return = EVRInitError_VRInitError_Driver_Unknown;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVROverlayError_VROverlayError_KeyInUse", 39)) {
    /*                                                  ^          */
      *iv_return = EVROverlayError_VROverlayError_KeyInUse;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_DashboardRequested", 39)) {
    /*                                                  ^          */
      *iv_return = EVREventType_VREvent_DashboardRequested;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVREventType_VREvent_InputFocusCaptured", 39)) {
    /*                                                  ^          */
      *iv_return = EVREventType_VREvent_InputFocusCaptured;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_40 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EOverlayDirection_OverlayDirection_Count
     EOverlayDirection_OverlayDirection_Right
     EVRApplicationType_VRApplication_Overlay
     EVRApplicationType_VRApplication_Utility
     EVREventType_VREvent_DriverRequestedQuit
     EVREventType_VREvent_Notification_Hidden
     EVREventType_VREvent_OverlayFocusChanged
     EVREventType_VREvent_ScreenshotTriggered
     EVREventType_VREvent_SeatedZeroPoseReset
     EVRFirmwareError_VRFirmwareError_Success
     EVRInitError_VRInitError_Driver_HmdInUse */
  /* Offset 33 gives the best switch position.  */
  switch (name[33]) {
  case 'C':
    if (memEQ(name, "EVREventType_VREvent_OverlayFocusChanged", 40)) {
    /*                                                ^             */
      *iv_return = EVREventType_VREvent_OverlayFocusChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "EVRApplicationType_VRApplication_Overlay", 40)) {
    /*                                                ^             */
      *iv_return = EVRApplicationType_VRApplication_Overlay;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "EVRFirmwareError_VRFirmwareError_Success", 40)) {
    /*                                                ^             */
      *iv_return = EVRFirmwareError_VRFirmwareError_Success;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVRApplicationType_VRApplication_Utility", 40)) {
    /*                                                ^             */
      *iv_return = EVRApplicationType_VRApplication_Utility;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVREventType_VREvent_Notification_Hidden", 40)) {
    /*                                                ^             */
      *iv_return = EVREventType_VREvent_Notification_Hidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_ScreenshotTriggered", 40)) {
    /*                                                ^             */
      *iv_return = EVREventType_VREvent_ScreenshotTriggered;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_HmdInUse", 40)) {
    /*                                                ^             */
      *iv_return = EVRInitError_VRInitError_Driver_HmdInUse;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EOverlayDirection_OverlayDirection_Count", 40)) {
    /*                                                ^             */
      *iv_return = EOverlayDirection_OverlayDirection_Count;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EOverlayDirection_OverlayDirection_Right", 40)) {
    /*                                                ^             */
      *iv_return = EOverlayDirection_OverlayDirection_Right;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_SeatedZeroPoseReset", 40)) {
    /*                                                ^             */
      *iv_return = EVREventType_VREvent_SeatedZeroPoseReset;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVREventType_VREvent_DriverRequestedQuit", 40)) {
    /*                                                ^             */
      *iv_return = EVREventType_VREvent_DriverRequestedQuit;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_41 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedPropertyError_TrackedProp_Success
     ETrackingResult_TrackingResult_Running_OK
     EVRCompositorError_VRCompositorError_None
     EVREventType_VREvent_DashboardDeactivated
     EVREventType_VREvent_TrackedDeviceUpdated
     EVRInitError_VRInitError_Driver_NotLoaded
     EVRInitError_VRInitError_Init_HmdNotFound
     EVROverlayError_VROverlayError_KeyTooLong
     EVROverlayError_VROverlayError_NoNeighbor
     EVRScreenshotError_VRScreenshotError_None
     EVRScreenshotType_VRScreenshotType_Stereo */
  /* Offset 31 gives the best switch position.  */
  switch (name[31]) {
  case 'E':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_None", 41)) {
    /*                                              ^                */
      *iv_return = EVRCompositorError_VRCompositorError_None;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_None", 41)) {
    /*                                              ^                */
      *iv_return = EVRScreenshotError_VRScreenshotError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'K':
    if (memEQ(name, "EVROverlayError_VROverlayError_KeyTooLong", 41)) {
    /*                                              ^                */
      *iv_return = EVROverlayError_VROverlayError_KeyTooLong;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "EVROverlayError_VROverlayError_NoNeighbor", 41)) {
    /*                                              ^                */
      *iv_return = EVROverlayError_VROverlayError_NoNeighbor;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "ETrackingResult_TrackingResult_Running_OK", 41)) {
    /*                                              ^                */
      *iv_return = ETrackingResult_TrackingResult_Running_OK;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_NotLoaded", 41)) {
    /*                                              ^                */
      *iv_return = EVRInitError_VRInitError_Driver_NotLoaded;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_DashboardDeactivated", 41)) {
    /*                                              ^                */
      *iv_return = EVREventType_VREvent_DashboardDeactivated;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceUpdated", 41)) {
    /*                                              ^                */
      *iv_return = EVREventType_VREvent_TrackedDeviceUpdated;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRInitError_VRInitError_Init_HmdNotFound", 41)) {
    /*                                              ^                */
      *iv_return = EVRInitError_VRInitError_Init_HmdNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_Success", 41)) {
    /*                                              ^                */
      *iv_return = ETrackedPropertyError_TrackedProp_Success;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_Stereo", 41)) {
    /*                                              ^                */
      *iv_return = EVRScreenshotType_VRScreenshotType_Stereo;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_42 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceClass_TrackedDeviceClass_HMD
     ETrackedDeviceProperty_Prop_HasCamera_Bool
     EVRApplicationType_VRApplication_VRMonitor
     EVREventType_VREvent_FirmwareUpdateStarted
     EVRInitError_VRInitError_Compositor_Failed
     EVRInitError_VRInitError_Driver_HmdUnknown
     EVRInitError_VRInitError_IPC_ConnectFailed
     EVRInitError_VRInitError_Init_FileNotFound
     EVRInitError_VRInitError_Init_NoConfigPath
     EVRInitError_VRInitError_Init_ShuttingDown
     EVROverlayError_VROverlayError_NameTooLong
     EVRScreenshotType_VRScreenshotType_Cubemap
     EVRSettingsError_VRSettingsError_IPCFailed */
  /* Offset 35 gives the best switch position.  */
  switch (name[35]) {
  case 'C':
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_Cubemap", 42)) {
    /*                                                  ^             */
      *iv_return = EVRScreenshotType_VRScreenshotType_Cubemap;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRSettingsError_VRSettingsError_IPCFailed", 42)) {
    /*                                                  ^             */
      *iv_return = EVRSettingsError_VRSettingsError_IPCFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "EVRApplicationType_VRApplication_VRMonitor", 42)) {
    /*                                                  ^             */
      *iv_return = EVRApplicationType_VRApplication_VRMonitor;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "EVREventType_VREvent_FirmwareUpdateStarted", 42)) {
    /*                                                  ^             */
      *iv_return = EVREventType_VREvent_FirmwareUpdateStarted;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "EVROverlayError_VROverlayError_NameTooLong", 42)) {
    /*                                                  ^             */
      *iv_return = EVROverlayError_VROverlayError_NameTooLong;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_HmdUnknown", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_Driver_HmdUnknown;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRInitError_VRInitError_Compositor_Failed", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_Compositor_Failed;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "ETrackedDeviceClass_TrackedDeviceClass_HMD", 42)) {
    /*                                                  ^             */
      *iv_return = ETrackedDeviceClass_TrackedDeviceClass_HMD;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NoConfigPath", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_Init_NoConfigPath;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_Init_ShuttingDown", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_Init_ShuttingDown;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRInitError_VRInitError_Init_FileNotFound", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_Init_FileNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_HasCamera_Bool", 42)) {
    /*                                                  ^             */
      *iv_return = ETrackedDeviceProperty_Prop_HasCamera_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_ConnectFailed", 42)) {
    /*                                                  ^             */
      *iv_return = EVRInitError_VRInitError_IPC_ConnectFailed;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_43 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_Axis0Type_Int32
     ETrackedDeviceProperty_Prop_Axis1Type_Int32
     ETrackedDeviceProperty_Prop_Axis2Type_Int32
     ETrackedDeviceProperty_Prop_Axis3Type_Int32
     ETrackedDeviceProperty_Prop_Axis4Type_Int32
     EVRApplicationError_VRApplicationError_None
     EVRApplicationType_VRApplication_Background
     EVREventType_VREvent_ApplicationListUpdated
     EVREventType_VREvent_DashboardGuideButtonUp
     EVREventType_VREvent_DashboardThumbSelected
     EVREventType_VREvent_FirmwareUpdateFinished
     EVREventType_VREvent_Notification_Destroyed
     EVREventType_VREvent_QuitAborted_UserPrompt
     EVREventType_VREvent_TrackedDeviceActivated
     EVRNotificationError_VRNotificationError_OK
     EVRRenderModelError_VRRenderModelError_None
     EVRSettingsError_VRSettingsError_ReadFailed */
  /* Offset 32 gives the best switch position.  */
  switch (name[32]) {
  case '0':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Axis0Type_Int32", 43)) {
    /*                                               ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_Axis0Type_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case '1':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Axis1Type_Int32", 43)) {
    /*                                               ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_Axis1Type_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case '2':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Axis2Type_Int32", 43)) {
    /*                                               ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_Axis2Type_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Axis3Type_Int32", 43)) {
    /*                                               ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_Axis3Type_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Axis4Type_Int32", 43)) {
    /*                                               ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_Axis4Type_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "EVREventType_VREvent_ApplicationListUpdated", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_ApplicationListUpdated;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRApplicationType_VRApplication_Background", 43)) {
    /*                                               ^                 */
      *iv_return = EVRApplicationType_VRApplication_Background;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_QuitAborted_UserPrompt", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_QuitAborted_UserPrompt;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRSettingsError_VRSettingsError_ReadFailed", 43)) {
    /*                                               ^                 */
      *iv_return = EVRSettingsError_VRSettingsError_ReadFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_FirmwareUpdateFinished", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_FirmwareUpdateFinished;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceActivated", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_TrackedDeviceActivated;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_DashboardGuideButtonUp", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_DashboardGuideButtonUp;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRNotificationError_VRNotificationError_OK", 43)) {
    /*                                               ^                 */
      *iv_return = EVRNotificationError_VRNotificationError_OK;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_None", 43)) {
    /*                                               ^                 */
      *iv_return = EVRRenderModelError_VRRenderModelError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_None", 43)) {
    /*                                               ^                 */
      *iv_return = EVRApplicationError_VRApplicationError_None;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_Notification_Destroyed", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_Notification_Destroyed;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVREventType_VREvent_DashboardThumbSelected", 43)) {
    /*                                               ^                 */
      *iv_return = EVREventType_VREvent_DashboardThumbSelected;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_44 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceClass_TrackedDeviceClass_Other
     ETrackedDeviceProperty_Prop_IsOnDesktop_Bool
     ETrackedDeviceProperty_Prop_ModeLabel_String
     ETrackingResult_TrackingResult_Uninitialized
     EVRControllerAxisType_k_eControllerAxis_None
     EVREventType_VREvent_ApplicationMimeTypeLoad
     EVREventType_VREvent_ChaperoneDataHasChanged
     EVREventType_VREvent_OverlayGamepadFocusLost
     EVREventType_VREvent_SceneApplicationChanged
     EVREventType_VREvent_WatchdogWakeUpRequested
     EVRInitError_VRInitError_IPC_MutexInitFailed
     EVRInitError_VRInitError_Init_NotInitialized
     EVRInitError_VRInitError_Init_TooManyObjects
     EVROverlayError_VROverlayError_ArrayTooSmall
     EVROverlayError_VROverlayError_InvalidHandle
     EVROverlayError_VROverlayError_RequestFailed
     EVRSettingsError_VRSettingsError_WriteFailed */
  /* Offset 31 gives the best switch position.  */
  switch (name[31]) {
  case 'A':
    if (memEQ(name, "EVROverlayError_VROverlayError_ArrayTooSmall", 44)) {
    /*                                              ^                   */
      *iv_return = EVROverlayError_VROverlayError_ArrayTooSmall;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "EVROverlayError_VROverlayError_InvalidHandle", 44)) {
    /*                                              ^                   */
      *iv_return = EVROverlayError_VROverlayError_InvalidHandle;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "EVROverlayError_VROverlayError_RequestFailed", 44)) {
    /*                                              ^                   */
      *iv_return = EVROverlayError_VROverlayError_RequestFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "ETrackingResult_TrackingResult_Uninitialized", 44)) {
    /*                                              ^                   */
      *iv_return = ETrackingResult_TrackingResult_Uninitialized;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_ChaperoneDataHasChanged", 44)) {
    /*                                              ^                   */
      *iv_return = EVREventType_VREvent_ChaperoneDataHasChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "ETrackedDeviceClass_TrackedDeviceClass_Other", 44)) {
    /*                                              ^                   */
      *iv_return = ETrackedDeviceClass_TrackedDeviceClass_Other;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_SceneApplicationChanged", 44)) {
    /*                                              ^                   */
      *iv_return = EVREventType_VREvent_SceneApplicationChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ModeLabel_String", 44)) {
    /*                                              ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_ModeLabel_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_OverlayGamepadFocusLost", 44)) {
    /*                                              ^                   */
      *iv_return = EVREventType_VREvent_OverlayGamepadFocusLost;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "EVREventType_VREvent_WatchdogWakeUpRequested", 44)) {
    /*                                              ^                   */
      *iv_return = EVREventType_VREvent_WatchdogWakeUpRequested;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRControllerAxisType_k_eControllerAxis_None", 44)) {
    /*                                              ^                   */
      *iv_return = EVRControllerAxisType_k_eControllerAxis_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_IsOnDesktop_Bool", 44)) {
    /*                                              ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_IsOnDesktop_Bool;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_ApplicationMimeTypeLoad", 44)) {
    /*                                              ^                   */
      *iv_return = EVREventType_VREvent_ApplicationMimeTypeLoad;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NotInitialized", 44)) {
    /*                                              ^                   */
      *iv_return = EVRInitError_VRInitError_Init_NotInitialized;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_TooManyObjects", 44)) {
    /*                                              ^                   */
      *iv_return = EVRInitError_VRInitError_Init_TooManyObjects;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRSettingsError_VRSettingsError_WriteFailed", 44)) {
    /*                                              ^                   */
      *iv_return = EVRSettingsError_VRSettingsError_WriteFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_MutexInitFailed", 44)) {
    /*                                              ^                   */
      *iv_return = EVRInitError_VRInitError_IPC_MutexInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_45 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_DeviceClass_Int32
     ETrackedDeviceProperty_Prop_VRCVersion_Uint64
     EVREventType_VREvent_AudioSettingsHaveChanged
     EVREventType_VREvent_DashboardGuideButtonDown
     EVREventType_VREvent_TrackedDeviceDeactivated
     EVREventType_VREvent_TrackedDeviceRoleChanged
     EVRInitError_VRInitError_Driver_NotCalibrated
     EVRInitError_VRInitError_IPC_ServerInitFailed
     EVRInitError_VRInitError_Init_FactoryNotFound
     EVROverlayError_VROverlayError_InvalidTexture
     EVROverlayError_VROverlayError_UnknownOverlay
     EVRScreenshotError_VRScreenshotError_NotFound */
  /* Offset 34 gives the best switch position.  */
  switch (name[34]) {
  case 'C':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceClass_Int32", 45)) {
    /*                                                 ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceClass_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceDeactivated", 45)) {
    /*                                                 ^                 */
      *iv_return = EVREventType_VREvent_TrackedDeviceDeactivated;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "EVREventType_VREvent_AudioSettingsHaveChanged", 45)) {
    /*                                                 ^                 */
      *iv_return = EVREventType_VREvent_AudioSettingsHaveChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceRoleChanged", 45)) {
    /*                                                 ^                 */
      *iv_return = EVREventType_VREvent_TrackedDeviceRoleChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVROverlayError_VROverlayError_InvalidTexture", 45)) {
    /*                                                 ^                 */
      *iv_return = EVROverlayError_VROverlayError_InvalidTexture;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_DashboardGuideButtonDown", 45)) {
    /*                                                 ^                 */
      *iv_return = EVREventType_VREvent_DashboardGuideButtonDown;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVROverlayError_VROverlayError_UnknownOverlay", 45)) {
    /*                                                 ^                 */
      *iv_return = EVROverlayError_VROverlayError_UnknownOverlay;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRInitError_VRInitError_Init_FactoryNotFound", 45)) {
    /*                                                 ^                 */
      *iv_return = EVRInitError_VRInitError_Init_FactoryNotFound;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_NotFound", 45)) {
    /*                                                 ^                 */
      *iv_return = EVRScreenshotError_VRScreenshotError_NotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_ServerInitFailed", 45)) {
    /*                                                 ^                 */
      *iv_return = EVRInitError_VRInitError_IPC_ServerInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_VRCVersion_Uint64", 45)) {
    /*                                                 ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_VRCVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_NotCalibrated", 45)) {
    /*                                                 ^                 */
      *iv_return = EVRInitError_VRInitError_Driver_NotCalibrated;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_46 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceClass_TrackedDeviceClass_Invalid
     ETrackedDeviceProperty_Prop_EdidVendorID_Int32
     ETrackedDeviceProperty_Prop_FPGAVersion_Uint64
     ETrackedDeviceProperty_Prop_ModelNumber_String
     ETrackingUniverseOrigin_TrackingUniverseSeated
     EVRApplicationType_VRApplication_SteamWatchdog
     EVREventType_VREvent_CameraSettingsHaveChanged
     EVREventType_VREvent_OverlayGamepadFocusGained
     EVRInitError_VRInitError_Init_InvalidInterface
     EVRRenderModelError_VRRenderModelError_Loading */
  /* Offset 35 gives the best switch position.  */
  switch (name[35]) {
  case 'F':
    if (memEQ(name, "EVREventType_VREvent_OverlayGamepadFocusGained", 46)) {
    /*                                                  ^                 */
      *iv_return = EVREventType_VREvent_OverlayGamepadFocusGained;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "EVREventType_VREvent_CameraSettingsHaveChanged", 46)) {
    /*                                                  ^                 */
      *iv_return = EVREventType_VREvent_CameraSettingsHaveChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "ETrackedDeviceClass_TrackedDeviceClass_Invalid", 46)) {
    /*                                                  ^                 */
      *iv_return = ETrackedDeviceClass_TrackedDeviceClass_Invalid;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_EdidVendorID_Int32", 46)) {
    /*                                                  ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_EdidVendorID_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRApplicationType_VRApplication_SteamWatchdog", 46)) {
    /*                                                  ^                 */
      *iv_return = EVRApplicationType_VRApplication_SteamWatchdog;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_Init_InvalidInterface", 46)) {
    /*                                                  ^                 */
      *iv_return = EVRInitError_VRInitError_Init_InvalidInterface;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ModelNumber_String", 46)) {
    /*                                                  ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_ModelNumber_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_Loading", 46)) {
    /*                                                  ^                 */
      *iv_return = EVRRenderModelError_VRRenderModelError_Loading;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FPGAVersion_Uint64", 46)) {
    /*                                                  ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_FPGAVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "ETrackingUniverseOrigin_TrackingUniverseSeated", 46)) {
    /*                                                  ^                 */
      *iv_return = ETrackingUniverseOrigin_TrackingUniverseSeated;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_47 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Error_PlayAreaInvalid
     ETrackedDeviceProperty_Prop_DisplayGCType_Int32
     ETrackedDeviceProperty_Prop_DisplayMCType_Int32
     ETrackedDeviceProperty_Prop_EdidProductID_Int32
     ETrackedDeviceProperty_Prop_RadioVersion_Uint64
     ETrackedDeviceProperty_Prop_SerialNumber_String
     ETrackedDeviceProperty_Prop_UserIpdMeters_Float
     ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool
     ETrackedPropertyError_TrackedProp_InvalidDevice
     ETrackedPropertyError_TrackedProp_WrongDataType
     EVRControllerAxisType_k_eControllerAxis_Trigger
     EVRInitError_VRInitError_Init_AppInfoInitFailed
     EVRInitError_VRInitError_Init_HmdDriverIdIsNone
     EVRInitError_VRInitError_Init_InterfaceNotFound
     EVRInitError_VRInitError_Init_VRMonitorNotFound
     EVROverlayError_VROverlayError_InvalidParameter
     EVROverlayError_VROverlayError_PermissionDenied
     EVROverlayError_VROverlayError_UnableToLoadFile
     EVRRenderModelError_VRRenderModelError_NoShapes
     EVRScreenshotType_VRScreenshotType_MonoPanorama
     EVRTrackedCameraError_VRTrackedCameraError_None */
  /* Offset 31 gives the best switch position.  */
  switch (name[31]) {
  case 'C':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_None", 47)) {
    /*                                              ^                      */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_None;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "EVROverlayError_VROverlayError_InvalidParameter", 47)) {
    /*                                              ^                      */
      *iv_return = EVROverlayError_VROverlayError_InvalidParameter;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "EVROverlayError_VROverlayError_PermissionDenied", 47)) {
    /*                                              ^                      */
      *iv_return = EVROverlayError_VROverlayError_PermissionDenied;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "EVRInitError_VRInitError_Init_VRMonitorNotFound", 47)) {
    /*                                              ^                      */
      *iv_return = EVRInitError_VRInitError_Init_VRMonitorNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVROverlayError_VROverlayError_UnableToLoadFile", 47)) {
    /*                                              ^                      */
      *iv_return = EVROverlayError_VROverlayError_UnableToLoadFile;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "ChaperoneCalibrationState_Error_PlayAreaInvalid", 47)) {
    /*                                              ^                      */
      *iv_return = ChaperoneCalibrationState_Error_PlayAreaInvalid;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_EdidProductID_Int32", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_EdidProductID_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_NoShapes", 47)) {
    /*                                              ^                      */
      *iv_return = EVRRenderModelError_VRRenderModelError_NoShapes;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_RadioVersion_Uint64", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_RadioVersion_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_SerialNumber_String", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_SerialNumber_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRControllerAxisType_k_eControllerAxis_Trigger", 47)) {
    /*                                              ^                      */
      *iv_return = EVRControllerAxisType_k_eControllerAxis_Trigger;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRInitError_VRInitError_Init_HmdDriverIdIsNone", 47)) {
    /*                                              ^                      */
      *iv_return = EVRInitError_VRInitError_Init_HmdDriverIdIsNone;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_Init_InterfaceNotFound", 47)) {
    /*                                              ^                      */
      *iv_return = EVRInitError_VRInitError_Init_InterfaceNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_InvalidDevice", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedPropertyError_TrackedProp_InvalidDevice;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_WrongDataType", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedPropertyError_TrackedProp_WrongDataType;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCType_Int32", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCType_Int32;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayMCType_Int32", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayMCType_Int32;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_AppInfoInitFailed", 47)) {
    /*                                              ^                      */
      *iv_return = EVRInitError_VRInitError_Init_AppInfoInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_UserIpdMeters_Float", 47)) {
    /*                                              ^                      */
      *iv_return = ETrackedDeviceProperty_Prop_UserIpdMeters_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_MonoPanorama", 47)) {
    /*                                              ^                      */
      *iv_return = EVRScreenshotType_VRScreenshotType_MonoPanorama;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_48 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EDeviceActivityLevel_k_EDeviceActivityLevel_Idle
     ETrackedDeviceProperty_Prop_DisplayGCScale_Float
     ETrackedDeviceProperty_Prop_DisplayMCScale_Float
     ETrackedDeviceProperty_Prop_DongleVersion_Uint64
     ETrackedDeviceProperty_Prop_DriverVersion_String
     ETrackedPropertyError_TrackedProp_BufferTooSmall
     ETrackingUniverseOrigin_TrackingUniverseStanding
     EVRApplicationError_VRApplicationError_IPCFailed
     EVRControllerAxisType_k_eControllerAxis_Joystick
     EVRControllerAxisType_k_eControllerAxis_TrackPad
     EVREventType_VREvent_BackgroundSettingHasChanged
     EVREventType_VREvent_ChaperoneTempDataHasChanged
     EVREventType_VREvent_ChaperoneUniverseHasChanged
     EVREventType_VREvent_OverlaySharedTextureChanged
     EVREventType_VREvent_SubmitScreenshotToDashboard
     EVREventType_VREvent_VendorSpecific_Reserved_End
     EVRInitError_VRInitError_Driver_RuntimeOutOfDate
     EVRInitError_VRInitError_Init_InitCanceledByUser
     EVRInitError_VRInitError_Init_SettingsInitFailed
     EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES */
  /* Offset 30 gives the best switch position.  */
  switch (name[30]) {
  case 'A':
    if (memEQ(name, "EDeviceActivityLevel_k_EDeviceActivityLevel_Idle", 48)) {
    /*                                             ^                        */
      *iv_return = EDeviceActivityLevel_k_EDeviceActivityLevel_Idle;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES", 48)) {
    /*                                             ^                        */
      *iv_return = EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "EVRInitError_VRInitError_Init_InitCanceledByUser", 48)) {
    /*                                             ^                        */
      *iv_return = EVRInitError_VRInitError_Init_InitCanceledByUser;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "EVRInitError_VRInitError_Init_SettingsInitFailed", 48)) {
    /*                                             ^                        */
      *iv_return = EVRInitError_VRInitError_Init_SettingsInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "EVREventType_VREvent_ChaperoneTempDataHasChanged", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_ChaperoneTempDataHasChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVREventType_VREvent_ChaperoneUniverseHasChanged", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_ChaperoneUniverseHasChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVREventType_VREvent_OverlaySharedTextureChanged", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_OverlaySharedTextureChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVREventType_VREvent_VendorSpecific_Reserved_End", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_VendorSpecific_Reserved_End;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVREventType_VREvent_BackgroundSettingHasChanged", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_BackgroundSettingHasChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVREventType_VREvent_SubmitScreenshotToDashboard", 48)) {
    /*                                             ^                        */
      *iv_return = EVREventType_VREvent_SubmitScreenshotToDashboard;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DriverVersion_String", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DriverVersion_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRApplicationError_VRApplicationError_IPCFailed", 48)) {
    /*                                             ^                        */
      *iv_return = EVRApplicationError_VRApplicationError_IPCFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DongleVersion_Uint64", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DongleVersion_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackingUniverseOrigin_TrackingUniverseStanding", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackingUniverseOrigin_TrackingUniverseStanding;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRControllerAxisType_k_eControllerAxis_Joystick", 48)) {
    /*                                             ^                        */
      *iv_return = EVRControllerAxisType_k_eControllerAxis_Joystick;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRControllerAxisType_k_eControllerAxis_TrackPad", 48)) {
    /*                                             ^                        */
      *iv_return = EVRControllerAxisType_k_eControllerAxis_TrackPad;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_BufferTooSmall", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackedPropertyError_TrackedProp_BufferTooSmall;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Driver_RuntimeOutOfDate", 48)) {
    /*                                             ^                        */
      *iv_return = EVRInitError_VRInitError_Driver_RuntimeOutOfDate;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCScale_Float", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCScale_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayMCScale_Float", 48)) {
    /*                                             ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayMCScale_Float;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_49 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EChaperoneImportFlags_EChaperoneImport_BoundsOnly
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE
     ETrackedDeviceClass_TrackedDeviceClass_Controller
     ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool
     ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool
     ETrackedDeviceProperty_Prop_DisplayGCImage_String
     ETrackedDeviceProperty_Prop_DisplayGCOffset_Float
     ETrackedDeviceProperty_Prop_DisplayMCOffset_Float
     ETrackedDeviceProperty_Prop_LensCenterLeftU_Float
     ETrackedDeviceProperty_Prop_LensCenterLeftV_Float
     ETrackedPropertyError_TrackedProp_NotYetAvailable
     ETrackedPropertyError_TrackedProp_UnknownProperty
     ETrackingResult_TrackingResult_Running_OutOfRange
     EVRApplicationError_VRApplicationError_IsTemplate
     EVRApplicationError_VRApplicationError_NoManifest
     EVRComponentProperty_VRComponentProperty_IsStatic
     EVREventType_VREvent_ApplicationTransitionAborted
     EVREventType_VREvent_ApplicationTransitionStarted
     EVREventType_VREvent_ChaperoneSettingsHaveChanged
     EVREventType_VREvent_Compositor_MirrorWindowShown
     EVREventType_VREvent_ModelSkinSettingsHaveChanged
     EVRInitError_VRInitError_IPC_CompositorInitFailed
     EVRInitError_VRInitError_Init_AnotherAppLaunching
     EVRInitError_VRInitError_Init_InstallationCorrupt
     EVRInitError_VRInitError_Init_VRClientDLLNotFound
     EVRNotificationType_Transient_SystemWithUserValue
     EVROverlayError_VROverlayError_WrongTransformType
     EVRRenderModelError_VRRenderModelError_InvalidArg
     EVRScreenshotType_VRScreenshotType_StereoPanorama
     VROverlayFlags_TransferOwnershipToInternalProcess */
  /* Offset 43 gives the best switch position.  */
  switch (name[43]) {
  case 'E':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE", 49)) {
    /*                                                          ^            */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE;
      return PERL_constant_ISIV;
    }
    break;
  case 'F':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_CompositorInitFailed", 49)) {
    /*                                                          ^            */
      *iv_return = EVRInitError_VRInitError_IPC_CompositorInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCImage_String", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCImage_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRComponentProperty_VRComponentProperty_IsStatic", 49)) {
    /*                                                          ^            */
      *iv_return = EVRComponentProperty_VRComponentProperty_IsStatic;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCOffset_Float", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCOffset_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayMCOffset_Float", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayMCOffset_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_LensCenterLeftU_Float", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_LensCenterLeftU_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_LensCenterLeftV_Float", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_LensCenterLeftV_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'b':
    if (memEQ(name, "EVREventType_VREvent_ApplicationTransitionAborted", 49)) {
    /*                                                          ^            */
      *iv_return = EVREventType_VREvent_ApplicationTransitionAborted;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EChaperoneImportFlags_EChaperoneImport_BoundsOnly", 49)) {
    /*                                                          ^            */
      *iv_return = EChaperoneImportFlags_EChaperoneImport_BoundsOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "ETrackingResult_TrackingResult_Running_OutOfRange", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackingResult_TrackingResult_Running_OutOfRange;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVREventType_VREvent_ChaperoneSettingsHaveChanged", 49)) {
    /*                                                          ^            */
      *iv_return = EVREventType_VREvent_ChaperoneSettingsHaveChanged;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_ModelSkinSettingsHaveChanged", 49)) {
    /*                                                          ^            */
      *iv_return = EVREventType_VREvent_ModelSkinSettingsHaveChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_NotYetAvailable", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedPropertyError_TrackedProp_NotYetAvailable;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_InvalidArg", 49)) {
    /*                                                          ^            */
      *iv_return = EVRRenderModelError_VRRenderModelError_InvalidArg;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_IsTemplate", 49)) {
    /*                                                          ^            */
      *iv_return = EVRApplicationError_VRApplicationError_IsTemplate;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_NoManifest", 49)) {
    /*                                                          ^            */
      *iv_return = EVRApplicationError_VRApplicationError_NoManifest;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_AnotherAppLaunching", 49)) {
    /*                                                          ^            */
      *iv_return = EVRInitError_VRInitError_Init_AnotherAppLaunching;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRScreenshotType_VRScreenshotType_StereoPanorama", 49)) {
    /*                                                          ^            */
      *iv_return = EVRScreenshotType_VRScreenshotType_StereoPanorama;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_UnknownProperty", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedPropertyError_TrackedProp_UnknownProperty;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_InstallationCorrupt", 49)) {
    /*                                                          ^            */
      *iv_return = EVRInitError_VRInitError_Init_InstallationCorrupt;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceClass_TrackedDeviceClass_Controller", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceClass_TrackedDeviceClass_Controller;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRNotificationType_Transient_SystemWithUserValue", 49)) {
    /*                                                          ^            */
      *iv_return = EVRNotificationType_Transient_SystemWithUserValue;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVROverlayError_VROverlayError_WrongTransformType", 49)) {
    /*                                                          ^            */
      *iv_return = EVROverlayError_VROverlayError_WrongTransformType;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "VROverlayFlags_TransferOwnershipToInternalProcess", 49)) {
    /*                                                          ^            */
      *iv_return = VROverlayFlags_TransferOwnershipToInternalProcess;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool", 49)) {
    /*                                                          ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVREventType_VREvent_ApplicationTransitionStarted", 49)) {
    /*                                                          ^            */
      *iv_return = EVREventType_VREvent_ApplicationTransitionStarted;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_VRClientDLLNotFound", 49)) {
    /*                                                          ^            */
      *iv_return = EVRInitError_VRInitError_Init_VRClientDLLNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'w':
    if (memEQ(name, "EVREventType_VREvent_Compositor_MirrorWindowShown", 49)) {
    /*                                                          ^            */
      *iv_return = EVREventType_VREvent_Compositor_MirrorWindowShown;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_50 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT
     ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool
     ETrackedDeviceProperty_Prop_DisplayFrequency_Float
     ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool
     ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64
     ETrackedDeviceProperty_Prop_LensCenterRightU_Float
     ETrackedDeviceProperty_Prop_LensCenterRightV_Float
     ETrackedDeviceProperty_Prop_RenderModelName_String
     ETrackedPropertyError_TrackedProp_WrongDeviceClass
     EVRComponentProperty_VRComponentProperty_IsPressed
     EVRComponentProperty_VRComponentProperty_IsTouched
     EVRComponentProperty_VRComponentProperty_IsVisible
     EVRCompositorError_VRCompositorError_RequestFailed
     EVREventType_VREvent_Compositor_MirrorWindowHidden
     EVREventType_VREvent_Notification_BeginInteraction
     EVREventType_VREvent_PerformanceTest_EnableCapture
     EVREventType_VREvent_PerformanceTest_FidelityLevel
     EVREventType_VREvent_ReprojectionSettingHasChanged
     EVREventType_VREvent_ScreenshotProgressToDashboard
     EVREventType_VREvent_TrackedCamera_StopVideoStream
     EVREventType_VREvent_VendorSpecific_Reserved_Start
     EVRInitError_VRInitError_Driver_CalibrationInvalid
     EVRInitError_VRInitError_Driver_HmdDisplayMirrored
     EVRInitError_VRInitError_Driver_HmdDisplayNotFound
     EVRInitError_VRInitError_IPC_SharedStateInitFailed
     EVRInitError_VRInitError_Init_InstallationNotFound
     EVRInitError_VRInitError_Init_PathRegistryNotFound
     EVROverlayError_VROverlayError_WrongVisibilityType
     EVRScreenshotError_VRScreenshotError_RequestFailed
     EVRSubmitFlags_Submit_LensDistortionAlreadyApplied
     VROverlayTransformType_VROverlayTransform_Absolute */
  /* Offset 43 gives the best switch position.  */
  switch (name[43]) {
  case 'A':
    if (memEQ(name, "EVRSubmitFlags_Submit_LensDistortionAlreadyApplied", 50)) {
    /*                                                          ^             */
      *iv_return = EVRSubmitFlags_Submit_LensDistortionAlreadyApplied;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "EVREventType_VREvent_PerformanceTest_EnableCapture", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_PerformanceTest_EnableCapture;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_ReprojectionSettingHasChanged", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_ReprojectionSettingHasChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT", 50)) {
    /*                                                          ^             */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_CalibrationInvalid", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_Driver_CalibrationInvalid;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "EVRComponentProperty_VRComponentProperty_IsPressed", 50)) {
    /*                                                          ^             */
      *iv_return = EVRComponentProperty_VRComponentProperty_IsPressed;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "EVRComponentProperty_VRComponentProperty_IsTouched", 50)) {
    /*                                                          ^             */
      *iv_return = EVRComponentProperty_VRComponentProperty_IsTouched;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_LensCenterRightU_Float", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_LensCenterRightU_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_LensCenterRightV_Float", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_LensCenterRightV_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRComponentProperty_VRComponentProperty_IsVisible", 50)) {
    /*                                                          ^             */
      *iv_return = EVRComponentProperty_VRComponentProperty_IsVisible;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_RenderModelName_String", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_RenderModelName_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'b':
    if (memEQ(name, "VROverlayTransformType_VROverlayTransform_Absolute", 50)) {
    /*                                                          ^             */
      *iv_return = VROverlayTransformType_VROverlayTransform_Absolute;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_WrongDeviceClass", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedPropertyError_TrackedProp_WrongDeviceClass;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVREventType_VREvent_VendorSpecific_Reserved_Start", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_VendorSpecific_Reserved_Start;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_HmdDisplayMirrored", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_Driver_HmdDisplayMirrored;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVROverlayError_VROverlayError_WrongVisibilityType", 50)) {
    /*                                                          ^             */
      *iv_return = EVROverlayError_VROverlayError_WrongVisibilityType;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVREventType_VREvent_TrackedCamera_StopVideoStream", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_TrackedCamera_StopVideoStream;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Driver_HmdDisplayNotFound", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_Driver_HmdDisplayNotFound;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_InstallationNotFound", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_Init_InstallationNotFound;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_PathRegistryNotFound", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_Init_PathRegistryNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVREventType_VREvent_Notification_BeginInteraction", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_Notification_BeginInteraction;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_ScreenshotProgressToDashboard", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_ScreenshotProgressToDashboard;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_RequestFailed", 50)) {
    /*                                                          ^             */
      *iv_return = EVRCompositorError_VRCompositorError_RequestFailed;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_PerformanceTest_FidelityLevel", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_PerformanceTest_FidelityLevel;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_IPC_SharedStateInitFailed", 50)) {
    /*                                                          ^             */
      *iv_return = EVRInitError_VRInitError_IPC_SharedStateInitFailed;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_RequestFailed", 50)) {
    /*                                                          ^             */
      *iv_return = EVRScreenshotError_VRScreenshotError_RequestFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'w':
    if (memEQ(name, "EVREventType_VREvent_Compositor_MirrorWindowHidden", 50)) {
    /*                                                          ^             */
      *iv_return = EVREventType_VREvent_Compositor_MirrorWindowHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayFrequency_Float", 50)) {
    /*                                                          ^             */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayFrequency_Float;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_51 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Error_BaseStationConflict
     EDeviceActivityLevel_k_EDeviceActivityLevel_Standby
     EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown
     EGamepadTextInputMode_k_EGamepadTextInputModeNormal
     EGamepadTextInputMode_k_EGamepadTextInputModeSubmit
     ETrackedDeviceProperty_Prop_AttachedDeviceId_String
     ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float
     ETrackedDeviceProperty_Prop_HardwareRevision_String
     ETrackedDeviceProperty_Prop_HardwareRevision_Uint64
     ETrackedDeviceProperty_Prop_ManufacturerName_String
     ETrackedDeviceProperty_Prop_SupportedButtons_Uint64
     EVRApplicationError_VRApplicationError_InvalidIndex
     EVRApplicationError_VRApplicationError_LaunchFailed
     EVRComponentProperty_VRComponentProperty_IsScrolled
     EVRCompositorError_VRCompositorError_DoNotHaveFocus
     EVRCompositorError_VRCompositorError_InvalidTexture
     EVREventType_VREvent_EnvironmentSettingsHaveChanged
     EVREventType_VREvent_PerformanceTest_DisableCapture
     EVREventType_VREvent_TrackedCamera_PauseVideoStream
     EVREventType_VREvent_TrackedCamera_StartVideoStream
     EVROverlayError_VROVerlayError_KeyboardAlreadyInUse
     EVROverlayError_VROverlayError_InvalidTrackedDevice
     EVROverlayError_VROverlayError_OverlayLimitExceeded
     EVRRenderModelError_VRRenderModelError_InvalidModel
     EVRRenderModelError_VRRenderModelError_NotSupported
     EVRScreenshotError_VRScreenshotError_BufferTooSmall */
  /* Offset 38 gives the best switch position.  */
  switch (name[38]) {
  case 'L':
    if (memEQ(name, "EDeviceActivityLevel_k_EDeviceActivityLevel_Standby", 51)) {
    /*                                                     ^                   */
      *iv_return = EDeviceActivityLevel_k_EDeviceActivityLevel_Standby;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown", 51)) {
    /*                                                     ^                   */
      *iv_return = EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVROverlayError_VROverlayError_OverlayLimitExceeded", 51)) {
    /*                                                     ^                   */
      *iv_return = EVROverlayError_VROverlayError_OverlayLimitExceeded;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "EVROverlayError_VROverlayError_InvalidTrackedDevice", 51)) {
    /*                                                     ^                   */
      *iv_return = EVROverlayError_VROverlayError_InvalidTrackedDevice;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_InvalidIndex", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRApplicationError_VRApplicationError_InvalidIndex;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRApplicationError_VRApplicationError_LaunchFailed", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRApplicationError_VRApplicationError_LaunchFailed;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_InvalidModel", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRRenderModelError_VRRenderModelError_InvalidModel;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_NotSupported", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRRenderModelError_VRRenderModelError_NotSupported;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "ChaperoneCalibrationState_Error_BaseStationConflict", 51)) {
    /*                                                     ^                   */
      *iv_return = ChaperoneCalibrationState_Error_BaseStationConflict;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVROverlayError_VROVerlayError_KeyboardAlreadyInUse", 51)) {
    /*                                                     ^                   */
      *iv_return = EVROverlayError_VROVerlayError_KeyboardAlreadyInUse;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ManufacturerName_String", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_ManufacturerName_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVREventType_VREvent_EnvironmentSettingsHaveChanged", 51)) {
    /*                                                     ^                   */
      *iv_return = EVREventType_VREvent_EnvironmentSettingsHaveChanged;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVREventType_VREvent_PerformanceTest_DisableCapture", 51)) {
    /*                                                     ^                   */
      *iv_return = EVREventType_VREvent_PerformanceTest_DisableCapture;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_InvalidTexture", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRCompositorError_VRCompositorError_InvalidTexture;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_DoNotHaveFocus", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRCompositorError_VRCompositorError_DoNotHaveFocus;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EGamepadTextInputMode_k_EGamepadTextInputModeNormal", 51)) {
    /*                                                     ^                   */
      *iv_return = EGamepadTextInputMode_k_EGamepadTextInputModeNormal;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EGamepadTextInputMode_k_EGamepadTextInputModeSubmit", 51)) {
    /*                                                     ^                   */
      *iv_return = EGamepadTextInputMode_k_EGamepadTextInputModeSubmit;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVREventType_VREvent_TrackedCamera_StartVideoStream", 51)) {
    /*                                                     ^                   */
      *iv_return = EVREventType_VREvent_TrackedCamera_StartVideoStream;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVREventType_VREvent_TrackedCamera_PauseVideoStream", 51)) {
    /*                                                     ^                   */
      *iv_return = EVREventType_VREvent_TrackedCamera_PauseVideoStream;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRComponentProperty_VRComponentProperty_IsScrolled", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRComponentProperty_VRComponentProperty_IsScrolled;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_SupportedButtons_Uint64", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_SupportedButtons_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_BufferTooSmall", 51)) {
    /*                                                     ^                   */
      *iv_return = EVRScreenshotError_VRScreenshotError_BufferTooSmall;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_AttachedDeviceId_String", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_AttachedDeviceId_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_HardwareRevision_String", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_HardwareRevision_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_HardwareRevision_Uint64", 51)) {
    /*                                                     ^                   */
      *iv_return = ETrackedDeviceProperty_Prop_HardwareRevision_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_52 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Warning_BaseStationRemoved
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES
     ETrackedControllerRole_TrackedControllerRole_Invalid
     ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool
     ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32
     ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64
     EVRApplicationError_VRApplicationError_NoApplication
     EVRCompositorError_VRCompositorError_IndexOutOfRange
     EVREventType_VREvent_Compositor_ChaperoneBoundsShown
     EVREventType_VREvent_TrackedCamera_ResumeVideoStream
     EVRInitError_VRInitError_IPC_CompositorConnectFailed
     EVRInitError_VRInitError_Init_InvalidApplicationType
     EVRInitError_VRInitError_Init_VRMonitorStartupFailed */
  /* Offset 41 gives the best switch position.  */
  switch (name[41]) {
  case 'A':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_NoApplication", 52)) {
    /*                                                        ^                 */
      *iv_return = EVRApplicationError_VRApplicationError_NoApplication;
      return PERL_constant_ISIV;
    }
    break;
  case 'B':
    if (memEQ(name, "EVREventType_VREvent_Compositor_ChaperoneBoundsShown", 52)) {
    /*                                                        ^                 */
      *iv_return = EVREventType_VREvent_Compositor_ChaperoneBoundsShown;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "EVREventType_VREvent_TrackedCamera_ResumeVideoStream", 52)) {
    /*                                                        ^                 */
      *iv_return = EVREventType_VREvent_TrackedCamera_ResumeVideoStream;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES", 52)) {
    /*                                                        ^                 */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRInitError_VRInitError_Init_VRMonitorStartupFailed", 52)) {
    /*                                                        ^                 */
      *iv_return = EVRInitError_VRInitError_Init_VRMonitorStartupFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32", 52)) {
    /*                                                        ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_Init_InvalidApplicationType", 52)) {
    /*                                                        ^                 */
      *iv_return = EVRInitError_VRInitError_Init_InvalidApplicationType;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_CompositorConnectFailed", 52)) {
    /*                                                        ^                 */
      *iv_return = EVRInitError_VRInitError_IPC_CompositorConnectFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackedControllerRole_TrackedControllerRole_Invalid", 52)) {
    /*                                                        ^                 */
      *iv_return = ETrackedControllerRole_TrackedControllerRole_Invalid;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64", 52)) {
    /*                                                        ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "ChaperoneCalibrationState_Warning_BaseStationRemoved", 52)) {
    /*                                                        ^                 */
      *iv_return = ChaperoneCalibrationState_Warning_BaseStationRemoved;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool", 52)) {
    /*                                                        ^                 */
      *iv_return = ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'x':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_IndexOutOfRange", 52)) {
    /*                                                        ^                 */
      *iv_return = EVRCompositorError_VRCompositorError_IndexOutOfRange;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_53 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Warning_SeatedBoundsInvalid
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER
     EGamepadTextInputMode_k_EGamepadTextInputModePassword
     ETrackedControllerRole_TrackedControllerRole_LeftHand
     ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64
     ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float
     ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String
     ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64
     ETrackedDeviceProperty_Prop_TrackingSystemName_String
     ETrackingResult_TrackingResult_Calibrating_InProgress
     ETrackingResult_TrackingResult_Calibrating_OutOfRange
     EVRApplicationError_VRApplicationError_BufferTooSmall
     EVRApplicationError_VRApplicationError_PropertyNotSet
     EVREventType_VREvent_Compositor_ChaperoneBoundsHidden
     EVRInitError_VRInitError_Compositor_OverlayInitFailed
     EVRInitError_VRInitError_Init_PathRegistryNotWritable
     EVRRenderModelError_VRRenderModelError_BufferTooSmall
     EVRRenderModelError_VRRenderModelError_InvalidTexture
     EVRRenderModelError_VRRenderModelError_MultipleShapes
     EVRTrackedCameraError_VRTrackedCameraError_IPCFailure */
  /* Offset 47 gives the best switch position.  */
  switch (name[47]) {
  case 'F':
    if (memEQ(name, "EVRInitError_VRInitError_Compositor_OverlayInitFailed", 53)) {
    /*                                                              ^            */
      *iv_return = EVRInitError_VRInitError_Compositor_OverlayInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER", 53)) {
    /*                                                              ^            */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "EVREventType_VREvent_Compositor_ChaperoneBoundsHidden", 53)) {
    /*                                                              ^            */
      *iv_return = EVREventType_VREvent_Compositor_ChaperoneBoundsHidden;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_PropertyNotSet", 53)) {
    /*                                                              ^            */
      *iv_return = EVRApplicationError_VRApplicationError_PropertyNotSet;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_TrackingSystemName_String", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedDeviceProperty_Prop_TrackingSystemName_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_MultipleShapes", 53)) {
    /*                                                              ^            */
      *iv_return = EVRRenderModelError_VRRenderModelError_MultipleShapes;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED", 53)) {
    /*                                                              ^            */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_IPCFailure", 53)) {
    /*                                                              ^            */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_IPCFailure;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_InvalidTexture", 53)) {
    /*                                                              ^            */
      *iv_return = EVRRenderModelError_VRRenderModelError_InvalidTexture;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "ETrackedControllerRole_TrackedControllerRole_LeftHand", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackedControllerRole_TrackedControllerRole_LeftHand;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackingResult_TrackingResult_Calibrating_OutOfRange", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackingResult_TrackingResult_Calibrating_OutOfRange;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_Init_PathRegistryNotWritable", 53)) {
    /*                                                              ^            */
      *iv_return = EVRInitError_VRInitError_Init_PathRegistryNotWritable;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ChaperoneCalibrationState_Warning_SeatedBoundsInvalid", 53)) {
    /*                                                              ^            */
      *iv_return = ChaperoneCalibrationState_Warning_SeatedBoundsInvalid;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackingResult_TrackingResult_Calibrating_InProgress", 53)) {
    /*                                                              ^            */
      *iv_return = ETrackingResult_TrackingResult_Calibrating_InProgress;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRApplicationError_VRApplicationError_BufferTooSmall", 53)) {
    /*                                                              ^            */
      *iv_return = EVRApplicationError_VRApplicationError_BufferTooSmall;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_BufferTooSmall", 53)) {
    /*                                                              ^            */
      *iv_return = EVRRenderModelError_VRRenderModelError_BufferTooSmall;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EGamepadTextInputMode_k_EGamepadTextInputModePassword", 53)) {
    /*                                                              ^            */
      *iv_return = EGamepadTextInputMode_k_EGamepadTextInputModePassword;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_54 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Error_CollisionBoundsInvalid
     ETrackedControllerRole_TrackedControllerRole_RightHand
     ETrackedDeviceProperty_Prop_DisplayMCImageRight_String
     ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool
     ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool
     EVRApplicationError_VRApplicationError_InvalidManifest
     EVRApplicationError_VRApplicationError_UnknownProperty
     EVREventType_VREvent_TrackedDeviceUserInteractionEnded
     EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds
     EVRInitError_VRInitError_Init_NoServerForBackgroundApp
     EVRRenderModelError_VRRenderModelError_TooManyVertices */
  /* Offset 44 gives the best switch position.  */
  switch (name[44]) {
  case 'V':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool", 54)) {
    /*                                                           ^                */
      *iv_return = ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "ETrackedControllerRole_TrackedControllerRole_RightHand", 54)) {
    /*                                                           ^                */
      *iv_return = ETrackedControllerRole_TrackedControllerRole_RightHand;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceUserInteractionEnded", 54)) {
    /*                                                           ^                */
      *iv_return = EVREventType_VREvent_TrackedDeviceUserInteractionEnded;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayMCImageRight_String", 54)) {
    /*                                                           ^                */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayMCImageRight_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_InvalidManifest", 54)) {
    /*                                                           ^                */
      *iv_return = EVRApplicationError_VRApplicationError_InvalidManifest;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NoServerForBackgroundApp", 54)) {
    /*                                                           ^                */
      *iv_return = EVRInitError_VRInitError_Init_NoServerForBackgroundApp;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ChaperoneCalibrationState_Error_CollisionBoundsInvalid", 54)) {
    /*                                                           ^                */
      *iv_return = ChaperoneCalibrationState_Error_CollisionBoundsInvalid;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_TooManyVertices", 54)) {
    /*                                                           ^                */
      *iv_return = EVRRenderModelError_VRRenderModelError_TooManyVertices;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool", 54)) {
    /*                                                           ^                */
      *iv_return = ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds", 54)) {
    /*                                                           ^                */
      *iv_return = EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds;
      return PERL_constant_ISIV;
    }
    break;
  case 'w':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_UnknownProperty", 54)) {
    /*                                                           ^                */
      *iv_return = EVRApplicationError_VRApplicationError_UnknownProperty;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_55 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Error_BaseStationUninitalized
     ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64
     ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float
     ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End
     ETrackedPropertyError_TrackedProp_CouldNotContactServer
     EVRApplicationError_VRApplicationError_InvalidParameter
     EVRApplicationError_VRApplicationError_LaunchInProgress
     EVRApplicationProperty_VRApplicationProperty_URL_String
     EVREventType_VREvent_ApplicationTransitionNewAppStarted
     EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed
     EVRInitError_VRInitError_Init_NotAvailableToUtilityApps
     EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed
     EVRRenderModelError_VRRenderModelError_MultipleTextures
     EVRRenderModelError_VRRenderModelError_NotEnoughNormals
     EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles
     VROverlayTransformType_VROverlayTransform_SystemOverlay */
  /* Offset 41 gives the best switch position.  */
  switch (name[41]) {
  case 'P':
    if (memEQ(name, "EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64", 55)) {
    /*                                                        ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "VROverlayTransformType_VROverlayTransform_SystemOverlay", 55)) {
    /*                                                        ^                    */
      *iv_return = VROverlayTransformType_VROverlayTransform_SystemOverlay;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed", 55)) {
    /*                                                        ^                    */
      *iv_return = EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End", 55)) {
    /*                                                        ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NotAvailableToUtilityApps", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRInitError_VRInitError_Init_NotAvailableToUtilityApps;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_MultipleTextures", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRRenderModelError_VRRenderModelError_MultipleTextures;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVREventType_VREvent_ApplicationTransitionNewAppStarted", 55)) {
    /*                                                        ^                    */
      *iv_return = EVREventType_VREvent_ApplicationTransitionNewAppStarted;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ChaperoneCalibrationState_Error_BaseStationUninitalized", 55)) {
    /*                                                        ^                    */
      *iv_return = ChaperoneCalibrationState_Error_BaseStationUninitalized;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float", 55)) {
    /*                                                        ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_URL_String", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_URL_String;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_CouldNotContactServer", 55)) {
    /*                                                        ^                    */
      *iv_return = ETrackedPropertyError_TrackedProp_CouldNotContactServer;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_NotEnoughNormals", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRRenderModelError_VRRenderModelError_NotEnoughNormals;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_LaunchInProgress", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRApplicationError_VRApplicationError_LaunchInProgress;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_InvalidParameter", 55)) {
    /*                                                        ^                    */
      *iv_return = EVRApplicationError_VRApplicationError_InvalidParameter;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_56 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceClass_TrackedDeviceClass_TrackingReference
     ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64
     ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool
     ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float
     EVRApplicationError_VRApplicationError_TransitionAborted
     EVRApplicationProperty_VRApplicationProperty_Name_String
     EVRCompositorError_VRCompositorError_IncompatibleVersion
     EVREventType_VREvent_TrackedDeviceUserInteractionStarted
     EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps
     EVRInitError_VRInitError_Init_NotSupportedWithCompositor
     EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid
     EVRInitError_VRInitError_Init_WatchdogDisabledInSettings
     EVRInitError_VRInitError_Steam_SteamInstallationNotFound
     EVRScreenshotError_VRScreenshotError_IncompatibleVersion
     EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle */
  /* Offset 30 gives the best switch position.  */
  switch (name[30]) {
  case 'N':
    if (memEQ(name, "EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps", 56)) {
    /*                                             ^                                */
      *iv_return = EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_NotSupportedWithCompositor", 56)) {
    /*                                             ^                                */
      *iv_return = EVRInitError_VRInitError_Init_NotSupportedWithCompositor;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid", 56)) {
    /*                                             ^                                */
      *iv_return = EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid;
      return PERL_constant_ISIV;
    }
    break;
  case 'W':
    if (memEQ(name, "EVRInitError_VRInitError_Init_WatchdogDisabledInSettings", 56)) {
    /*                                             ^                                */
      *iv_return = EVRInitError_VRInitError_Init_WatchdogDisabledInSettings;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRInitError_VRInitError_Steam_SteamInstallationNotFound", 56)) {
    /*                                             ^                                */
      *iv_return = EVRInitError_VRInitError_Steam_SteamInstallationNotFound;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_Name_String", 56)) {
    /*                                             ^                                */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_Name_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle", 56)) {
    /*                                             ^                                */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float", 56)) {
    /*                                             ^                                */
      *iv_return = ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedDeviceClass_TrackedDeviceClass_TrackingReference", 56)) {
    /*                                             ^                                */
      *iv_return = ETrackedDeviceClass_TrackedDeviceClass_TrackingReference;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRApplicationError_VRApplicationError_TransitionAborted", 56)) {
    /*                                             ^                                */
      *iv_return = EVRApplicationError_VRApplicationError_TransitionAborted;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64", 56)) {
    /*                                             ^                                */
      *iv_return = ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool", 56)) {
    /*                                             ^                                */
      *iv_return = ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_IncompatibleVersion", 56)) {
    /*                                             ^                                */
      *iv_return = EVRCompositorError_VRCompositorError_IncompatibleVersion;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_IncompatibleVersion", 56)) {
    /*                                             ^                                */
      *iv_return = EVRScreenshotError_VRScreenshotError_IncompatibleVersion;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "EVREventType_VREvent_TrackedDeviceUserInteractionStarted", 56)) {
    /*                                             ^                                */
      *iv_return = EVREventType_VREvent_TrackedDeviceUserInteractionStarted;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_57 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved
     ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE
     ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32
     ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float
     ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64
     ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64
     ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float
     ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool
     ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start
     EVRApplicationError_VRApplicationError_InvalidApplication
     EVRApplicationError_VRApplicationError_UnknownApplication
     EVRInitError_VRInitError_Compositor_D3D11HardwareRequired
     EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed
     EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords */
  /* Offset 39 gives the best switch position.  */
  switch (name[39]) {
  case '1':
    if (memEQ(name, "EVRInitError_VRInitError_Compositor_D3D11HardwareRequired", 57)) {
    /*                                                      ^                        */
      *iv_return = EVRInitError_VRInitError_Compositor_D3D11HardwareRequired;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_InvalidApplication", 57)) {
    /*                                                      ^                        */
      *iv_return = EVRApplicationError_VRApplicationError_InvalidApplication;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords", 57)) {
    /*                                                      ^                        */
      *iv_return = EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE", 57)) {
    /*                                                      ^                        */
      *iv_return = ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_UnknownApplication", 57)) {
    /*                                                      ^                        */
      *iv_return = EVRApplicationError_VRApplicationError_UnknownApplication;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed", 57)) {
    /*                                                      ^                        */
      *iv_return = EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved", 57)) {
    /*                                                      ^                        */
      *iv_return = ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32;
      return PERL_constant_ISIV;
    }
    break;
  case 'w':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64", 57)) {
    /*                                                      ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_58 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34
     ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String
     ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float
     ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String
     ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float
     ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice
     ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated
     EVRApplicationError_VRApplicationError_AppKeyAlreadyExists
     EVRApplicationProperty_VRApplicationProperty_Source_String
     EVRApplicationTransitionState_VRApplicationTransition_None
     EVRCompositorError_VRCompositorError_IsNotSceneApplication
     EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate
     EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported
     EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument
     EVRTrackedCameraError_VRTrackedCameraError_OperationFailed
     VROverlayTransformType_VROverlayTransform_TrackedComponent */
  /* Offset 44 gives the best switch position.  */
  switch (name[44]) {
  case 'R':
    if (memEQ(name, "EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_Source_String", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_Source_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "VROverlayTransformType_VROverlayTransform_TrackedComponent", 58)) {
    /*                                                           ^                    */
      *iv_return = VROverlayTransformType_VROverlayTransform_TrackedComponent;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_IsNotSceneApplication", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRCompositorError_VRCompositorError_IsNotSceneApplication;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_OperationFailed", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_OperationFailed;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRApplicationTransitionState_VRApplicationTransition_None", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRApplicationTransitionState_VRApplicationTransition_None;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float", 58)) {
    /*                                                           ^                    */
      *iv_return = ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_AppKeyAlreadyExists", 58)) {
    /*                                                           ^                    */
      *iv_return = EVRApplicationError_VRApplicationError_AppKeyAlreadyExists;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_59 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction
     ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64
     ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String
     ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float
     ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34
     EVRApplicationProperty_VRApplicationProperty_NewsURL_String
     EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice
     EVRControllerEventOutputType_ControllerEventOutput_OSEvents
     EVRControllerEventOutputType_ControllerEventOutput_VREvents
     EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable */
  /* Offset 44 gives the best switch position.  */
  switch (name[44]) {
  case 'I':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice", 59)) {
    /*                                                           ^                     */
      *iv_return = EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "EVRControllerEventOutputType_ControllerEventOutput_OSEvents", 59)) {
    /*                                                           ^                     */
      *iv_return = EVRControllerEventOutputType_ControllerEventOutput_OSEvents;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRControllerEventOutputType_ControllerEventOutput_VREvents", 59)) {
    /*                                                           ^                     */
      *iv_return = EVRControllerEventOutputType_ControllerEventOutput_VREvents;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float", 59)) {
    /*                                                           ^                     */
      *iv_return = ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction", 59)) {
    /*                                                           ^                     */
      *iv_return = EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_NewsURL_String", 59)) {
    /*                                                           ^                     */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_NewsURL_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34", 59)) {
    /*                                                           ^                     */
      *iv_return = ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable", 59)) {
    /*                                                           ^                     */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String", 59)) {
    /*                                                           ^                     */
      *iv_return = ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64", 59)) {
    /*                                                           ^                     */
      *iv_return = ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_60 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String
     ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool
     ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float
     ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float
     ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength
     EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool
     EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted */
  /* Offset 42 gives the best switch position.  */
  switch (name[42]) {
  case 'B':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool", 60)) {
    /*                                                         ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String", 60)) {
    /*                                                         ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float", 60)) {
    /*                                                         ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength", 60)) {
    /*                                                         ^                        */
      *iv_return = ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float", 60)) {
    /*                                                         ^                        */
      *iv_return = ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted", 60)) {
    /*                                                         ^                        */
      *iv_return = EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool", 60)) {
    /*                                                         ^                        */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_61 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool
     ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String
     EVRApplicationError_VRApplicationError_OldApplicationQuitting
     EVRApplicationProperty_VRApplicationProperty_Arguments_String
     EVRApplicationProperty_VRApplicationProperty_ImagePath_String
     EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool
     EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown
     EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse
     EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig
     EVRNotificationError_VRNotificationError_InvalidOverlayHandle
     EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId
     EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure */
  /* Offset 53 gives the best switch position.  */
  switch (name[53]) {
  case 'Q':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_OldApplicationQuitting", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRApplicationError_VRApplicationError_OldApplicationQuitting;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRNotificationError_VRNotificationError_InvalidOverlayHandle", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRNotificationError_VRNotificationError_InvalidOverlayHandle;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_ImagePath_String", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_ImagePath_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool", 61)) {
    /*                                                                    ^              */
      *iv_return = ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_Arguments_String", 61)) {
    /*                                                                    ^              */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_Arguments_String;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String", 61)) {
    /*                                                                    ^              */
      *iv_return = ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_62 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRApplicationProperty_VRApplicationProperty_BinaryPath_String
     EVRApplicationProperty_VRApplicationProperty_LaunchType_String
     EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted
     EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError
     EVRNotificationError_VRNotificationError_InvalidNotificationId
     EVRNotificationError_VRNotificationError_NotificationQueueFull
     EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure
     EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted */
  /* Offset 54 gives the best switch position.  */
  switch (name[54]) {
  case 'a':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError;
      return PERL_constant_ISIV;
    }
    break;
  case 'c':
    if (memEQ(name, "EVRNotificationError_VRNotificationError_InvalidNotificationId", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRNotificationError_VRNotificationError_InvalidNotificationId;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_LaunchType_String", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_LaunchType_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted", 62)) {
    /*                                                                     ^              */
      *iv_return = EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_BinaryPath_String", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_BinaryPath_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted;
      return PERL_constant_ISIV;
    }
    break;
  case 'u':
    if (memEQ(name, "EVRNotificationError_VRNotificationError_NotificationQueueFull", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRNotificationError_VRNotificationError_NotificationQueueFull;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure", 62)) {
    /*                                                                     ^              */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_63 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine
     EVRApplicationProperty_VRApplicationProperty_Description_String
     EVRCompositorError_VRCompositorError_SharedTexturesNotSupported
     EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts
     EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice
     EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall
     EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig
     EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR
     EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure
     VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative */
  /* Offset 56 gives the best switch position.  */
  switch (name[56]) {
  case 'F':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_Description_String", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_Description_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'a':
    if (memEQ(name, "EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative", 63)) {
    /*                                                                       ^             */
      *iv_return = VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine", 63)) {
    /*                                                                       ^             */
      *iv_return = EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_SharedTexturesNotSupported", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRCompositorError_VRCompositorError_SharedTexturesNotSupported;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts", 63)) {
    /*                                                                       ^             */
      *iv_return = EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_64 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String
     ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool
     EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning
     EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress
     EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure */
  /* Offset 41 gives the best switch position.  */
  switch (name[41]) {
  case 'e':
    if (memEQ(name, "EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress", 64)) {
    /*                                                        ^                             */
      *iv_return = EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool", 64)) {
    /*                                                        ^                             */
      *iv_return = ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String", 64)) {
    /*                                                        ^                             */
      *iv_return = ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning", 64)) {
    /*                                                        ^                             */
      *iv_return = EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure", 64)) {
    /*                                                        ^                             */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_65 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting
     EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat
     EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib
     EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId
     EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize */
  /* Offset 47 gives the best switch position.  */
  switch (name[47]) {
  case 'd':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib", 65)) {
    /*                                                              ^                        */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId", 65)) {
    /*                                                              ^                        */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting", 65)) {
    /*                                                              ^                        */
      *iv_return = EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize", 65)) {
    /*                                                              ^                        */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat", 65)) {
    /*                                                              ^                        */
      *iv_return = EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_68 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Bool
     EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_String
     EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunched
     EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSent
     EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Preview
     EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersion
     EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevice */
  /* Offset 67 gives the best switch position.  */
  switch (name[67]) {
  case 'd':
    if (memEQ(name, "EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunche", 67)) {
    /*                                                                                  d      */
      *iv_return = EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunched;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevic", 67)) {
    /*                                                                                  e      */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevice;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_Strin", 67)) {
    /*                                                                                  g      */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_String;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Boo", 67)) {
    /*                                                                                  l      */
      *iv_return = EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Bool;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersio", 67)) {
    /*                                                                                  n      */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersion;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSen", 67)) {
    /*                                                                                  t      */
      *iv_return = EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSent;
      return PERL_constant_ISIV;
    }
    break;
  case 'w':
    if (memEQ(name, "EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Previe", 67)) {
    /*                                                                                  w      */
      *iv_return = EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Preview;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_69 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange
     EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle
     EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted */
  /* Offset 34 gives the best switch position.  */
  switch (name[34]) {
  case 'c':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange", 69)) {
    /*                                                 ^                                         */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted", 69)) {
    /*                                                 ^                                         */
      *iv_return = EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle", 69)) {
    /*                                                 ^                                         */
      *iv_return = EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_72 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float
     EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion
     EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck
     EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext
     */
  /* Offset 50 gives the best switch position.  */
  switch (name[50]) {
  case 'a':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion", 72)) {
    /*                                                                 ^                            */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float", 72)) {
    /*                                                                 ^                            */
      *iv_return = ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext", 72)) {
    /*                                                                 ^                            */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck", 72)) {
    /*                                                                 ^                            */
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!C:\strawberry-perl-5.20.1.1-x64\perl\bin\perl.exe -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(OPENVR_FNTABLE_CALLTYPE S_API),
            {name=>"ChaperoneCalibrationState_Error", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Error_BaseStationConflict", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Error_BaseStationUninitalized", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Error_CollisionBoundsInvalid", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Error_PlayAreaInvalid", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_OK", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Warning", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Warning_BaseStationRemoved", type=>"IV", macro=>"1"},
            {name=>"ChaperoneCalibrationState_Warning_SeatedBoundsInvalid", type=>"IV", macro=>"1"},
            {name=>"EChaperoneConfigFile_Live", type=>"IV", macro=>"1"},
            {name=>"EChaperoneConfigFile_Temp", type=>"IV", macro=>"1"},
            {name=>"EChaperoneImportFlags_EChaperoneImport_BoundsOnly", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_ADVANCED", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_BEGINNER", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_COUNT", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_INTERMEDIATE", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_NONE", type=>"IV", macro=>"1"},
            {name=>"ECollisionBoundsStyle_COLLISION_BOUNDS_STYLE_SQUARES", type=>"IV", macro=>"1"},
            {name=>"EColorSpace_ColorSpace_Auto", type=>"IV", macro=>"1"},
            {name=>"EColorSpace_ColorSpace_Gamma", type=>"IV", macro=>"1"},
            {name=>"EColorSpace_ColorSpace_Linear", type=>"IV", macro=>"1"},
            {name=>"EDeviceActivityLevel_k_EDeviceActivityLevel_Idle", type=>"IV", macro=>"1"},
            {name=>"EDeviceActivityLevel_k_EDeviceActivityLevel_Standby", type=>"IV", macro=>"1"},
            {name=>"EDeviceActivityLevel_k_EDeviceActivityLevel_Unknown", type=>"IV", macro=>"1"},
            {name=>"EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction", type=>"IV", macro=>"1"},
            {name=>"EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction_Timeout", type=>"IV", macro=>"1"},
            {name=>"EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines", type=>"IV", macro=>"1"},
            {name=>"EGamepadTextInputLineMode_k_EGamepadTextInputLineModeSingleLine", type=>"IV", macro=>"1"},
            {name=>"EGamepadTextInputMode_k_EGamepadTextInputModeNormal", type=>"IV", macro=>"1"},
            {name=>"EGamepadTextInputMode_k_EGamepadTextInputModePassword", type=>"IV", macro=>"1"},
            {name=>"EGamepadTextInputMode_k_EGamepadTextInputModeSubmit", type=>"IV", macro=>"1"},
            {name=>"EGraphicsAPIConvention_API_DirectX", type=>"IV", macro=>"1"},
            {name=>"EGraphicsAPIConvention_API_OpenGL", type=>"IV", macro=>"1"},
            {name=>"EOverlayDirection_OverlayDirection_Count", type=>"IV", macro=>"1"},
            {name=>"EOverlayDirection_OverlayDirection_Down", type=>"IV", macro=>"1"},
            {name=>"EOverlayDirection_OverlayDirection_Left", type=>"IV", macro=>"1"},
            {name=>"EOverlayDirection_OverlayDirection_Right", type=>"IV", macro=>"1"},
            {name=>"EOverlayDirection_OverlayDirection_Up", type=>"IV", macro=>"1"},
            {name=>"ETrackedControllerRole_TrackedControllerRole_Invalid", type=>"IV", macro=>"1"},
            {name=>"ETrackedControllerRole_TrackedControllerRole_LeftHand", type=>"IV", macro=>"1"},
            {name=>"ETrackedControllerRole_TrackedControllerRole_RightHand", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceClass_TrackedDeviceClass_Controller", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceClass_TrackedDeviceClass_HMD", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceClass_TrackedDeviceClass_Invalid", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceClass_TrackedDeviceClass_Other", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceClass_TrackedDeviceClass_TrackingReference", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_AllWirelessDongleDescriptions_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_AttachedDeviceId_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_AudioFirmwareVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Axis0Type_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Axis1Type_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Axis2Type_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Axis3Type_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Axis4Type_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_BlockServerShutdown_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CameraCompatibilityMode_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CameraFirmwareDescription_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CameraFirmwareVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CameraToHeadTransform_Matrix34", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CanUnifyCoordinateSystemWithHmd_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ConnectedWirelessDongle_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ContainsProximitySensor_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ControllerRoleHint_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_CurrentUniverseId_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceBatteryPercentage_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceCanPowerOff_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceClass_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceIsCharging_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceIsWireless_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DeviceProvidesBatteryStatus_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayBootloaderVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayFPGAVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayFirmwareVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayFrequency_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCBlackClamp_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCImage_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCOffset_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCPrescale_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCScale_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayGCType_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayHardwareVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayMCImageLeft_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayMCImageRight_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayMCOffset_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayMCScale_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplayMCType_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DisplaySuppressed_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DongleVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_DriverVersion_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_EdidProductID_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_EdidVendorID_Int32", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FPGAVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FieldOfViewBottomDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FieldOfViewLeftDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FieldOfViewRightDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FieldOfViewTopDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_FirmwareVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Firmware_ForceUpdateRequired_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Firmware_ManualUpdateURL_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Firmware_ManualUpdate_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Firmware_ProgrammingTarget_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_Firmware_UpdateAvailable_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_HardwareRevision_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_HardwareRevision_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_HasCamera_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_IsOnDesktop_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_LensCenterLeftU_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_LensCenterLeftV_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_LensCenterRightU_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_LensCenterRightV_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ManufacturerName_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ModeLabel_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ModelNumber_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_PreviousUniverseId_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_RadioVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_RenderModelName_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ReportsTimeSinceVSync_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_SecondsFromVsyncToPhotons_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_SerialNumber_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_StatusDisplayTransform_Matrix34", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_SupportedButtons_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_TrackingFirmwareVersion_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_TrackingRangeMaximumMeters_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_TrackingRangeMinimumMeters_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_TrackingSystemName_String", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_UserHeadToEyeDepthMeters_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_UserIpdMeters_Float", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_VRCVersion_Uint64", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_End", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_VendorSpecific_Reserved_Start", type=>"IV", macro=>"1"},
            {name=>"ETrackedDeviceProperty_Prop_WillDriftInYaw_Bool", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_BufferTooSmall", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_CouldNotContactServer", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_InvalidDevice", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_NotYetAvailable", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_StringExceedsMaximumLength", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_Success", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_UnknownProperty", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_ValueNotProvidedByDevice", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_WrongDataType", type=>"IV", macro=>"1"},
            {name=>"ETrackedPropertyError_TrackedProp_WrongDeviceClass", type=>"IV", macro=>"1"},
            {name=>"ETrackingResult_TrackingResult_Calibrating_InProgress", type=>"IV", macro=>"1"},
            {name=>"ETrackingResult_TrackingResult_Calibrating_OutOfRange", type=>"IV", macro=>"1"},
            {name=>"ETrackingResult_TrackingResult_Running_OK", type=>"IV", macro=>"1"},
            {name=>"ETrackingResult_TrackingResult_Running_OutOfRange", type=>"IV", macro=>"1"},
            {name=>"ETrackingResult_TrackingResult_Uninitialized", type=>"IV", macro=>"1"},
            {name=>"ETrackingUniverseOrigin_TrackingUniverseRawAndUncalibrated", type=>"IV", macro=>"1"},
            {name=>"ETrackingUniverseOrigin_TrackingUniverseSeated", type=>"IV", macro=>"1"},
            {name=>"ETrackingUniverseOrigin_TrackingUniverseStanding", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_AppKeyAlreadyExists", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_ApplicationAlreadyRunning", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_ApplicationAlreadyStarting", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_BufferTooSmall", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_IPCFailed", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_InvalidApplication", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_InvalidIndex", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_InvalidManifest", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_InvalidParameter", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_IsTemplate", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_LaunchFailed", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_LaunchInProgress", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_NoApplication", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_NoManifest", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_None", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_OldApplicationQuitting", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_PropertyNotSet", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_TransitionAborted", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_UnknownApplication", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationError_VRApplicationError_UnknownProperty", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_Arguments_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_BinaryPath_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_Description_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_ImagePath_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_IsDashboardOverlay_Bool", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_IsInstanced_Bool", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_IsTemplate_Bool", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_LaunchType_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_Name_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_NewsURL_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_Source_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_URL_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationProperty_VRApplicationProperty_WorkingDirectory_String", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationTransitionState_VRApplicationTransition_NewAppLaunched", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationTransitionState_VRApplicationTransition_None", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationTransitionState_VRApplicationTransition_OldAppQuitSent", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationTransitionState_VRApplicationTransition_WaitingForExternalLaunch", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Background", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Max", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Other", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Overlay", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Scene", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_SteamWatchdog", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_Utility", type=>"IV", macro=>"1"},
            {name=>"EVRApplicationType_VRApplication_VRMonitor", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_A", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_ApplicationMenu", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Axis0", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Axis1", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Axis2", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Axis3", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Axis4", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_DPad_Down", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_DPad_Left", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_DPad_Right", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_DPad_Up", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Dashboard_Back", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Grip", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_Max", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_SteamVR_Touchpad", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_SteamVR_Trigger", type=>"IV", macro=>"1"},
            {name=>"EVRButtonId_k_EButton_System", type=>"IV", macro=>"1"},
            {name=>"EVRComponentProperty_VRComponentProperty_IsPressed", type=>"IV", macro=>"1"},
            {name=>"EVRComponentProperty_VRComponentProperty_IsScrolled", type=>"IV", macro=>"1"},
            {name=>"EVRComponentProperty_VRComponentProperty_IsStatic", type=>"IV", macro=>"1"},
            {name=>"EVRComponentProperty_VRComponentProperty_IsTouched", type=>"IV", macro=>"1"},
            {name=>"EVRComponentProperty_VRComponentProperty_IsVisible", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_DoNotHaveFocus", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_IncompatibleVersion", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_IndexOutOfRange", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_InvalidTexture", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_IsNotSceneApplication", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_None", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_RequestFailed", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_SharedTexturesNotSupported", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_TextureIsOnWrongDevice", type=>"IV", macro=>"1"},
            {name=>"EVRCompositorError_VRCompositorError_TextureUsesUnsupportedFormat", type=>"IV", macro=>"1"},
            {name=>"EVRControllerAxisType_k_eControllerAxis_Joystick", type=>"IV", macro=>"1"},
            {name=>"EVRControllerAxisType_k_eControllerAxis_None", type=>"IV", macro=>"1"},
            {name=>"EVRControllerAxisType_k_eControllerAxis_TrackPad", type=>"IV", macro=>"1"},
            {name=>"EVRControllerAxisType_k_eControllerAxis_Trigger", type=>"IV", macro=>"1"},
            {name=>"EVRControllerEventOutputType_ControllerEventOutput_OSEvents", type=>"IV", macro=>"1"},
            {name=>"EVRControllerEventOutputType_ControllerEventOutput_VREvents", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ApplicationListUpdated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ApplicationMimeTypeLoad", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ApplicationTransitionAborted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ApplicationTransitionNewAppStarted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ApplicationTransitionStarted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_AudioSettingsHaveChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_BackgroundSettingHasChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ButtonPress", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ButtonTouch", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ButtonUnpress", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ButtonUntouch", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_CameraSettingsHaveChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ChaperoneDataHasChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ChaperoneSettingsHaveChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ChaperoneTempDataHasChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ChaperoneUniverseHasChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Compositor_ChaperoneBoundsHidden", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Compositor_ChaperoneBoundsShown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Compositor_MirrorWindowHidden", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Compositor_MirrorWindowShown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardActivated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardDeactivated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardGuideButtonDown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardGuideButtonUp", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardRequested", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DashboardThumbSelected", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_DriverRequestedQuit", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_EnterStandbyMode", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_EnvironmentSettingsHaveChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_FirmwareUpdateFinished", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_FirmwareUpdateStarted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_FocusEnter", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_FocusLeave", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_HideKeyboard", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_HideRenderModels", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ImageFailed", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ImageLoaded", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_InputFocusCaptured", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_InputFocusChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_InputFocusReleased", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_IpdChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_KeyboardCharInput", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_KeyboardClosed", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_KeyboardDone", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_LeaveStandbyMode", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_MCImageUpdated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ModelSkinSettingsHaveChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_MouseButtonDown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_MouseButtonUp", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_MouseMove", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_None", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Notification_BeginInteraction", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Notification_Destroyed", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Notification_Hidden", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Notification_Shown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlayFocusChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlayGamepadFocusGained", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlayGamepadFocusLost", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlayHidden", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlaySharedTextureChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_OverlayShown", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_PerformanceTest_DisableCapture", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_PerformanceTest_EnableCapture", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_PerformanceTest_FidelityLevel", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ProcessQuit", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Quit", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_QuitAborted_UserPrompt", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_QuitAcknowledged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_RenderToast", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ReprojectionSettingHasChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_RequestScreenshot", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ResetDashboard", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SceneApplicationChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SceneApplicationSecondaryRenderingStarted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SceneFocusChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SceneFocusGained", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SceneFocusLost", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ScreenshotFailed", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ScreenshotProgressToDashboard", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ScreenshotTaken", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ScreenshotTriggered", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_Scroll", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SeatedZeroPoseReset", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ShowKeyboard", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_ShowRenderModels", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_StatusUpdate", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_SubmitScreenshotToDashboard", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TouchPadMove", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedCamera_PauseVideoStream", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedCamera_ResumeVideoStream", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedCamera_StartVideoStream", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedCamera_StopVideoStream", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceActivated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceDeactivated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceRoleChanged", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceUpdated", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceUserInteractionEnded", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_TrackedDeviceUserInteractionStarted", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_VendorSpecific_Reserved_End", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_VendorSpecific_Reserved_Start", type=>"IV", macro=>"1"},
            {name=>"EVREventType_VREvent_WatchdogWakeUpRequested", type=>"IV", macro=>"1"},
            {name=>"EVREye_Eye_Left", type=>"IV", macro=>"1"},
            {name=>"EVREye_Eye_Right", type=>"IV", macro=>"1"},
            {name=>"EVRFirmwareError_VRFirmwareError_Fail", type=>"IV", macro=>"1"},
            {name=>"EVRFirmwareError_VRFirmwareError_None", type=>"IV", macro=>"1"},
            {name=>"EVRFirmwareError_VRFirmwareError_Success", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Compositor_D3D11HardwareRequired", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Compositor_Failed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Compositor_FirmwareRequiresUpdate", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Compositor_OverlayInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Compositor_ScreenshotsInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_CalibrationInvalid", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_Failed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_HmdDisplayMirrored", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_HmdDisplayNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_HmdDriverIdOutOfBounds", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_HmdInUse", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_HmdUnknown", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_NotCalibrated", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_NotLoaded", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_RuntimeOutOfDate", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_TrackedDeviceInterfaceUnknown", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Driver_Unknown", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_CompositorConnectFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_CompositorInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_CompositorInvalidConnectResponse", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_ConnectFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_ConnectFailedAfterMultipleAttempts", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_Failed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_MutexInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_ServerInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_IPC_SharedStateInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_AnotherAppLaunching", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_AppInfoInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_FactoryNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_FileNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_HmdDriverIdIsNone", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_HmdNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_HmdNotFoundPresenceFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InitCanceledByUser", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InstallationCorrupt", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InstallationNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InterfaceNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_Internal", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InvalidApplicationType", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_InvalidInterface", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_LowPowerWatchdogNotSupported", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NoConfigPath", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NoLogPath", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NoServerForBackgroundApp", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NotAvailableToUtilityApps", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NotAvailableToWatchdogApps", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NotInitialized", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_NotSupportedWithCompositor", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_PathRegistryNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_PathRegistryNotWritable", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_Retry", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_SettingsInitFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_ShuttingDown", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_TooManyObjects", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_UserConfigDirectoryInvalid", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_VRClientDLLNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_VRMonitorNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_VRMonitorStartupFailed", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Init_WatchdogDisabledInSettings", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_None", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Steam_SteamInstallationNotFound", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_Unknown", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_CantOpenDevice", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooBig", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_ConfigTooSmall", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_NoStoredConfig", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToInitZLib", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataAddressRange", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_HmdFound_UserDataError", type=>"IV", macro=>"1"},
            {name=>"EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime", type=>"IV", macro=>"1"},
            {name=>"EVRMouseButton_VRMouseButton_Left", type=>"IV", macro=>"1"},
            {name=>"EVRMouseButton_VRMouseButton_Middle", type=>"IV", macro=>"1"},
            {name=>"EVRMouseButton_VRMouseButton_Right", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationError_VRNotificationError_InvalidNotificationId", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationError_VRNotificationError_InvalidOverlayHandle", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationError_VRNotificationError_NotificationQueueFull", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationError_VRNotificationError_OK", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExists", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationStyle_Application", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationStyle_Contact_Active", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationStyle_Contact_Disabled", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationStyle_Contact_Enabled", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationStyle_None", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationType_Persistent", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationType_Transient", type=>"IV", macro=>"1"},
            {name=>"EVRNotificationType_Transient_SystemWithUserValue", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROVerlayError_KeyboardAlreadyInUse", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_ArrayTooSmall", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_InvalidHandle", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_InvalidParameter", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_InvalidTexture", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_InvalidTrackedDevice", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_KeyInUse", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_KeyTooLong", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_NameTooLong", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_NoNeighbor", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_None", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_OverlayLimitExceeded", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_PermissionDenied", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_RequestFailed", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_ThumbnailCantBeDestroyed", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_UnableToLoadFile", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_UnknownOverlay", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_WrongTransformType", type=>"IV", macro=>"1"},
            {name=>"EVROverlayError_VROverlayError_WrongVisibilityType", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_BufferTooSmall", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_InvalidArg", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_InvalidModel", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_InvalidTexture", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_Loading", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_MultipleShapes", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_MultipleTextures", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_NoShapes", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_None", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_NotEnoughNormals", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_NotEnoughTexCoords", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_NotSupported", type=>"IV", macro=>"1"},
            {name=>"EVRRenderModelError_VRRenderModelError_TooManyVertices", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_BufferTooSmall", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_IncompatibleVersion", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_None", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_NotFound", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_RequestFailed", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotError_VRScreenshotError_ScreenshotAlreadyInProgress", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_Preview", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotPropertyFilenames_VRScreenshotPropertyFilenames_VR", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_Cubemap", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_Mono", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_MonoPanorama", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_None", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_Stereo", type=>"IV", macro=>"1"},
            {name=>"EVRScreenshotType_VRScreenshotType_StereoPanorama", type=>"IV", macro=>"1"},
            {name=>"EVRSettingsError_VRSettingsError_IPCFailed", type=>"IV", macro=>"1"},
            {name=>"EVRSettingsError_VRSettingsError_None", type=>"IV", macro=>"1"},
            {name=>"EVRSettingsError_VRSettingsError_ReadFailed", type=>"IV", macro=>"1"},
            {name=>"EVRSettingsError_VRSettingsError_WriteFailed", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_NotReady", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Off", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Ready", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Ready_Alert", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Ready_Alert_Low", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Searching", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Searching_Alert", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Standby", type=>"IV", macro=>"1"},
            {name=>"EVRState_VRState_Undefined", type=>"IV", macro=>"1"},
            {name=>"EVRSubmitFlags_Submit_Default", type=>"IV", macro=>"1"},
            {name=>"EVRSubmitFlags_Submit_GlRenderBuffer", type=>"IV", macro=>"1"},
            {name=>"EVRSubmitFlags_Submit_LensDistortionAlreadyApplied", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_FailedToGetGLTextureId", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_FrameBufferingFailure", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_IPCFailure", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidArgument", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameBufferSize", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidFrameHeaderVersion", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidGLTextureId", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidHandle", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_InvalidSharedTextureHandle", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_NoFrameAvailable", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_None", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_NotSupportedForThisDevice", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_OperationFailed", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_OutOfHandles", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_SharedMemoryFailure", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_SharedTextureFailure", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraError_VRTrackedCameraError_StreamSetupFailure", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraFrameType_MAX_CAMERA_FRAME_TYPES", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Distorted", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraFrameType_VRTrackedCameraFrameType_MaximumUndistorted", type=>"IV", macro=>"1"},
            {name=>"EVRTrackedCameraFrameType_VRTrackedCameraFrameType_Undistorted", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_AcceptsGamepadEvents", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_Curved", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_NoDashboardTab", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_None", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_Panorama", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_RGSS4X", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_SendVRScrollEvents", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_SendVRTouchpadEvents", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_ShowGamepadFocus", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_ShowTouchPadScrollWheel", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_SideBySide_Crossed", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_SideBySide_Parallel", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_SortWithNonSceneOverlays", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_StereoPanorama", type=>"IV", macro=>"1"},
            {name=>"VROverlayFlags_TransferOwnershipToInternalProcess", type=>"IV", macro=>"1"},
            {name=>"VROverlayInputMethod_Mouse", type=>"IV", macro=>"1"},
            {name=>"VROverlayInputMethod_None", type=>"IV", macro=>"1"},
            {name=>"VROverlayTransformType_VROverlayTransform_Absolute", type=>"IV", macro=>"1"},
            {name=>"VROverlayTransformType_VROverlayTransform_SystemOverlay", type=>"IV", macro=>"1"},
            {name=>"VROverlayTransformType_VROverlayTransform_TrackedComponent", type=>"IV", macro=>"1"},
            {name=>"VROverlayTransformType_VROverlayTransform_TrackedDeviceRelative", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Openvr_capi", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Openvr_capi", $types);
__END__
   */

  switch (len) {
  case 5:
    if (memEQ(name, "S_API", 5)) {
#ifdef S_API
      *iv_return = S_API;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 15:
    if (memEQ(name, "EVREye_Eye_Left", 15)) {
      *iv_return = EVREye_Eye_Left;
      return PERL_constant_ISIV;
    }
    break;
  case 16:
    if (memEQ(name, "EVREye_Eye_Right", 16)) {
      *iv_return = EVREye_Eye_Right;
      return PERL_constant_ISIV;
    }
    break;
  case 19:
    if (memEQ(name, "VROverlayFlags_None", 19)) {
      *iv_return = VROverlayFlags_None;
      return PERL_constant_ISIV;
    }
    break;
  case 20:
    if (memEQ(name, "EVRState_VRState_Off", 20)) {
      *iv_return = EVRState_VRState_Off;
      return PERL_constant_ISIV;
    }
    break;
  case 21:
    /* Names all of length 21.  */
    /* VROverlayFlags_Curved VROverlayFlags_RGSS4X */
    /* Offset 20 gives the best switch position.  */
    switch (name[20]) {
    case 'X':
      if (memEQ(name, "VROverlayFlags_RGSS4", 20)) {
      /*                                   X      */
        *iv_return = VROverlayFlags_RGSS4X;
        return PERL_constant_ISIV;
      }
      break;
    case 'd':
      if (memEQ(name, "VROverlayFlags_Curve", 20)) {
      /*                                   d      */
        *iv_return = VROverlayFlags_Curved;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 22:
    if (memEQ(name, "EVRState_VRState_Ready", 22)) {
      *iv_return = EVRState_VRState_Ready;
      return PERL_constant_ISIV;
    }
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    if (memEQ(name, "EVRState_VRState_Standby", 24)) {
      *iv_return = EVRState_VRState_Standby;
      return PERL_constant_ISIV;
    }
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    return constant_26 (aTHX_ name, iv_return);
    break;
  case 27:
    return constant_27 (aTHX_ name, iv_return);
    break;
  case 28:
    return constant_28 (aTHX_ name, iv_return);
    break;
  case 29:
    return constant_29 (aTHX_ name, iv_return);
    break;
  case 30:
    /* Names all of length 30.  */
    /* EVREventType_VREvent_MouseMove EVRNotificationType_Persistent */
    /* Offset 23 gives the best switch position.  */
    switch (name[23]) {
    case 's':
      if (memEQ(name, "EVRNotificationType_Persistent", 30)) {
      /*                                      ^             */
        *iv_return = EVRNotificationType_Persistent;
        return PERL_constant_ISIV;
      }
      break;
    case 'u':
      if (memEQ(name, "EVREventType_VREvent_MouseMove", 30)) {
      /*                                      ^             */
        *iv_return = EVREventType_VREvent_MouseMove;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 31:
    return constant_31 (aTHX_ name, iv_return);
    break;
  case 32:
    return constant_32 (aTHX_ name, iv_return);
    break;
  case 33:
    return constant_33 (aTHX_ name, iv_return);
    break;
  case 34:
    return constant_34 (aTHX_ name, iv_return);
    break;
  case 35:
    return constant_35 (aTHX_ name, iv_return);
    break;
  case 36:
    return constant_36 (aTHX_ name, iv_return);
    break;
  case 37:
    return constant_37 (aTHX_ name, iv_return);
    break;
  case 38:
    return constant_38 (aTHX_ name, iv_return);
    break;
  case 39:
    return constant_39 (aTHX_ name, iv_return);
    break;
  case 40:
    return constant_40 (aTHX_ name, iv_return);
    break;
  case 41:
    return constant_41 (aTHX_ name, iv_return);
    break;
  case 42:
    return constant_42 (aTHX_ name, iv_return);
    break;
  case 43:
    return constant_43 (aTHX_ name, iv_return);
    break;
  case 44:
    return constant_44 (aTHX_ name, iv_return);
    break;
  case 45:
    return constant_45 (aTHX_ name, iv_return);
    break;
  case 46:
    return constant_46 (aTHX_ name, iv_return);
    break;
  case 47:
    return constant_47 (aTHX_ name, iv_return);
    break;
  case 48:
    return constant_48 (aTHX_ name, iv_return);
    break;
  case 49:
    return constant_49 (aTHX_ name, iv_return);
    break;
  case 50:
    return constant_50 (aTHX_ name, iv_return);
    break;
  case 51:
    return constant_51 (aTHX_ name, iv_return);
    break;
  case 52:
    return constant_52 (aTHX_ name, iv_return);
    break;
  case 53:
    return constant_53 (aTHX_ name, iv_return);
    break;
  case 54:
    return constant_54 (aTHX_ name, iv_return);
    break;
  case 55:
    return constant_55 (aTHX_ name, iv_return);
    break;
  case 56:
    return constant_56 (aTHX_ name, iv_return);
    break;
  case 57:
    return constant_57 (aTHX_ name, iv_return);
    break;
  case 58:
    return constant_58 (aTHX_ name, iv_return);
    break;
  case 59:
    return constant_59 (aTHX_ name, iv_return);
    break;
  case 60:
    return constant_60 (aTHX_ name, iv_return);
    break;
  case 61:
    return constant_61 (aTHX_ name, iv_return);
    break;
  case 62:
    return constant_62 (aTHX_ name, iv_return);
    break;
  case 63:
    return constant_63 (aTHX_ name, iv_return);
    break;
  case 64:
    return constant_64 (aTHX_ name, iv_return);
    break;
  case 65:
    return constant_65 (aTHX_ name, iv_return);
    break;
  case 66:
    /* Names all of length 66.  */
    /* EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines
       EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64 */
    /* Offset 49 gives the best switch position.  */
    switch (name[49]) {
    case 'L':
      if (memEQ(name, "EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64", 66)) {
      /*                                                                ^                       */
        *iv_return = EVRApplicationProperty_VRApplicationProperty_LastLaunchTime_Uint64;
        return PERL_constant_ISIV;
      }
      break;
    case 'M':
      if (memEQ(name, "EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines", 66)) {
      /*                                                                ^                       */
        *iv_return = EGamepadTextInputLineMode_k_EGamepadTextInputLineModeMultipleLines;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 67:
    if (memEQ(name, "EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction_Timeout", 67)) {
      *iv_return = EDeviceActivityLevel_k_EDeviceActivityLevel_UserInteraction_Timeout;
      return PERL_constant_ISIV;
    }
    break;
  case 68:
    return constant_68 (aTHX_ name, iv_return);
    break;
  case 69:
    return constant_69 (aTHX_ name, iv_return);
    break;
  case 70:
    /* Names all of length 70.  */
    /* ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float
       EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime
       */
    /* Offset 16 gives the best switch position.  */
    switch (name[16]) {
    case 'n':
      if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime", 70)) {
      /*                               ^                                                            */
        *iv_return = EVRInitError_VRInitError_VendorSpecific_UnableToConnectToOculusRuntime;
        return PERL_constant_ISIV;
      }
      break;
    case 'o':
      if (memEQ(name, "ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float", 70)) {
      /*                               ^                                                            */
        *iv_return = ETrackedDeviceProperty_Prop_ScreenshotVerticalFieldOfViewDegrees_Float;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 72:
    return constant_72 (aTHX_ name, iv_return);
    break;
  case 73:
    /* Names all of length 73.  */
    /* EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart
       EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExists
       */
    /* Offset 72 gives the best switch position.  */
    switch (name[72]) {
    case 's':
      if (memEQ(name, "EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExist", 72)) {
      /*                                                                                       s      */
        *iv_return = EVRNotificationError_VRNotificationError_SystemWithUserValueAlreadyExists;
        return PERL_constant_ISIV;
      }
      break;
    case 't':
      if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStar", 72)) {
      /*                                                                                       t      */
        *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 74:
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart", 74)) {
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart;
      return PERL_constant_ISIV;
    }
    break;
  case 75:
    if (memEQ(name, "EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart", 75)) {
      *iv_return = EVRInitError_VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart;
      return PERL_constant_ISIV;
    }
    break;
  case 78:
    if (memEQ(name, "EVRApplicationTransitionState_VRApplicationTransition_WaitingForExternalLaunch", 78)) {
      *iv_return = EVRApplicationTransitionState_VRApplicationTransition_WaitingForExternalLaunch;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

