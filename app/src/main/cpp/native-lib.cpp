#include <jni.h>

extern "C" JNIEXPORT jint

JNICALL
Java_com_krysanify_ndkcount_MainActivity_inc(JNIEnv  __unused *env, jobject /* this */,
                                             jint counter) {
    return counter + 1;
}
