//  Copyright (c) 2017-present, Qihoo, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.

#pragma once

#ifndef NDEBUG
#  define TRACE(M, ...) fprintf(stderr, "[TRACE] (%s:%d) " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#  define DEBUG(M, ...) fprintf(stderr, "[Debug] (%s:%d) " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
#  define TRACE(M, ...) {}
#  define DEBUG(M, ...) {}
#endif  // NDEBUG
