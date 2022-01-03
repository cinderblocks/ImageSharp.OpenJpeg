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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CODEC_DECOMPRESSION_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CODEC_DECOMPRESSION_H_

#include "ImageSharpOpenJpeg_Exports.h"
#include "shared.h"

#pragma region opj_dparameters_t

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_cp_reduce(opj_dparameters_t* parameters)
{
    return parameters->cp_reduce;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_cp_reduce(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->cp_reduce = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_cp_layer(opj_dparameters_t* parameters)
{
    return parameters->cp_layer;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_cp_layer(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->cp_layer = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_dparameters_t_get_cod_format(opj_dparameters_t* parameters)
{
    return parameters->cod_format;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_cod_format(opj_dparameters_t* parameters, const int32_t value)
{
    parameters->cod_format = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_dparameters_t_get_decod_format(opj_dparameters_t* parameters)
{
    return parameters->decod_format;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_decod_format(opj_dparameters_t* parameters, const int32_t value)
{
    parameters->decod_format = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_dparameters_t_get_jpwl_exp_comps(opj_dparameters_t* parameters)
{
    return parameters->jpwl_exp_comps;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_jpwl_exp_comps(opj_dparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_exp_comps = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_dparameters_t_get_jpwl_max_tiles(opj_dparameters_t* parameters)
{
    return parameters->jpwl_max_tiles;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_jpwl_max_tiles(opj_dparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_max_tiles = value;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_dparameters_t_get_jpwl_correct(opj_dparameters_t* parameters)
{
    return parameters->jpwl_correct == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_jpwl_correct(opj_dparameters_t* parameters, const bool value)
{
    parameters->jpwl_correct = value ? OPJ_TRUE : OPJ_FALSE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_dparameters_t_get_m_verbose(opj_dparameters_t* parameters)
{
    return parameters->m_verbose == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_m_verbose(opj_dparameters_t* parameters, const bool value)
{
    parameters->m_verbose = value ? OPJ_TRUE : OPJ_FALSE;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_DA_x0(opj_dparameters_t* parameters)
{
    return parameters->DA_x0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_DA_x0(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->DA_x0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_DA_x1(opj_dparameters_t* parameters)
{
    return parameters->DA_x1;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_DA_x1(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->DA_x1 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_DA_y0(opj_dparameters_t* parameters)
{
    return parameters->DA_y0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_DA_y0(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->DA_y0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_DA_y1(opj_dparameters_t* parameters)
{
    return parameters->DA_y1;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_DA_y1(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->DA_y1 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_nb_tile_to_decode(opj_dparameters_t* parameters)
{
    return parameters->nb_tile_to_decode;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_nb_tile_to_decode(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->nb_tile_to_decode = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_tile_index(opj_dparameters_t* parameters)
{
    return parameters->tile_index;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_tile_index(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->tile_index = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_dparameters_t_get_flags(opj_dparameters_t* parameters)
{
    return parameters->flags;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_set_flags(opj_dparameters_t* parameters, const uint32_t value)
{
    parameters->flags = value;
}

#pragma endregion opj_dparameters_t

#pragma region functions

IMAGESHARPOPENJPEG_EXPORT const opj_codec_t* openjpeg_openjp2_opj_create_decompress(const CODEC_FORMAT format)
{
    return ::opj_create_decompress(format);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_destroy_codec(opj_codec_t* p_codec)
{
    ::opj_destroy_codec(p_codec);
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_end_decompress(opj_codec_t *p_codec,
                                                         opj_stream_t *p_stream)
{
    return ::opj_end_decompress(p_codec, p_stream) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_set_default_decoder_parameters(opj_dparameters_t* parameters)
{
    ::opj_set_default_decoder_parameters(parameters);
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_setup_decoder(opj_codec_t* p_codec,
                                                        opj_dparameters_t *parameters)
{
    return ::opj_setup_decoder(p_codec, parameters) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_codec_set_threads(opj_codec_t* p_codec,
                                                            const int32_t num_threads)
{
    return ::opj_codec_set_threads(p_codec, num_threads) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_read_header(opj_stream_t *p_stream,
                                                      opj_codec_t *p_codec,
                                                      opj_image_t **p_image)
{
    return ::opj_read_header(p_stream, p_codec, p_image) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_set_decode_area(opj_codec_t *p_codec,
                                                          opj_image_t *p_image,
                                                          OPJ_INT32 p_start_x,
                                                          OPJ_INT32 p_start_y,
                                                          OPJ_INT32 p_end_x,
                                                          OPJ_INT32 p_end_y)
{
    return ::opj_set_decode_area(p_codec, p_image, p_start_x, p_start_y, p_end_x, p_end_y) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_decode(opj_codec_t *p_codec,
                                                 opj_stream_t *p_stream,
                                                 opj_image_t *p_image)
{
    return ::opj_decode(p_codec, p_stream, p_image) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_write_tile(opj_codec_t *p_codec,
                                                     uint32_t p_tile_index,
                                                     uint8_t * p_data,
                                                     uint32_t p_data_size,
                                                     opj_stream_t *p_stream)
{
    return ::opj_write_tile(p_codec, p_tile_index, p_data, p_data_size, p_stream) == OPJ_TRUE;
}

#pragma endregion functions

#pragma region non-openjp2 functions

IMAGESHARPOPENJPEG_EXPORT const opj_dparameters_t* openjpeg_openjp2_opj_dparameters_t_new()
{
    return new opj_dparameters_t();
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_dparameters_t_delete(opj_dparameters_t* parameters)
{
    delete parameters;
}

#pragma endregion non-openjp2 functions

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_CODEC_DECOMPRESSION_H_