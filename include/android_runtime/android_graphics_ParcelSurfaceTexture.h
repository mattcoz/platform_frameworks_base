/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ANDROID_GRAPHICS_PARCELSURFACETEXTURE_H
#define _ANDROID_GRAPHICS_PARCELSURFACETEXTURE_H

#include <android/native_window.h>

#include "jni.h"

namespace android {

class ISurfaceTexture;

extern sp<ANativeWindow> android_ParcelSurfaceTexture_getNativeWindow(
        JNIEnv* env, jobject thiz);
extern bool android_ParcelSurfaceTexture_isInstanceOf(JNIEnv* env, jobject thiz);

/* Gets the underlying ISurfaceTexture from a ParcelSurfaceTexture Java object. */
extern sp<ISurfaceTexture> ParcelSurfaceTexture_getISurfaceTexture(JNIEnv* env, jobject thiz);

} // namespace android

#endif // _ANDROID_GRAPHICS_PARCELSURFACETEXTURE_H