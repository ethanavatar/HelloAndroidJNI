#include <jni.h>
#include "Hello.h"

// This function will be exported as `getGreeting`
//		in the namespace `com.example.hellojni`
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hellojni_Greeter_getGreeting (JNIEnv *env, jobject thisObj) {
	(void) thisObj;
	return env->NewStringUTF("Hello, Sailor!");
}
