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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_IMAGE_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_IMAGE_H_

#include "ImageSharpOpenJpeg_Exports.h"
#include "shared.h"

#pragma region opj_image_t

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_x0(opj_image_t* image)
{
    return image->x0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_x0(opj_image_t* image, const uint32_t value)
{
    image->x0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_y0(opj_image_t* image)
{
    return image->y0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_y0(opj_image_t* image, const uint32_t value)
{
    image->y0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_x1(opj_image_t* image)
{
    return image->x1;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_x1(opj_image_t* image, const uint32_t value)
{
    image->x1 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_y1(opj_image_t* image)
{
    return image->y1;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_y1(opj_image_t* image, const uint32_t value)
{
    image->y1 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_numcomps(opj_image_t* image)
{
    return image->numcomps;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_numcomps(opj_image_t* image, const uint32_t value)
{
    image->numcomps = value;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_COLOR_SPACE openjpeg_openjp2_opj_image_t_get_color_space(opj_image_t* image)
{
    return image->color_space;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_set_color_space(opj_image_t* image, const OPJ_COLOR_SPACE value)
{
    image->color_space = value;
}

IMAGESHARPOPENJPEG_EXPORT const opj_image_comp_t* openjpeg_openjp2_opj_image_t_get_comps(opj_image_t* image)
{
    return image->comps;
}

IMAGESHARPOPENJPEG_EXPORT const opj_image_comp_t* openjpeg_openjp2_opj_image_t_get_comps_by_index(opj_image_t* image,
                                                                                  const uint32_t index)
{
    if (!(0 <= index && index < image->numcomps)) return nullptr;
    return &(image->comps[index]);
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_BYTE* openjpeg_openjp2_opj_image_t_get_icc_profile_buf(opj_image_t* image)
{
    return image->icc_profile_buf;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_t_get_icc_profile_len(opj_image_t* image)
{
    return image->icc_profile_len;
}

#pragma endregion opj_image_t

#pragma region opj_image_cmptparm_t

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_dx(opj_image_cmptparm_t* parameters)
{
    return parameters->dx;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_dx(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->dx = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_dy(opj_image_cmptparm_t* parameters)
{
    return parameters->dy;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_dy(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->dy = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_w(opj_image_cmptparm_t* parameters)
{
    return parameters->w;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_w(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->w = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_h(opj_image_cmptparm_t* parameters)
{
    return parameters->h;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_h(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->h = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_x0(opj_image_cmptparm_t* parameters)
{
    return parameters->x0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_x0(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->x0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_y0(opj_image_cmptparm_t* parameters)
{
    return parameters->y0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_y0(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->y0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_prec(opj_image_cmptparm_t* parameters)
{
    return parameters->prec;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_prec(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->prec = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_bpp(opj_image_cmptparm_t* parameters)
{
    return parameters->bpp;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_bpp(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->bpp = value;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_cmptparm_t_get_sgnd(opj_image_cmptparm_t* parameters)
{
    return parameters->sgnd;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_set_sgnd(opj_image_cmptparm_t* parameters, const uint32_t value)
{
    parameters->sgnd = value;
}

#pragma endregion opj_image_cmptparm_t

#pragma region opj_image_comp_t

IMAGESHARPOPENJPEG_EXPORT const int32_t* openjpeg_openjp2_opj_image_comp_t_get_data(opj_image_comp_t* comp)
{
    return comp->data;
}

IMAGESHARPOPENJPEG_EXPORT const uint16_t openjpeg_openjp2_opj_image_comp_t_get_alpha(opj_image_comp_t* comp)
{
    return comp->alpha;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_bpp(opj_image_comp_t* comp)
{
    return comp->bpp;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_dx(opj_image_comp_t* comp)
{
    return comp->dx;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_dy(opj_image_comp_t* comp)
{
    return comp->dy;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_factor(opj_image_comp_t* comp)
{
    return comp->factor;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_h(opj_image_comp_t* comp)
{
    return comp->h;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_prec(opj_image_comp_t* comp)
{
    return comp->prec;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_resno_decoded(opj_image_comp_t* comp)
{
    return comp->resno_decoded;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_sgnd(opj_image_comp_t* comp)
{
    return comp->sgnd;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_w(opj_image_comp_t* comp)
{
    return comp->w;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_x0(opj_image_comp_t* comp)
{
    return comp->x0;
}

IMAGESHARPOPENJPEG_EXPORT const uint32_t openjpeg_openjp2_opj_image_comp_t_get_y0(opj_image_comp_t* comp)
{
    return comp->y0;
}

#pragma endregion opj_image_comp_t

IMAGESHARPOPENJPEG_EXPORT opj_image_t* openjpeg_openjp2_opj_image_create(const uint32_t numcmpts,
                                                         opj_image_cmptparm_t** cmptparms,
                                                         const uint32_t cmptparms_len,
                                                         OPJ_COLOR_SPACE clrsp)
{
    std::vector<opj_image_cmptparm_t> compparams(cmptparms_len);
    for (size_t index = 0; index < cmptparms_len; index++) compparams[index] = *(cmptparms[index]);
    return ::opj_image_create(numcmpts, compparams.data(), clrsp);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_t_destroy(opj_image_t* image)
{
    ::opj_image_destroy(image);
}

IMAGESHARPOPENJPEG_EXPORT const opj_image_t* openjpeg_openjp2_opj_image_tile_create(const uint32_t numcmpts,
                                                                    opj_image_cmptparm_t** cmptparms,
                                                                    const uint32_t cmptparms_len,
                                                                    const OPJ_COLOR_SPACE clrspc)
{
    auto tmp = std::vector<opj_image_cmptparm_t>(cmptparms_len);
    for (uint32_t index = 0; index < cmptparms_len; index++) tmp[index] = (*cmptparms[index]);
    const auto ret = ::opj_image_tile_create(numcmpts, tmp.data(), clrspc);
    return ret;
}

IMAGESHARPOPENJPEG_EXPORT const void* openjpeg_openjp2_opj_image_data_alloc(OPJ_SIZE_T size)
{
    return ::opj_image_data_alloc(size);
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_data_free(void* const ptr)
{
    ::opj_image_data_free(ptr);
}

#pragma region non-openjp2 functions

IMAGESHARPOPENJPEG_EXPORT const opj_image_cmptparm_t* openjpeg_openjp2_opj_image_cmptparm_t_new()
{
    return new opj_image_cmptparm_t();
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_image_cmptparm_t_delete(opj_image_cmptparm_t* parameters)
{
    delete parameters;
}

#pragma endregion non-openjp2 functions

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_IMAGE_H_