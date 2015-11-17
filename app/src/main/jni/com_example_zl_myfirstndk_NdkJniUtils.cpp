#include "com_example_zl_myfirstndk_NdkJniUtils.h"

JNIEXPORT jstring JNICALL Java_com_example_zl_myfirstndk_NdkJniUtils_getCLanguageString
        (JNIEnv *env, jobject obj){
    return (*env).NewStringUTF("hello, I come from Jni hahah");
}