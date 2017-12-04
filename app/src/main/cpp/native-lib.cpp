#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
#include <android/log.h>



#define  LOG_TAG    "EirotJNI"
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG, __VA_ARGS__)
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG, __VA_ARGS__)
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG, __VA_ARGS__)
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG_TAG, __VA_ARGS__)

using namespace cv;
using namespace std;
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_eirot_android_cmakejavaopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGI("---->>> Eirot Say %s", hello.c_str());
    return env->NewStringUTF(hello.c_str());
}
