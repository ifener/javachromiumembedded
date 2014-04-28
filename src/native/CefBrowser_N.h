/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_browser_CefBrowser_N */

#ifndef _Included_org_cef_browser_CefBrowser_N
#define _Included_org_cef_browser_CefBrowser_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_CreateBrowser
 * Signature: (Lorg/cef/handler/CefClientHandler;JLjava/lang/String;ZLjava/awt/Canvas;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1CreateBrowser
  (JNIEnv *, jobject, jobject, jlong, jstring, jboolean, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GetWindowHandle
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GetWindowHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_CanGoBack
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1CanGoBack
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GoBack
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GoBack
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_CanGoForward
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1CanGoForward
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GoForward
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GoForward
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_IsLoading
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1IsLoading
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_Reload
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1Reload
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_ReloadIgnoreCache
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1ReloadIgnoreCache
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_StopLoad
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1StopLoad
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GetIdentifier
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GetIdentifier
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_IsPopup
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1IsPopup
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_HasDocument
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_browser_CefBrowser_1N_N_1HasDocument
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_LoadURL
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1LoadURL
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_LoadString
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1LoadString
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_ExecuteJavaScript
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1ExecuteJavaScript
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GetURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GetURL
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_ParentWindowWillClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1ParentWindowWillClose
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_Close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1Close
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_SetFocus
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1SetFocus
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_GetZoomLevel
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_cef_browser_CefBrowser_1N_N_1GetZoomLevel
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_SetZoomLevel
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1SetZoomLevel
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_StartDownload
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1StartDownload
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_Print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1Print
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_Find
 * Signature: (ILjava/lang/String;ZZZ)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1Find
  (JNIEnv *, jobject, jint, jstring, jboolean, jboolean, jboolean);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_StopFinding
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1StopFinding
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_ShowDevTools
 * Signature: (Lorg/cef/handler/CefClientHandler;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1ShowDevTools
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_CloseDevTools
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1CloseDevTools
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_WasResized
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1WasResized
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_Invalidate
 * Signature: (Ljava/awt/Rectangle;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1Invalidate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_SendKeyEvent
 * Signature: (Ljava/awt/event/KeyEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1SendKeyEvent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_SendMouseEvent
 * Signature: (Ljava/awt/event/MouseEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1SendMouseEvent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_browser_CefBrowser_N
 * Method:    N_SendMouseWheelEvent
 * Signature: (Ljava/awt/event/MouseWheelEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_browser_CefBrowser_1N_N_1SendMouseWheelEvent
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
