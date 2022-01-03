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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_EVENT_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_EVENT_H_

#include "ImageSharpOpenJpeg_Exports.hxx"
#include "shared.hxx"

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_set_info_handler(opj_codec_t * p_codec,
                                                     const opj_msg_callback p_function,
                                                     void * p_user_data)
{
    ::opj_set_info_handler(p_codec, p_function, p_user_data);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_set_warning_handler(opj_codec_t * p_codec,
                                                        const opj_msg_callback p_function,
                                                        void * p_user_data)
{
    ::opj_set_warning_handler(p_codec, p_function, p_user_data);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_set_error_handler(opj_codec_t * p_codec,
                                                      const opj_msg_callback p_function,
                                                      void * p_user_data)
{
    ::opj_set_error_handler(p_codec, p_function, p_user_data);
}

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_EVENT_H_