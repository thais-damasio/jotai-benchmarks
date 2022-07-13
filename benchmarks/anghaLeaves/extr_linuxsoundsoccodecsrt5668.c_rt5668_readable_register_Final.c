// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct device {int dummy; } ;

/* Variables and functions */
#define  RT5668_4BTN_IL_CMD_1 448 
#define  RT5668_4BTN_IL_CMD_2 447 
#define  RT5668_4BTN_IL_CMD_3 446 
#define  RT5668_4BTN_IL_CMD_4 445 
#define  RT5668_4BTN_IL_CMD_5 444 
#define  RT5668_4BTN_IL_CMD_6 443 
#define  RT5668_4BTN_IL_CMD_7 442 
#define  RT5668_ADC_L_EQ_LPF1_A1 441 
#define  RT5668_ADC_STO1_HP_CTRL_1 440 
#define  RT5668_ADC_STO1_HP_CTRL_2 439 
#define  RT5668_ADDA_CLK_1 438 
#define  RT5668_ADDA_CLK_2 437 
#define  RT5668_AD_DA_MIXER 436 
#define  RT5668_AJD1_CTRL 435 
#define  RT5668_ALC_BACK_GAIN 434 
#define  RT5668_A_DAC1_MUX 433 
#define  RT5668_BIAS_CUR_CTRL_10 432 
#define  RT5668_BIAS_CUR_CTRL_2 431 
#define  RT5668_BIAS_CUR_CTRL_3 430 
#define  RT5668_BIAS_CUR_CTRL_4 429 
#define  RT5668_BIAS_CUR_CTRL_5 428 
#define  RT5668_BIAS_CUR_CTRL_6 427 
#define  RT5668_BIAS_CUR_CTRL_7 426 
#define  RT5668_BIAS_CUR_CTRL_8 425 
#define  RT5668_BIAS_CUR_CTRL_9 424 
#define  RT5668_CALIB_ADC_CTRL 423 
#define  RT5668_CAL_REC 422 
#define  RT5668_CBJ_BST_CTRL 421 
#define  RT5668_CBJ_CTRL_1 420 
#define  RT5668_CBJ_CTRL_2 419 
#define  RT5668_CBJ_CTRL_3 418 
#define  RT5668_CBJ_CTRL_4 417 
#define  RT5668_CBJ_CTRL_5 416 
#define  RT5668_CBJ_CTRL_6 415 
#define  RT5668_CBJ_CTRL_7 414 
#define  RT5668_CHARGE_PUMP_1 413 
#define  RT5668_CHOP_ADC 412 
#define  RT5668_CHOP_DAC 411 
#define  RT5668_CLK_DET 410 
#define  RT5668_DAC1_DIG_VOL 409 
#define  RT5668_DAC_ADC_DIG_VOL1 408 
#define  RT5668_DATA_SEL_CTRL_1 407 
#define  RT5668_DELAY_BUF_CTRL 406 
#define  RT5668_DEPOP_1 405 
#define  RT5668_DEPOP_2 404 
#define  RT5668_DEVICE_ID 403 
#define  RT5668_DIG_INF2_DATA 402 
#define  RT5668_DIG_IN_CTRL_1 401 
#define  RT5668_DMIC_CTRL_1 400 
#define  RT5668_DRC1_CTRL_0 399 
#define  RT5668_DRC1_CTRL_1 398 
#define  RT5668_DRC1_CTRL_2 397 
#define  RT5668_DRC1_CTRL_3 396 
#define  RT5668_DRC1_CTRL_4 395 
#define  RT5668_DRC1_CTRL_5 394 
#define  RT5668_DRC1_CTRL_6 393 
#define  RT5668_DRC1_HARD_LMT_CTRL_1 392 
#define  RT5668_DRC1_HARD_LMT_CTRL_2 391 
#define  RT5668_DRC1_PRIV_1 390 
#define  RT5668_DRC1_PRIV_2 389 
#define  RT5668_DRC1_PRIV_3 388 
#define  RT5668_DRC1_PRIV_4 387 
#define  RT5668_DRC1_PRIV_5 386 
#define  RT5668_DRC1_PRIV_6 385 
#define  RT5668_DRC1_PRIV_7 384 
#define  RT5668_DRC1_PRIV_8 383 
#define  RT5668_DUMMY_1 382 
#define  RT5668_DUMMY_2 381 
#define  RT5668_DUMMY_3 380 
#define  RT5668_EFUSE_CTRL_1 379 
#define  RT5668_EFUSE_CTRL_10 378 
#define  RT5668_EFUSE_CTRL_11 377 
#define  RT5668_EFUSE_CTRL_2 376 
#define  RT5668_EFUSE_CTRL_3 375 
#define  RT5668_EFUSE_CTRL_4 374 
#define  RT5668_EFUSE_CTRL_5 373 
#define  RT5668_EFUSE_CTRL_6 372 
#define  RT5668_EFUSE_CTRL_7 371 
#define  RT5668_EFUSE_CTRL_8 370 
#define  RT5668_EFUSE_CTRL_9 369 
#define  RT5668_EQ_AUTO_RCV_CTRL1 368 
#define  RT5668_EQ_AUTO_RCV_CTRL10 367 
#define  RT5668_EQ_AUTO_RCV_CTRL11 366 
#define  RT5668_EQ_AUTO_RCV_CTRL12 365 
#define  RT5668_EQ_AUTO_RCV_CTRL13 364 
#define  RT5668_EQ_AUTO_RCV_CTRL2 363 
#define  RT5668_EQ_AUTO_RCV_CTRL3 362 
#define  RT5668_EQ_AUTO_RCV_CTRL4 361 
#define  RT5668_EQ_AUTO_RCV_CTRL5 360 
#define  RT5668_EQ_AUTO_RCV_CTRL6 359 
#define  RT5668_EQ_AUTO_RCV_CTRL7 358 
#define  RT5668_EQ_AUTO_RCV_CTRL8 357 
#define  RT5668_EQ_AUTO_RCV_CTRL9 356 
#define  RT5668_EQ_CTRL_1 355 
#define  RT5668_EQ_CTRL_2 354 
#define  RT5668_GLB_CLK 353 
#define  RT5668_GPIO_CTRL_1 352 
#define  RT5668_GPIO_CTRL_2 351 
#define  RT5668_GPIO_CTRL_3 350 
#define  RT5668_HPL_GAIN 349 
#define  RT5668_HPR_GAIN 348 
#define  RT5668_HP_AMP_DET_CTRL_1 347 
#define  RT5668_HP_AMP_DET_CTRL_2 346 
#define  RT5668_HP_CALIB_CTRL_1 345 
#define  RT5668_HP_CALIB_CTRL_10 344 
#define  RT5668_HP_CALIB_CTRL_11 343 
#define  RT5668_HP_CALIB_CTRL_2 342 
#define  RT5668_HP_CALIB_CTRL_3 341 
#define  RT5668_HP_CALIB_CTRL_4 340 
#define  RT5668_HP_CALIB_CTRL_5 339 
#define  RT5668_HP_CALIB_CTRL_6 338 
#define  RT5668_HP_CALIB_CTRL_7 337 
#define  RT5668_HP_CALIB_CTRL_9 336 
#define  RT5668_HP_CALIB_STA_1 335 
#define  RT5668_HP_CALIB_STA_10 334 
#define  RT5668_HP_CALIB_STA_11 333 
#define  RT5668_HP_CALIB_STA_2 332 
#define  RT5668_HP_CALIB_STA_3 331 
#define  RT5668_HP_CALIB_STA_4 330 
#define  RT5668_HP_CALIB_STA_5 329 
#define  RT5668_HP_CALIB_STA_6 328 
#define  RT5668_HP_CALIB_STA_7 327 
#define  RT5668_HP_CALIB_STA_8 326 
#define  RT5668_HP_CALIB_STA_9 325 
#define  RT5668_HP_CHARGE_PUMP_1 324 
#define  RT5668_HP_CHARGE_PUMP_2 323 
#define  RT5668_HP_CTRL_1 322 
#define  RT5668_HP_CTRL_2 321 
#define  RT5668_HP_IMP_GAIN_1 320 
#define  RT5668_HP_IMP_GAIN_2 319 
#define  RT5668_HP_IMP_SENS_CTRL_01 318 
#define  RT5668_HP_IMP_SENS_CTRL_02 317 
#define  RT5668_HP_IMP_SENS_CTRL_03 316 
#define  RT5668_HP_IMP_SENS_CTRL_04 315 
#define  RT5668_HP_IMP_SENS_CTRL_05 314 
#define  RT5668_HP_IMP_SENS_CTRL_06 313 
#define  RT5668_HP_IMP_SENS_CTRL_07 312 
#define  RT5668_HP_IMP_SENS_CTRL_08 311 
#define  RT5668_HP_IMP_SENS_CTRL_09 310 
#define  RT5668_HP_IMP_SENS_CTRL_10 309 
#define  RT5668_HP_IMP_SENS_CTRL_11 308 
#define  RT5668_HP_IMP_SENS_CTRL_12 307 
#define  RT5668_HP_IMP_SENS_CTRL_13 306 
#define  RT5668_HP_IMP_SENS_CTRL_14 305 
#define  RT5668_HP_IMP_SENS_CTRL_15 304 
#define  RT5668_HP_IMP_SENS_CTRL_16 303 
#define  RT5668_HP_IMP_SENS_CTRL_17 302 
#define  RT5668_HP_IMP_SENS_CTRL_18 301 
#define  RT5668_HP_IMP_SENS_CTRL_19 300 
#define  RT5668_HP_IMP_SENS_CTRL_20 299 
#define  RT5668_HP_IMP_SENS_CTRL_21 298 
#define  RT5668_HP_IMP_SENS_CTRL_22 297 
#define  RT5668_HP_IMP_SENS_CTRL_23 296 
#define  RT5668_HP_IMP_SENS_CTRL_24 295 
#define  RT5668_HP_IMP_SENS_CTRL_25 294 
#define  RT5668_HP_IMP_SENS_CTRL_26 293 
#define  RT5668_HP_IMP_SENS_CTRL_27 292 
#define  RT5668_HP_IMP_SENS_CTRL_28 291 
#define  RT5668_HP_IMP_SENS_CTRL_29 290 
#define  RT5668_HP_IMP_SENS_CTRL_30 289 
#define  RT5668_HP_IMP_SENS_CTRL_31 288 
#define  RT5668_HP_IMP_SENS_CTRL_32 287 
#define  RT5668_HP_IMP_SENS_CTRL_33 286 
#define  RT5668_HP_IMP_SENS_CTRL_34 285 
#define  RT5668_HP_IMP_SENS_CTRL_35 284 
#define  RT5668_HP_IMP_SENS_CTRL_36 283 
#define  RT5668_HP_IMP_SENS_CTRL_37 282 
#define  RT5668_HP_IMP_SENS_CTRL_38 281 
#define  RT5668_HP_IMP_SENS_CTRL_39 280 
#define  RT5668_HP_IMP_SENS_CTRL_40 279 
#define  RT5668_HP_IMP_SENS_CTRL_41 278 
#define  RT5668_HP_IMP_SENS_CTRL_42 277 
#define  RT5668_HP_IMP_SENS_CTRL_43 276 
#define  RT5668_HP_LOGIC_CTRL_1 275 
#define  RT5668_HP_LOGIC_CTRL_2 274 
#define  RT5668_HP_LOGIC_CTRL_3 273 
#define  RT5668_I2C_CTRL 272 
#define  RT5668_I2C_MODE 271 
#define  RT5668_I2S1_F_DIV_CTRL_1 270 
#define  RT5668_I2S1_F_DIV_CTRL_2 269 
#define  RT5668_I2S1_SDP 268 
#define  RT5668_I2S2_F_DIV_CTRL_1 267 
#define  RT5668_I2S2_F_DIV_CTRL_2 266 
#define  RT5668_I2S2_SDP 265 
#define  RT5668_I2S_M_CLK_CTRL_1 264 
#define  RT5668_IL_CMD_1 263 
#define  RT5668_IL_CMD_2 262 
#define  RT5668_IL_CMD_3 261 
#define  RT5668_IL_CMD_4 260 
#define  RT5668_IL_CMD_5 259 
#define  RT5668_IL_CMD_6 258 
#define  RT5668_INT_ST_1 257 
#define  RT5668_IRQ_CTRL_1 256 
#define  RT5668_IRQ_CTRL_2 255 
#define  RT5668_IRQ_CTRL_3 254 
#define  RT5668_IRQ_CTRL_4 253 
#define  RT5668_JD1_THD 252 
#define  RT5668_JD2_THD 251 
#define  RT5668_JD_CTRL_1 250 
#define  RT5668_JD_TOP_VC_VTRL 249 
#define  RT5668_LOW_HP_AMP_DET 248 
#define  RT5668_L_EQ_BPF1_A1 247 
#define  RT5668_L_EQ_BPF1_A2 246 
#define  RT5668_L_EQ_BPF1_H0 245 
#define  RT5668_L_EQ_BPF2_A1 244 
#define  RT5668_L_EQ_BPF2_A2 243 
#define  RT5668_L_EQ_BPF2_H0 242 
#define  RT5668_L_EQ_BPF3_A1 241 
#define  RT5668_L_EQ_BPF3_A2 240 
#define  RT5668_L_EQ_BPF3_H0 239 
#define  RT5668_L_EQ_BPF4_A1 238 
#define  RT5668_L_EQ_BPF4_A2 237 
#define  RT5668_L_EQ_BPF4_H0 236 
#define  RT5668_L_EQ_HPF1_A1 235 
#define  RT5668_L_EQ_HPF1_H0 234 
#define  RT5668_L_EQ_LPF1_H0 233 
#define  RT5668_L_EQ_POST_VOL 232 
#define  RT5668_L_EQ_PRE_VOL 231 
#define  RT5668_MICBIAS_1 230 
#define  RT5668_MICBIAS_2 229 
#define  RT5668_MID_HP_AMP_DET 228 
#define  RT5668_PAD_DRIVING_CTRL 227 
#define  RT5668_PLL1_INTERNAL 226 
#define  RT5668_PLL2_CTRL_1 225 
#define  RT5668_PLL2_CTRL_2 224 
#define  RT5668_PLL2_CTRL_3 223 
#define  RT5668_PLL2_CTRL_4 222 
#define  RT5668_PLL2_INTERNAL 221 
#define  RT5668_PLL_CTRL_1 220 
#define  RT5668_PLL_CTRL_2 219 
#define  RT5668_PLL_TRACK_1 218 
#define  RT5668_PLL_TRACK_11 217 
#define  RT5668_PLL_TRACK_12 216 
#define  RT5668_PLL_TRACK_14 215 
#define  RT5668_PLL_TRACK_2 214 
#define  RT5668_PLL_TRACK_3 213 
#define  RT5668_PLL_TRACK_4 212 
#define  RT5668_PLL_TRACK_5 211 
#define  RT5668_PLL_TRACK_6 210 
#define  RT5668_PWR_ANLG_1 209 
#define  RT5668_PWR_ANLG_2 208 
#define  RT5668_PWR_ANLG_3 207 
#define  RT5668_PWR_DIG_1 206 
#define  RT5668_PWR_DIG_2 205 
#define  RT5668_PWR_MIXER 204 
#define  RT5668_PWR_VOL 203 
#define  RT5668_RC_CLK_CTRL 202 
#define  RT5668_REC_MIXER 201 
#define  RT5668_RESET 200 
#define  RT5668_RESET_HPF_CTRL 199 
#define  RT5668_RESET_LPF_CTRL 198 
#define  RT5668_R_EQ_BPF1_A1 197 
#define  RT5668_R_EQ_BPF1_A2 196 
#define  RT5668_R_EQ_BPF1_H0 195 
#define  RT5668_R_EQ_BPF2_A1 194 
#define  RT5668_R_EQ_BPF2_A2 193 
#define  RT5668_R_EQ_BPF2_H0 192 
#define  RT5668_R_EQ_BPF3_A1 191 
#define  RT5668_R_EQ_BPF3_A2 190 
#define  RT5668_R_EQ_BPF3_H0 189 
#define  RT5668_R_EQ_BPF4_A1 188 
#define  RT5668_R_EQ_BPF4_A2 187 
#define  RT5668_R_EQ_BPF4_H0 186 
#define  RT5668_R_EQ_HPF1_A1 185 
#define  RT5668_R_EQ_HPF1_H0 184 
#define  RT5668_R_EQ_LPF1_A1 183 
#define  RT5668_R_EQ_LPF1_H0 182 
#define  RT5668_R_EQ_POST_VOL 181 
#define  RT5668_R_EQ_PRE_VOL 180 
#define  RT5668_SAR_IL_CMD_1 179 
#define  RT5668_SAR_IL_CMD_10 178 
#define  RT5668_SAR_IL_CMD_11 177 
#define  RT5668_SAR_IL_CMD_12 176 
#define  RT5668_SAR_IL_CMD_13 175 
#define  RT5668_SAR_IL_CMD_2 174 
#define  RT5668_SAR_IL_CMD_3 173 
#define  RT5668_SAR_IL_CMD_4 172 
#define  RT5668_SAR_IL_CMD_5 171 
#define  RT5668_SAR_IL_CMD_6 170 
#define  RT5668_SAR_IL_CMD_7 169 
#define  RT5668_SAR_IL_CMD_8 168 
#define  RT5668_SAR_IL_CMD_9 167 
#define  RT5668_SDW_REF_CLK 166 
#define  RT5668_SIDETONE_CTRL 165 
#define  RT5668_SIL_PSV_CTRL1 164 
#define  RT5668_SIL_PSV_CTRL2 163 
#define  RT5668_SIL_PSV_CTRL3 162 
#define  RT5668_SIL_PSV_CTRL4 161 
#define  RT5668_SIL_PSV_CTRL5 160 
#define  RT5668_SOFT_RAMP_DEPOP 159 
#define  RT5668_SPKVDD_DET_STA 158 
#define  RT5668_STO1_ADC_BOOST 157 
#define  RT5668_STO1_ADC_DIG_VOL 156 
#define  RT5668_STO1_ADC_MIXER 155 
#define  RT5668_STO1_DAC_MIXER 154 
#define  RT5668_STO1_DAC_SIL_DET 153 
#define  RT5668_STO_NG2_CTRL_1 152 
#define  RT5668_STO_NG2_CTRL_10 151 
#define  RT5668_STO_NG2_CTRL_2 150 
#define  RT5668_STO_NG2_CTRL_3 149 
#define  RT5668_STO_NG2_CTRL_4 148 
#define  RT5668_STO_NG2_CTRL_5 147 
#define  RT5668_STO_NG2_CTRL_6 146 
#define  RT5668_STO_NG2_CTRL_7 145 
#define  RT5668_STO_NG2_CTRL_8 144 
#define  RT5668_STO_NG2_CTRL_9 143 
#define  RT5668_SV_ZCD_1 142 
#define  RT5668_SV_ZCD_2 141 
#define  RT5668_TDM_ADDA_CTRL_1 140 
#define  RT5668_TDM_ADDA_CTRL_2 139 
#define  RT5668_TDM_CTRL 138 
#define  RT5668_TDM_TCON_CTRL 137 
#define  RT5668_TEST_MODE_CTRL_1 136 
#define  RT5668_TEST_MODE_CTRL_2 135 
#define  RT5668_TEST_MODE_CTRL_3 134 
#define  RT5668_TEST_MODE_CTRL_4 133 
#define  RT5668_TEST_MODE_CTRL_5 132 
#define  RT5668_VENDOR_ID 131 
#define  RT5668_VERSION_ID 130 
#define  RT5668_VOL_TEST 129 
#define  RT5668_VREF_REC_OP_FB_CAP_CTRL 128 

__attribute__((used)) static bool rt5668_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5668_RESET:
	case RT5668_VERSION_ID:
	case RT5668_VENDOR_ID:
	case RT5668_DEVICE_ID:
	case RT5668_HP_CTRL_1:
	case RT5668_HP_CTRL_2:
	case RT5668_HPL_GAIN:
	case RT5668_HPR_GAIN:
	case RT5668_I2C_CTRL:
	case RT5668_CBJ_BST_CTRL:
	case RT5668_CBJ_CTRL_1:
	case RT5668_CBJ_CTRL_2:
	case RT5668_CBJ_CTRL_3:
	case RT5668_CBJ_CTRL_4:
	case RT5668_CBJ_CTRL_5:
	case RT5668_CBJ_CTRL_6:
	case RT5668_CBJ_CTRL_7:
	case RT5668_DAC1_DIG_VOL:
	case RT5668_STO1_ADC_DIG_VOL:
	case RT5668_STO1_ADC_BOOST:
	case RT5668_HP_IMP_GAIN_1:
	case RT5668_HP_IMP_GAIN_2:
	case RT5668_SIDETONE_CTRL:
	case RT5668_STO1_ADC_MIXER:
	case RT5668_AD_DA_MIXER:
	case RT5668_STO1_DAC_MIXER:
	case RT5668_A_DAC1_MUX:
	case RT5668_DIG_INF2_DATA:
	case RT5668_REC_MIXER:
	case RT5668_CAL_REC:
	case RT5668_ALC_BACK_GAIN:
	case RT5668_PWR_DIG_1:
	case RT5668_PWR_DIG_2:
	case RT5668_PWR_ANLG_1:
	case RT5668_PWR_ANLG_2:
	case RT5668_PWR_ANLG_3:
	case RT5668_PWR_MIXER:
	case RT5668_PWR_VOL:
	case RT5668_CLK_DET:
	case RT5668_RESET_LPF_CTRL:
	case RT5668_RESET_HPF_CTRL:
	case RT5668_DMIC_CTRL_1:
	case RT5668_I2S1_SDP:
	case RT5668_I2S2_SDP:
	case RT5668_ADDA_CLK_1:
	case RT5668_ADDA_CLK_2:
	case RT5668_I2S1_F_DIV_CTRL_1:
	case RT5668_I2S1_F_DIV_CTRL_2:
	case RT5668_TDM_CTRL:
	case RT5668_TDM_ADDA_CTRL_1:
	case RT5668_TDM_ADDA_CTRL_2:
	case RT5668_DATA_SEL_CTRL_1:
	case RT5668_TDM_TCON_CTRL:
	case RT5668_GLB_CLK:
	case RT5668_PLL_CTRL_1:
	case RT5668_PLL_CTRL_2:
	case RT5668_PLL_TRACK_1:
	case RT5668_PLL_TRACK_2:
	case RT5668_PLL_TRACK_3:
	case RT5668_PLL_TRACK_4:
	case RT5668_PLL_TRACK_5:
	case RT5668_PLL_TRACK_6:
	case RT5668_PLL_TRACK_11:
	case RT5668_SDW_REF_CLK:
	case RT5668_DEPOP_1:
	case RT5668_DEPOP_2:
	case RT5668_HP_CHARGE_PUMP_1:
	case RT5668_HP_CHARGE_PUMP_2:
	case RT5668_MICBIAS_1:
	case RT5668_MICBIAS_2:
	case RT5668_PLL_TRACK_12:
	case RT5668_PLL_TRACK_14:
	case RT5668_PLL2_CTRL_1:
	case RT5668_PLL2_CTRL_2:
	case RT5668_PLL2_CTRL_3:
	case RT5668_PLL2_CTRL_4:
	case RT5668_RC_CLK_CTRL:
	case RT5668_I2S_M_CLK_CTRL_1:
	case RT5668_I2S2_F_DIV_CTRL_1:
	case RT5668_I2S2_F_DIV_CTRL_2:
	case RT5668_EQ_CTRL_1:
	case RT5668_EQ_CTRL_2:
	case RT5668_IRQ_CTRL_1:
	case RT5668_IRQ_CTRL_2:
	case RT5668_IRQ_CTRL_3:
	case RT5668_IRQ_CTRL_4:
	case RT5668_INT_ST_1:
	case RT5668_GPIO_CTRL_1:
	case RT5668_GPIO_CTRL_2:
	case RT5668_GPIO_CTRL_3:
	case RT5668_HP_AMP_DET_CTRL_1:
	case RT5668_HP_AMP_DET_CTRL_2:
	case RT5668_MID_HP_AMP_DET:
	case RT5668_LOW_HP_AMP_DET:
	case RT5668_DELAY_BUF_CTRL:
	case RT5668_SV_ZCD_1:
	case RT5668_SV_ZCD_2:
	case RT5668_IL_CMD_1:
	case RT5668_IL_CMD_2:
	case RT5668_IL_CMD_3:
	case RT5668_IL_CMD_4:
	case RT5668_IL_CMD_5:
	case RT5668_IL_CMD_6:
	case RT5668_4BTN_IL_CMD_1:
	case RT5668_4BTN_IL_CMD_2:
	case RT5668_4BTN_IL_CMD_3:
	case RT5668_4BTN_IL_CMD_4:
	case RT5668_4BTN_IL_CMD_5:
	case RT5668_4BTN_IL_CMD_6:
	case RT5668_4BTN_IL_CMD_7:
	case RT5668_ADC_STO1_HP_CTRL_1:
	case RT5668_ADC_STO1_HP_CTRL_2:
	case RT5668_AJD1_CTRL:
	case RT5668_JD1_THD:
	case RT5668_JD2_THD:
	case RT5668_JD_CTRL_1:
	case RT5668_DUMMY_1:
	case RT5668_DUMMY_2:
	case RT5668_DUMMY_3:
	case RT5668_DAC_ADC_DIG_VOL1:
	case RT5668_BIAS_CUR_CTRL_2:
	case RT5668_BIAS_CUR_CTRL_3:
	case RT5668_BIAS_CUR_CTRL_4:
	case RT5668_BIAS_CUR_CTRL_5:
	case RT5668_BIAS_CUR_CTRL_6:
	case RT5668_BIAS_CUR_CTRL_7:
	case RT5668_BIAS_CUR_CTRL_8:
	case RT5668_BIAS_CUR_CTRL_9:
	case RT5668_BIAS_CUR_CTRL_10:
	case RT5668_VREF_REC_OP_FB_CAP_CTRL:
	case RT5668_CHARGE_PUMP_1:
	case RT5668_DIG_IN_CTRL_1:
	case RT5668_PAD_DRIVING_CTRL:
	case RT5668_SOFT_RAMP_DEPOP:
	case RT5668_CHOP_DAC:
	case RT5668_CHOP_ADC:
	case RT5668_CALIB_ADC_CTRL:
	case RT5668_VOL_TEST:
	case RT5668_SPKVDD_DET_STA:
	case RT5668_TEST_MODE_CTRL_1:
	case RT5668_TEST_MODE_CTRL_2:
	case RT5668_TEST_MODE_CTRL_3:
	case RT5668_TEST_MODE_CTRL_4:
	case RT5668_TEST_MODE_CTRL_5:
	case RT5668_PLL1_INTERNAL:
	case RT5668_PLL2_INTERNAL:
	case RT5668_STO_NG2_CTRL_1:
	case RT5668_STO_NG2_CTRL_2:
	case RT5668_STO_NG2_CTRL_3:
	case RT5668_STO_NG2_CTRL_4:
	case RT5668_STO_NG2_CTRL_5:
	case RT5668_STO_NG2_CTRL_6:
	case RT5668_STO_NG2_CTRL_7:
	case RT5668_STO_NG2_CTRL_8:
	case RT5668_STO_NG2_CTRL_9:
	case RT5668_STO_NG2_CTRL_10:
	case RT5668_STO1_DAC_SIL_DET:
	case RT5668_SIL_PSV_CTRL1:
	case RT5668_SIL_PSV_CTRL2:
	case RT5668_SIL_PSV_CTRL3:
	case RT5668_SIL_PSV_CTRL4:
	case RT5668_SIL_PSV_CTRL5:
	case RT5668_HP_IMP_SENS_CTRL_01:
	case RT5668_HP_IMP_SENS_CTRL_02:
	case RT5668_HP_IMP_SENS_CTRL_03:
	case RT5668_HP_IMP_SENS_CTRL_04:
	case RT5668_HP_IMP_SENS_CTRL_05:
	case RT5668_HP_IMP_SENS_CTRL_06:
	case RT5668_HP_IMP_SENS_CTRL_07:
	case RT5668_HP_IMP_SENS_CTRL_08:
	case RT5668_HP_IMP_SENS_CTRL_09:
	case RT5668_HP_IMP_SENS_CTRL_10:
	case RT5668_HP_IMP_SENS_CTRL_11:
	case RT5668_HP_IMP_SENS_CTRL_12:
	case RT5668_HP_IMP_SENS_CTRL_13:
	case RT5668_HP_IMP_SENS_CTRL_14:
	case RT5668_HP_IMP_SENS_CTRL_15:
	case RT5668_HP_IMP_SENS_CTRL_16:
	case RT5668_HP_IMP_SENS_CTRL_17:
	case RT5668_HP_IMP_SENS_CTRL_18:
	case RT5668_HP_IMP_SENS_CTRL_19:
	case RT5668_HP_IMP_SENS_CTRL_20:
	case RT5668_HP_IMP_SENS_CTRL_21:
	case RT5668_HP_IMP_SENS_CTRL_22:
	case RT5668_HP_IMP_SENS_CTRL_23:
	case RT5668_HP_IMP_SENS_CTRL_24:
	case RT5668_HP_IMP_SENS_CTRL_25:
	case RT5668_HP_IMP_SENS_CTRL_26:
	case RT5668_HP_IMP_SENS_CTRL_27:
	case RT5668_HP_IMP_SENS_CTRL_28:
	case RT5668_HP_IMP_SENS_CTRL_29:
	case RT5668_HP_IMP_SENS_CTRL_30:
	case RT5668_HP_IMP_SENS_CTRL_31:
	case RT5668_HP_IMP_SENS_CTRL_32:
	case RT5668_HP_IMP_SENS_CTRL_33:
	case RT5668_HP_IMP_SENS_CTRL_34:
	case RT5668_HP_IMP_SENS_CTRL_35:
	case RT5668_HP_IMP_SENS_CTRL_36:
	case RT5668_HP_IMP_SENS_CTRL_37:
	case RT5668_HP_IMP_SENS_CTRL_38:
	case RT5668_HP_IMP_SENS_CTRL_39:
	case RT5668_HP_IMP_SENS_CTRL_40:
	case RT5668_HP_IMP_SENS_CTRL_41:
	case RT5668_HP_IMP_SENS_CTRL_42:
	case RT5668_HP_IMP_SENS_CTRL_43:
	case RT5668_HP_LOGIC_CTRL_1:
	case RT5668_HP_LOGIC_CTRL_2:
	case RT5668_HP_LOGIC_CTRL_3:
	case RT5668_HP_CALIB_CTRL_1:
	case RT5668_HP_CALIB_CTRL_2:
	case RT5668_HP_CALIB_CTRL_3:
	case RT5668_HP_CALIB_CTRL_4:
	case RT5668_HP_CALIB_CTRL_5:
	case RT5668_HP_CALIB_CTRL_6:
	case RT5668_HP_CALIB_CTRL_7:
	case RT5668_HP_CALIB_CTRL_9:
	case RT5668_HP_CALIB_CTRL_10:
	case RT5668_HP_CALIB_CTRL_11:
	case RT5668_HP_CALIB_STA_1:
	case RT5668_HP_CALIB_STA_2:
	case RT5668_HP_CALIB_STA_3:
	case RT5668_HP_CALIB_STA_4:
	case RT5668_HP_CALIB_STA_5:
	case RT5668_HP_CALIB_STA_6:
	case RT5668_HP_CALIB_STA_7:
	case RT5668_HP_CALIB_STA_8:
	case RT5668_HP_CALIB_STA_9:
	case RT5668_HP_CALIB_STA_10:
	case RT5668_HP_CALIB_STA_11:
	case RT5668_SAR_IL_CMD_1:
	case RT5668_SAR_IL_CMD_2:
	case RT5668_SAR_IL_CMD_3:
	case RT5668_SAR_IL_CMD_4:
	case RT5668_SAR_IL_CMD_5:
	case RT5668_SAR_IL_CMD_6:
	case RT5668_SAR_IL_CMD_7:
	case RT5668_SAR_IL_CMD_8:
	case RT5668_SAR_IL_CMD_9:
	case RT5668_SAR_IL_CMD_10:
	case RT5668_SAR_IL_CMD_11:
	case RT5668_SAR_IL_CMD_12:
	case RT5668_SAR_IL_CMD_13:
	case RT5668_EFUSE_CTRL_1:
	case RT5668_EFUSE_CTRL_2:
	case RT5668_EFUSE_CTRL_3:
	case RT5668_EFUSE_CTRL_4:
	case RT5668_EFUSE_CTRL_5:
	case RT5668_EFUSE_CTRL_6:
	case RT5668_EFUSE_CTRL_7:
	case RT5668_EFUSE_CTRL_8:
	case RT5668_EFUSE_CTRL_9:
	case RT5668_EFUSE_CTRL_10:
	case RT5668_EFUSE_CTRL_11:
	case RT5668_JD_TOP_VC_VTRL:
	case RT5668_DRC1_CTRL_0:
	case RT5668_DRC1_CTRL_1:
	case RT5668_DRC1_CTRL_2:
	case RT5668_DRC1_CTRL_3:
	case RT5668_DRC1_CTRL_4:
	case RT5668_DRC1_CTRL_5:
	case RT5668_DRC1_CTRL_6:
	case RT5668_DRC1_HARD_LMT_CTRL_1:
	case RT5668_DRC1_HARD_LMT_CTRL_2:
	case RT5668_DRC1_PRIV_1:
	case RT5668_DRC1_PRIV_2:
	case RT5668_DRC1_PRIV_3:
	case RT5668_DRC1_PRIV_4:
	case RT5668_DRC1_PRIV_5:
	case RT5668_DRC1_PRIV_6:
	case RT5668_DRC1_PRIV_7:
	case RT5668_DRC1_PRIV_8:
	case RT5668_EQ_AUTO_RCV_CTRL1:
	case RT5668_EQ_AUTO_RCV_CTRL2:
	case RT5668_EQ_AUTO_RCV_CTRL3:
	case RT5668_EQ_AUTO_RCV_CTRL4:
	case RT5668_EQ_AUTO_RCV_CTRL5:
	case RT5668_EQ_AUTO_RCV_CTRL6:
	case RT5668_EQ_AUTO_RCV_CTRL7:
	case RT5668_EQ_AUTO_RCV_CTRL8:
	case RT5668_EQ_AUTO_RCV_CTRL9:
	case RT5668_EQ_AUTO_RCV_CTRL10:
	case RT5668_EQ_AUTO_RCV_CTRL11:
	case RT5668_EQ_AUTO_RCV_CTRL12:
	case RT5668_EQ_AUTO_RCV_CTRL13:
	case RT5668_ADC_L_EQ_LPF1_A1:
	case RT5668_R_EQ_LPF1_A1:
	case RT5668_L_EQ_LPF1_H0:
	case RT5668_R_EQ_LPF1_H0:
	case RT5668_L_EQ_BPF1_A1:
	case RT5668_R_EQ_BPF1_A1:
	case RT5668_L_EQ_BPF1_A2:
	case RT5668_R_EQ_BPF1_A2:
	case RT5668_L_EQ_BPF1_H0:
	case RT5668_R_EQ_BPF1_H0:
	case RT5668_L_EQ_BPF2_A1:
	case RT5668_R_EQ_BPF2_A1:
	case RT5668_L_EQ_BPF2_A2:
	case RT5668_R_EQ_BPF2_A2:
	case RT5668_L_EQ_BPF2_H0:
	case RT5668_R_EQ_BPF2_H0:
	case RT5668_L_EQ_BPF3_A1:
	case RT5668_R_EQ_BPF3_A1:
	case RT5668_L_EQ_BPF3_A2:
	case RT5668_R_EQ_BPF3_A2:
	case RT5668_L_EQ_BPF3_H0:
	case RT5668_R_EQ_BPF3_H0:
	case RT5668_L_EQ_BPF4_A1:
	case RT5668_R_EQ_BPF4_A1:
	case RT5668_L_EQ_BPF4_A2:
	case RT5668_R_EQ_BPF4_A2:
	case RT5668_L_EQ_BPF4_H0:
	case RT5668_R_EQ_BPF4_H0:
	case RT5668_L_EQ_HPF1_A1:
	case RT5668_R_EQ_HPF1_A1:
	case RT5668_L_EQ_HPF1_H0:
	case RT5668_R_EQ_HPF1_H0:
	case RT5668_L_EQ_PRE_VOL:
	case RT5668_R_EQ_PRE_VOL:
	case RT5668_L_EQ_POST_VOL:
	case RT5668_R_EQ_POST_VOL:
	case RT5668_I2C_MODE:
		return true;
	default:
		return false;
	}
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rt5668_readable_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rt5668_readable_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rt5668_readable_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
