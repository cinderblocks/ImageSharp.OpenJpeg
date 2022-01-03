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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_STREAM_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_STREAM_H_

#include "ImageSharpOpenJpeg_Exports.h"
#include "shared.h"

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_destroy(opj_stream_t* p_stream)
{
    ::opj_stream_destroy(p_stream);
}

IMAGESHARPOPENJPEG_EXPORT const opj_stream_t* openjpeg_openjp2_opj_stream_default_create(const bool p_is_read_stream)
{
    const auto b = p_is_read_stream ? OPJ_TRUE : OPJ_FALSE;
    return ::opj_stream_default_create(b);
}

IMAGESHARPOPENJPEG_EXPORT const opj_stream_t* openjpeg_openjp2_opj_stream_create(const uint64_t p_buffer_size,
                                                                 const bool p_is_read_stream)
{
    const auto b = p_is_read_stream ? OPJ_TRUE : OPJ_FALSE;
    return ::opj_stream_create(p_buffer_size, b);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_read_function(opj_stream_t* p_stream,
                                                             const opj_stream_read_fn p_function)
{
    ::opj_stream_set_read_function(p_stream, p_function);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_write_function(opj_stream_t* p_stream,
                                                              const opj_stream_write_fn p_function)
{
    ::opj_stream_set_write_function(p_stream, p_function);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_skip_function(opj_stream_t* p_stream,
                                                             const opj_stream_skip_fn p_function)
{
    ::opj_stream_set_skip_function(p_stream, p_function);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_seek_function(opj_stream_t* p_stream,
                                                             const opj_stream_seek_fn p_function)
{
    ::opj_stream_set_seek_function(p_stream, p_function);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_user_data(opj_stream_t* p_stream,
                                                         void* p_data,
                                                         const opj_stream_free_user_data_fn p_function)
{
    ::opj_stream_set_user_data(p_stream, p_data, p_function);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_stream_set_user_data_length(opj_stream_t* p_stream,
                                                                const uint64_t data_length)
{
    ::opj_stream_set_user_data_length(p_stream, data_length);
}

IMAGESHARPOPENJPEG_EXPORT const opj_stream_t* openjpeg_openjp2_opj_stream_create_default_file_stream(const char *fname,
                                                                                     const uint32_t fname_len,
                                                                                     const bool p_is_read_stream)
{
    const auto str = std::string(fname, fname_len);
    const auto b = p_is_read_stream ? OPJ_TRUE : OPJ_FALSE;
    return ::opj_stream_create_default_file_stream(str.c_str(), b);
}

IMAGESHARPOPENJPEG_EXPORT const opj_stream_t* openjpeg_openjp2_opj_stream_create_file_stream(const char *fname,
                                                                             const uint32_t fname_len,
                                                                             const uint64_t p_buffer_size,
                                                                             const bool p_is_read_stream)
{
    const auto str = std::string(fname, fname_len);
    const auto b = p_is_read_stream ? OPJ_TRUE : OPJ_FALSE;
    return ::opj_stream_create_file_stream(str.c_str(), p_buffer_size, b);
}

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_STREAM_H_