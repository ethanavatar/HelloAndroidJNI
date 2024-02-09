#ifndef _HELLO_H
#define _HELLO_H

#ifdef __cplusplus
extern "C"
#endif
JNIEXPORT jstring JNICALL
Java_com_example_hellojni_getGreeting(JNIEnv *, jobject);

#endif // !_HELLO_H
