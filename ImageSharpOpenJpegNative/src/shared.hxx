/*
 * Copyright 2022 Sjofn LLC. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ISOJ_SHARED_H_
#define _ISOJ_SHARED_H_

#define OPJ_STATIC
#include <openjpeg-2.4/openjpeg.h>

#include <cstdint>
#include <cstdlib>
#include <cstring>

#define ERR_OK                                                            0x00000000

// General
#define ERR_GENERAL_ERROR                                                 0x76000000
#define ERR_GENERAL_FILE_IO                         -(ERR_GENERAL_ERROR | 0x00000001)
#define ERR_GENERAL_OUT_OF_RANGE                    -(ERR_GENERAL_ERROR | 0x00000002)
#define ERR_GENERAL_MEMALLOC                        -(ERR_GENERAL_ERROR | 0x00000003)

// Image
#define ERR_IMAGE_ERROR                                                   0x77000000
#define ERR_IMAGE_FILE_INVALID                        -(ERR_IMAGE_ERROR | 0x00000001)
#define ERR_IMAGE_FILE_WRONG_EXTENSION                -(ERR_IMAGE_ERROR | 0x00000002)

#endif
