#ifndef __JNI__MINS_FIELD__H__
#define __JNI__MINS_FIELD__H__

#include <jni.h>

JNIEXPORT void JNICALL Java_com_example_sapper_MinsField_init__JJJJ
        (JNIEnv *env, jobject obj, jlong rows, jlong cols, jlong mins, jlong radius_mins);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getMins__
        (JNIEnv *env, jobject obj);

JNIEXPORT jbyte JNICALL Java_com_example_sapper_MinsField_getMins__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT jboolean JNICALL Java_com_example_sapper_MinsField_getMin__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT void JNICALL Java_com_example_sapper_MinsField_setUpFlag__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT void JNICALL Java_com_example_sapper_MinsField_setDownFlag__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT jboolean JNICALL Java_com_example_sapper_MinsField_getFlag__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getRows__
        (JNIEnv *env, jobject obj);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getCols__
        (JNIEnv *env, jobject obj);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getCells__
        (JNIEnv *env, jobject obj);

JNIEXPORT jboolean JNICALL Java_com_example_sapper_MinsField_getLive__
        (JNIEnv *env, jobject obj);

JNIEXPORT jboolean JNICALL Java_com_example_sapper_MinsField_getVictory__
        (JNIEnv *env, jobject obj);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getEmpty__
        (JNIEnv *env, jobject obj);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getOpen__
        (JNIEnv *env, jobject obj);

JNIEXPORT jlong JNICALL Java_com_example_sapper_MinsField_getEmptyClose__
        (JNIEnv *env, jobject obj);

JNIEXPORT jdouble JNICALL Java_com_example_sapper_MinsField_getPercentVictory__
        (JNIEnv *env, jobject obj);

JNIEXPORT void JNICALL Java_com_example_sapper_MinsField_setOpen__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT jboolean JNICALL Java_com_example_sapper_MinsField_getOpen__JJ
        (JNIEnv *env, jobject obj, jlong row, jlong col);

JNIEXPORT void JNICALL Java_com_example_sapper_MinsField_destroy__
        (JNIEnv *env, jobject obj);


#endif
