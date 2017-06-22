#include <jni.h>
#include "demo.h"

extern "C"
jint
Java_com_demo_MainActivity_stringFromJNI(
    JNIEnv *env,
    jobject /* this */) {
  int a = num(3,4);
  return a;
}
