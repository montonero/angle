//
// Copyright (c) 2013 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// precompiled.h: Precompiled header file for libGLESv2.

#define GL_APICALL
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#define EGLAPI
#include <EGL/egl.h>

#include <assert.h>
#include <cstddef>
#include <float.h>
#include <intrin.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <algorithm> // for std::min and std::max
#include <limits>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#include "common/winrtplatform.h"

#if defined(ANGLE_PLATFORM_WINRT)
#include <D3D11_1.h>
#if !defined(ANGLE_PLATFORM_WP8)
#include <D3Dcompiler.h>
#endif // #if !defined(ANGLE_PLATFORM_WP8)
#else
#include <d3d9.h>
#include <D3D11.h>
#include <D3Dcompiler.h>
#endif // #if defined(WINAPI_FAMILY)

#include <dxgi.h>
#include <d3dcompiler.h>

#ifdef _MSC_VER
#include <hash_map>
#endif
