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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CONSTANT_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CONSTANT_H_

#include "ImageSharpOpenJpeg_Exports.hxx"
#include "shared.hxx"

#pragma region non-openjp2 functions

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAX_NO_TILESPECS()
{
    return JPWL_MAX_NO_TILESPECS;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAX_NO_PACKSPECS()
{
    return JPWL_MAX_NO_PACKSPECS;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAX_NO_MARKERS()
{
    return JPWL_MAX_NO_MARKERS;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_EXPECTED_COMPONENTS()
{
    return JPWL_EXPECTED_COMPONENTS;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAXIMUM_TILES()
{
    return JPWL_MAXIMUM_TILES;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAXIMUM_HAMMING()
{
    return JPWL_MAXIMUM_HAMMING;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_get_JPWL_MAXIMUM_EPB_ROOM()
{
    return JPWL_MAXIMUM_EPB_ROOM;
}

#pragma endregion non-openjp2 functions

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_CONSTANT_H_