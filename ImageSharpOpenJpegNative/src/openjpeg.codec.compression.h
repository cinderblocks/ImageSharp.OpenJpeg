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

#ifndef _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CODEC_COMPRESSION_H_
#define _ISOJ_OPENJPEG_OPENJP2_OPENJPEG_CODEC_COMPRESSION_H_

#include "ImageSharpOpenJpeg_Exports.h"
#include "shared.h"

#pragma region opj_cparameters_t

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_tcp_distoratio(opj_cparameters_t* parameters,
                                                                           float** value,
                                                                           uint32_t* len)
{
   * value = &parameters->tcp_distoratio[0];
   * len = 100;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_tcp_distoratio(opj_cparameters_t* parameters,
                                                                        float* value,
                                                                        const uint32_t len)
{
    if (len != 100) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->tcp_distoratio, value, sizeof(float)*  100);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_tcp_rates(opj_cparameters_t* parameters,
                                                                      float** value,
                                                                      uint32_t* len)
{
   * value = &parameters->tcp_rates[0];
   * len = 100;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_tcp_rates(opj_cparameters_t* parameters,
                                                                   float* value,
                                                                   const uint32_t len)
{
    if (len != 100) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->tcp_rates, value, sizeof(float)*  100);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_POC(opj_cparameters_t* parameters,
                                                                opj_poc_t** value,
                                                                uint32_t* len)
{
   * value = &parameters->POC[0];
   * len = 32;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_POC(opj_cparameters_t* parameters,
                                                             opj_poc_t* value,
                                                             const uint32_t len)
{
    if (len != 32) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->POC, value, sizeof(opj_poc_t)*  32);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_hprot_TPH(opj_cparameters_t* parameters,
                                                                           int** value,
                                                                           uint32_t* len)
{
   * value = &parameters->jpwl_hprot_TPH[0];
   * len = JPWL_MAX_NO_TILESPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_hprot_TPH(opj_cparameters_t* parameters,
                                                                        int* value,
                                                                        const uint32_t len)
{
    if (len != JPWL_MAX_NO_TILESPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_hprot_TPH, value, sizeof(int)*  JPWL_MAX_NO_TILESPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_hprot_TPH_tileno(opj_cparameters_t* parameters,
                                                                                  int** value,
                                                                                  uint32_t* len)
{
   * value = &parameters->jpwl_hprot_TPH_tileno[0];
   * len = JPWL_MAX_NO_TILESPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_hprot_TPH_tileno(opj_cparameters_t* parameters,
                                                                               int* value,
                                                                               const uint32_t len)
{
    if (len != JPWL_MAX_NO_TILESPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_hprot_TPH_tileno, value, sizeof(int)*  JPWL_MAX_NO_TILESPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_TPH(opj_cparameters_t* parameters,
                                                                          int** value,
                                                                          uint32_t* len)
{
   * value = &parameters->jpwl_sens_TPH[0];
   * len = JPWL_MAX_NO_TILESPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_TPH(opj_cparameters_t* parameters,
                                                                       int* value,
                                                                       const uint32_t len)
{
    if (len != JPWL_MAX_NO_TILESPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_sens_TPH, value, sizeof(int)*  JPWL_MAX_NO_TILESPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_TPH_tileno(opj_cparameters_t* parameters,
                                                                                 int** value,
                                                                                 uint32_t* len)
{
   * value = &parameters->jpwl_sens_TPH_tileno[0];
   * len = JPWL_MAX_NO_TILESPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_TPH_tileno(opj_cparameters_t* parameters,
                                                                              int* value,
                                                                              const uint32_t len)
{
    if (len != JPWL_MAX_NO_TILESPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_sens_TPH_tileno, value, sizeof(int)*  JPWL_MAX_NO_TILESPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_pprot(opj_cparameters_t* parameters,
                                                                       int** value,
                                                                       uint32_t* len)
{
   * value = &parameters->jpwl_pprot[0];
   * len = JPWL_MAX_NO_PACKSPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_pprot(opj_cparameters_t* parameters,
                                                                    int* value,
                                                                    const uint32_t len)
{
    if (len != JPWL_MAX_NO_PACKSPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_pprot, value, sizeof(int)*  JPWL_MAX_NO_PACKSPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_pprot_packno(opj_cparameters_t* parameters,
                                                                              int** value,
                                                                              uint32_t* len)
{
   * value = &parameters->jpwl_pprot_packno[0];
   * len = JPWL_MAX_NO_PACKSPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_pprot_packno(opj_cparameters_t* parameters,
                                                                           int* value,
                                                                           const uint32_t len)
{
    if (len != JPWL_MAX_NO_PACKSPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_pprot_packno, value, sizeof(int)*  JPWL_MAX_NO_PACKSPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_jpwl_pprot_tileno(opj_cparameters_t* parameters,
                                                                              int** value,
                                                                              uint32_t* len)
{
   * value = &parameters->jpwl_pprot_tileno[0];
   * len = JPWL_MAX_NO_PACKSPECS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_jpwl_pprot_tileno(opj_cparameters_t* parameters,
                                                                           int* value,
                                                                           const uint32_t len)
{
    if (len != JPWL_MAX_NO_PACKSPECS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->jpwl_pprot_tileno, value, sizeof(int)*  JPWL_MAX_NO_PACKSPECS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_prch_init(opj_cparameters_t* parameters,
                                                                      int** value,
                                                                      uint32_t* len)
{
   * value = &parameters->prch_init[0];
   * len = OPJ_J2K_MAXRLVLS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_prch_init(opj_cparameters_t* parameters,
                                                                   int* value,
                                                                   const uint32_t len)
{
    if (len != OPJ_J2K_MAXRLVLS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->prch_init, value, sizeof(int)*  OPJ_J2K_MAXRLVLS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const void openjpeg_openjp2_opj_cparameters_t_get_prcw_init(opj_cparameters_t* parameters,
                                                                      int** value,
                                                                      uint32_t* len)
{
   * value = &parameters->prcw_init[0];
   * len = OPJ_J2K_MAXRLVLS;
}

IMAGESHARPOPENJPEG_EXPORT int32_t openjpeg_openjp2_opj_cparameters_t_set_prcw_init(opj_cparameters_t* parameters,
                                                                   int* value,
                                                                   const uint32_t len)
{
    if (len != OPJ_J2K_MAXRLVLS) return ERR_GENERAL_OUT_OF_RANGE;
    memcpy(parameters->prcw_init, value, sizeof(int)*  OPJ_J2K_MAXRLVLS);
    return ERR_OK;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_CINEMA_MODE openjpeg_openjp2_opj_cparameters_t_get_cp_cinema(opj_cparameters_t* parameters)
{
    return parameters->cp_cinema;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_cinema(opj_cparameters_t* parameters, const OPJ_CINEMA_MODE value)
{
    parameters->cp_cinema = value;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_PROG_ORDER openjpeg_openjp2_opj_cparameters_t_get_prog_order(opj_cparameters_t* parameters)
{
    return parameters->prog_order;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_prog_order(opj_cparameters_t* parameters, const OPJ_PROG_ORDER value)
{
    parameters->prog_order = value;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_RSIZ_CAPABILITIES openjpeg_openjp2_opj_cparameters_t_get_cp_rsiz(opj_cparameters_t* parameters)
{
    return parameters->cp_rsiz;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_rsiz(opj_cparameters_t* parameters, const OPJ_RSIZ_CAPABILITIES value)
{
    parameters->cp_rsiz = value;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_UINT16 openjpeg_openjp2_opj_cparameters_t_get_rsiz(opj_cparameters_t* parameters)
{
    return parameters->rsiz;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_rsiz(opj_cparameters_t* parameters, const OPJ_UINT16 value)
{
    parameters->rsiz = value;
}

IMAGESHARPOPENJPEG_EXPORT const OPJ_UINT32 openjpeg_openjp2_opj_cparameters_t_get_numpocs(opj_cparameters_t* parameters)
{
    return parameters->numpocs;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_numpocs(opj_cparameters_t* parameters, const OPJ_UINT32 value)
{
    parameters->numpocs = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cblockh_init(opj_cparameters_t* parameters)
{
    return parameters->cblockh_init;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cblockh_init(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cblockh_init = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cblockw_init(opj_cparameters_t* parameters)
{
    return parameters->cblockw_init;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cblockw_init(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cblockw_init = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cod_format(opj_cparameters_t* parameters)
{
    return parameters->cod_format;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cod_format(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cod_format = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_disto_alloc(opj_cparameters_t* parameters)
{
    return parameters->cp_disto_alloc;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_disto_alloc(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_disto_alloc = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_fixed_alloc(opj_cparameters_t* parameters)
{
    return parameters->cp_fixed_alloc;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_fixed_alloc(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_fixed_alloc = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_fixed_quality(opj_cparameters_t* parameters)
{
    return parameters->cp_fixed_quality;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_fixed_quality(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_fixed_quality = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_tdx(opj_cparameters_t* parameters)
{
    return parameters->cp_tdx;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_tdx(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_tdx = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_tdy(opj_cparameters_t* parameters)
{
    return parameters->cp_tdy;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_tdy(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_tdy = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_tx0(opj_cparameters_t* parameters)
{
    return parameters->cp_tx0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_tx0(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_tx0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_cp_ty0(opj_cparameters_t* parameters)
{
    return parameters->cp_ty0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_cp_ty0(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->cp_ty0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_csty(opj_cparameters_t* parameters)
{
    return parameters->csty;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_csty(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->csty = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_decod_format(opj_cparameters_t* parameters)
{
    return parameters->decod_format;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_decod_format(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->decod_format = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_image_offset_x0(opj_cparameters_t* parameters)
{
    return parameters->image_offset_x0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_image_offset_x0(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->image_offset_x0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_image_offset_y0(opj_cparameters_t* parameters)
{
    return parameters->image_offset_y0;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_image_offset_y0(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->image_offset_y0 = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_index_on(opj_cparameters_t* parameters)
{
    return parameters->index_on;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_index_on(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->index_on = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_irreversible(opj_cparameters_t* parameters)
{
    return parameters->irreversible;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_irreversible(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->irreversible = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_jpwl_hprot_MH(opj_cparameters_t* parameters)
{
    return parameters->jpwl_hprot_MH;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_hprot_MH(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_hprot_MH = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_addr(opj_cparameters_t* parameters)
{
    return parameters->jpwl_sens_addr;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_addr(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_sens_addr = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_MH(opj_cparameters_t* parameters)
{
    return parameters->jpwl_sens_MH;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_MH(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_sens_MH = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_range(opj_cparameters_t* parameters)
{
    return parameters->jpwl_sens_range;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_range(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_sens_range = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_jpwl_sens_size(opj_cparameters_t* parameters)
{
    return parameters->jpwl_sens_size;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_sens_size(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->jpwl_sens_size = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_max_comp_size(opj_cparameters_t* parameters)
{
    return parameters->max_comp_size;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_max_comp_size(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->max_comp_size = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_max_cs_size(opj_cparameters_t* parameters)
{
    return parameters->max_cs_size;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_max_cs_size(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->max_cs_size = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_mode(opj_cparameters_t* parameters)
{
    return parameters->mode;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_mode(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->mode = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_numresolution(opj_cparameters_t* parameters)
{
    return parameters->numresolution;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_numresolution(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->numresolution = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_res_spec(opj_cparameters_t* parameters)
{
    return parameters->res_spec;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_res_spec(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->res_spec = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_roi_compno(opj_cparameters_t* parameters)
{
    return parameters->roi_compno;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_roi_compno(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->roi_compno = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_roi_shift(opj_cparameters_t* parameters)
{
    return parameters->roi_shift;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_roi_shift(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->roi_shift = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_subsampling_dx(opj_cparameters_t* parameters)
{
    return parameters->subsampling_dx;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_subsampling_dx(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->subsampling_dx = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_subsampling_dy(opj_cparameters_t* parameters)
{
    return parameters->subsampling_dy;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_subsampling_dy(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->subsampling_dy = value;
}

IMAGESHARPOPENJPEG_EXPORT const int32_t openjpeg_openjp2_opj_cparameters_t_get_tcp_numlayers(opj_cparameters_t* parameters)
{
    return parameters->tcp_numlayers;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_tcp_numlayers(opj_cparameters_t* parameters, const int32_t value)
{
    parameters->tcp_numlayers = value;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_cparameters_t_get_jpip_on(opj_cparameters_t* parameters)
{
    return parameters->jpip_on == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpip_on(opj_cparameters_t* parameters, const bool value)
{
    parameters->jpip_on = value ? OPJ_TRUE : OPJ_FALSE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_cparameters_t_get_jpwl_epc_on(opj_cparameters_t* parameters)
{
    return parameters->jpwl_epc_on == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_jpwl_epc_on(opj_cparameters_t* parameters, const bool value)
{
    parameters->jpwl_epc_on = value ? OPJ_TRUE : OPJ_FALSE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_cparameters_t_get_tile_size_on(opj_cparameters_t* parameters)
{
    return parameters->tile_size_on == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_tile_size_on(opj_cparameters_t* parameters, const bool value)
{
    parameters->tile_size_on = value ? OPJ_TRUE : OPJ_FALSE;
}

IMAGESHARPOPENJPEG_EXPORT const int8_t openjpeg_openjp2_opj_cparameters_t_get_tcp_mct(opj_cparameters_t* parameters)
{
    return parameters->tcp_mct;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_tcp_mct(opj_cparameters_t* parameters, const int8_t value)
{
    parameters->tcp_mct = value;
}

IMAGESHARPOPENJPEG_EXPORT const int8_t openjpeg_openjp2_opj_cparameters_t_get_tp_flag(opj_cparameters_t* parameters)
{
    return parameters->tp_flag;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_tp_flag(opj_cparameters_t* parameters, const int8_t value)
{
    parameters->tp_flag = value;
}

IMAGESHARPOPENJPEG_EXPORT const int8_t openjpeg_openjp2_opj_cparameters_t_get_tp_on(opj_cparameters_t* parameters)
{
    return parameters->tp_on;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_set_tp_on(opj_cparameters_t* parameters, const int8_t value)
{
    parameters->tp_on = value;
}

#pragma endregion opj_cparameters_t

#pragma region functions

IMAGESHARPOPENJPEG_EXPORT const opj_codec_t* openjpeg_openjp2_opj_create_compress(const CODEC_FORMAT format)
{
    return ::opj_create_compress(format);
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_setup_encoder(opj_codec_t* p_codec,
                                                        opj_cparameters_t* parameters,
                                                        opj_image_t* image)
{
    return ::opj_setup_encoder(p_codec, parameters, image) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_start_compress(opj_codec_t* p_codec,
                                                         opj_image_t* p_image,
                                                         opj_stream_t* p_stream)
{
    return ::opj_start_compress(p_codec, p_image, p_stream) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_end_compress(opj_codec_t* p_codec,
                                                       opj_stream_t* p_stream)
{
    return ::opj_end_compress(p_codec, p_stream) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT const bool openjpeg_openjp2_opj_encode(opj_codec_t* p_codec,
                                                 opj_stream_t* p_stream)
{
    return ::opj_encode(p_codec, p_stream) == OPJ_TRUE;
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_set_default_encoder_parameters(opj_cparameters_t* parameters)
{
    ::opj_set_default_encoder_parameters(parameters);
}

#pragma endregion functions

#pragma region non-openjp2 functions

IMAGESHARPOPENJPEG_EXPORT const opj_cparameters_t* openjpeg_openjp2_opj_cparameters_t_new()
{
    return new opj_cparameters_t();
}

IMAGESHARPOPENJPEG_EXPORT void openjpeg_openjp2_opj_cparameters_t_delete(opj_cparameters_t* parameters)
{
    delete parameters;
}

#pragma endregion non-openjp2 functions

#endif // _CPP_OPENJPEG_OPENJP2_OPENJPEG_CODEC_COMPRESSION_H_