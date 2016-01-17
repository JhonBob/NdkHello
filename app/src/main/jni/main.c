//
// Created by Administrator on 2016/1/15.
//

#include "com_bob_ndkhello_MainActivity.h"
/*
 * Class: lab_sodino_jnitest_MainActivity
 * Method: getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_bob_ndkhello_MainActivity_getStringFromNative
        (JNIEnv * env, jobject jObj){
    return (*env)->NewStringUTF(env,"Hello From JNI!");
}


