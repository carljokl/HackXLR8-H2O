#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_bemyapp_hackxlr8_h2o_hackxlr8_1h2o_H2OMainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
