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
       0            big-arr\n\
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
#define  WM1811_AIF2TX_CONTROL 365 
#define  WM8958_AIF1_DAC1_NOISE_GATE 364 
#define  WM8958_AIF1_DAC2_NOISE_GATE 363 
#define  WM8958_AIF2_DAC_NOISE_GATE 362 
#define  WM8958_AIF3ADC_DATA 361 
#define  WM8958_AIF3DAC_DATA 360 
#define  WM8958_AIF3_CONTROL_1 359 
#define  WM8958_AIF3_CONTROL_2 358 
#define  WM8958_CHARGE_PUMP_2 357 
#define  WM8958_FLL1_EFS_1 356 
#define  WM8958_FLL1_EFS_2 355 
#define  WM8958_FLL2_EFS_1 354 
#define  WM8958_FLL2_EFS_2 353 
#define  WM8958_MICBIAS1 352 
#define  WM8958_MICBIAS2 351 
#define  WM8958_MIC_DETECT_1 350 
#define  WM8958_MIC_DETECT_2 349 
#define  WM8958_MIC_DETECT_3 348 
#define  WM8994_ADDITIONAL_CONTROL 347 
#define  WM8994_AIF1ADC_DATA 346 
#define  WM8994_AIF1ADC_LRCLK 345 
#define  WM8994_AIF1DAC_DATA 344 
#define  WM8994_AIF1DAC_LRCLK 343 
#define  WM8994_AIF1_ADC1_FILTERS 342 
#define  WM8994_AIF1_ADC1_LEFT_MIXER_ROUTING 341 
#define  WM8994_AIF1_ADC1_LEFT_VOLUME 340 
#define  WM8994_AIF1_ADC1_RIGHT_MIXER_ROUTING 339 
#define  WM8994_AIF1_ADC1_RIGHT_VOLUME 338 
#define  WM8994_AIF1_ADC2_FILTERS 337 
#define  WM8994_AIF1_ADC2_LEFT_MIXER_ROUTING 336 
#define  WM8994_AIF1_ADC2_RIGHT_MIXER_ROUTING 335 
#define  WM8994_AIF1_BCLK 334 
#define  WM8994_AIF1_CLOCKING_1 333 
#define  WM8994_AIF1_CLOCKING_2 332 
#define  WM8994_AIF1_CONTROL_1 331 
#define  WM8994_AIF1_CONTROL_2 330 
#define  WM8994_AIF1_DAC1_EQ_BAND_1_A 329 
#define  WM8994_AIF1_DAC1_EQ_BAND_1_B 328 
#define  WM8994_AIF1_DAC1_EQ_BAND_1_C 327 
#define  WM8994_AIF1_DAC1_EQ_BAND_1_PG 326 
#define  WM8994_AIF1_DAC1_EQ_BAND_2_A 325 
#define  WM8994_AIF1_DAC1_EQ_BAND_2_B 324 
#define  WM8994_AIF1_DAC1_EQ_BAND_2_C 323 
#define  WM8994_AIF1_DAC1_EQ_BAND_2_PG 322 
#define  WM8994_AIF1_DAC1_EQ_BAND_3_A 321 
#define  WM8994_AIF1_DAC1_EQ_BAND_3_B 320 
#define  WM8994_AIF1_DAC1_EQ_BAND_3_C 319 
#define  WM8994_AIF1_DAC1_EQ_BAND_3_PG 318 
#define  WM8994_AIF1_DAC1_EQ_BAND_4_A 317 
#define  WM8994_AIF1_DAC1_EQ_BAND_4_B 316 
#define  WM8994_AIF1_DAC1_EQ_BAND_4_C 315 
#define  WM8994_AIF1_DAC1_EQ_BAND_4_PG 314 
#define  WM8994_AIF1_DAC1_EQ_BAND_5_A 313 
#define  WM8994_AIF1_DAC1_EQ_BAND_5_B 312 
#define  WM8994_AIF1_DAC1_EQ_BAND_5_PG 311 
#define  WM8994_AIF1_DAC1_EQ_GAINS_1 310 
#define  WM8994_AIF1_DAC1_EQ_GAINS_2 309 
#define  WM8994_AIF1_DAC1_FILTERS_1 308 
#define  WM8994_AIF1_DAC1_FILTERS_2 307 
#define  WM8994_AIF1_DAC1_LEFT_VOLUME 306 
#define  WM8994_AIF1_DAC1_RIGHT_VOLUME 305 
#define  WM8994_AIF1_DAC2_EQ_BAND_1_A 304 
#define  WM8994_AIF1_DAC2_EQ_BAND_1_B 303 
#define  WM8994_AIF1_DAC2_EQ_BAND_1_C 302 
#define  WM8994_AIF1_DAC2_EQ_BAND_1_PG 301 
#define  WM8994_AIF1_DAC2_EQ_BAND_2_A 300 
#define  WM8994_AIF1_DAC2_EQ_BAND_2_B 299 
#define  WM8994_AIF1_DAC2_EQ_BAND_2_C 298 
#define  WM8994_AIF1_DAC2_EQ_BAND_2_PG 297 
#define  WM8994_AIF1_DAC2_EQ_BAND_3_A 296 
#define  WM8994_AIF1_DAC2_EQ_BAND_3_B 295 
#define  WM8994_AIF1_DAC2_EQ_BAND_3_C 294 
#define  WM8994_AIF1_DAC2_EQ_BAND_3_PG 293 
#define  WM8994_AIF1_DAC2_EQ_BAND_4_A 292 
#define  WM8994_AIF1_DAC2_EQ_BAND_4_B 291 
#define  WM8994_AIF1_DAC2_EQ_BAND_4_C 290 
#define  WM8994_AIF1_DAC2_EQ_BAND_4_PG 289 
#define  WM8994_AIF1_DAC2_EQ_BAND_5_A 288 
#define  WM8994_AIF1_DAC2_EQ_BAND_5_B 287 
#define  WM8994_AIF1_DAC2_EQ_BAND_5_PG 286 
#define  WM8994_AIF1_DAC2_EQ_GAINS_1 285 
#define  WM8994_AIF1_DAC2_EQ_GAINS_2 284 
#define  WM8994_AIF1_DAC2_FILTERS_1 283 
#define  WM8994_AIF1_DAC2_FILTERS_2 282 
#define  WM8994_AIF1_DRC1_1 281 
#define  WM8994_AIF1_DRC1_2 280 
#define  WM8994_AIF1_DRC1_3 279 
#define  WM8994_AIF1_DRC1_4 278 
#define  WM8994_AIF1_DRC1_5 277 
#define  WM8994_AIF1_DRC2_1 276 
#define  WM8994_AIF1_DRC2_2 275 
#define  WM8994_AIF1_DRC2_3 274 
#define  WM8994_AIF1_DRC2_4 273 
#define  WM8994_AIF1_DRC2_5 272 
#define  WM8994_AIF1_MASTER_SLAVE 271 
#define  WM8994_AIF1_RATE 270 
#define  WM8994_AIF2ADC_DATA 269 
#define  WM8994_AIF2ADC_LRCLK 268 
#define  WM8994_AIF2DAC_DATA 267 
#define  WM8994_AIF2DAC_LRCLK 266 
#define  WM8994_AIF2_ADC_FILTERS 265 
#define  WM8994_AIF2_ADC_LEFT_VOLUME 264 
#define  WM8994_AIF2_ADC_RIGHT_VOLUME 263 
#define  WM8994_AIF2_BCLK 262 
#define  WM8994_AIF2_CLOCKING_1 261 
#define  WM8994_AIF2_CLOCKING_2 260 
#define  WM8994_AIF2_CONTROL_1 259 
#define  WM8994_AIF2_CONTROL_2 258 
#define  WM8994_AIF2_DAC_FILTERS_1 257 
#define  WM8994_AIF2_DAC_FILTERS_2 256 
#define  WM8994_AIF2_DAC_LEFT_VOLUME 255 
#define  WM8994_AIF2_DAC_RIGHT_VOLUME 254 
#define  WM8994_AIF2_DRC_1 253 
#define  WM8994_AIF2_DRC_2 252 
#define  WM8994_AIF2_DRC_3 251 
#define  WM8994_AIF2_DRC_4 250 
#define  WM8994_AIF2_DRC_5 249 
#define  WM8994_AIF2_EQ_BAND_1_A 248 
#define  WM8994_AIF2_EQ_BAND_1_B 247 
#define  WM8994_AIF2_EQ_BAND_1_C 246 
#define  WM8994_AIF2_EQ_BAND_1_PG 245 
#define  WM8994_AIF2_EQ_BAND_2_A 244 
#define  WM8994_AIF2_EQ_BAND_2_B 243 
#define  WM8994_AIF2_EQ_BAND_2_C 242 
#define  WM8994_AIF2_EQ_BAND_2_PG 241 
#define  WM8994_AIF2_EQ_BAND_3_A 240 
#define  WM8994_AIF2_EQ_BAND_3_B 239 
#define  WM8994_AIF2_EQ_BAND_3_C 238 
#define  WM8994_AIF2_EQ_BAND_3_PG 237 
#define  WM8994_AIF2_EQ_BAND_4_A 236 
#define  WM8994_AIF2_EQ_BAND_4_B 235 
#define  WM8994_AIF2_EQ_BAND_4_C 234 
#define  WM8994_AIF2_EQ_BAND_4_PG 233 
#define  WM8994_AIF2_EQ_BAND_5_A 232 
#define  WM8994_AIF2_EQ_BAND_5_B 231 
#define  WM8994_AIF2_EQ_BAND_5_PG 230 
#define  WM8994_AIF2_EQ_GAINS_1 229 
#define  WM8994_AIF2_EQ_GAINS_2 228 
#define  WM8994_AIF2_MASTER_SLAVE 227 
#define  WM8994_AIF2_RATE 226 
#define  WM8994_ANALOGUE_HP_1 225 
#define  WM8994_ANTIPOP_1 224 
#define  WM8994_ANTIPOP_2 223 
#define  WM8994_CHARGE_PUMP_1 222 
#define  WM8994_CHIP_REVISION 221 
#define  WM8994_CLASSD 220 
#define  WM8994_CLASS_W_1 219 
#define  WM8994_CLOCKING_1 218 
#define  WM8994_CLOCKING_2 217 
#define  WM8994_CONTROL_INTERFACE 216 
#define  WM8994_DAC1_LEFT_MIXER_ROUTING 215 
#define  WM8994_DAC1_LEFT_VOLUME 214 
#define  WM8994_DAC1_MIXER_VOLUMES 213 
#define  WM8994_DAC1_RIGHT_MIXER_ROUTING 212 
#define  WM8994_DAC1_RIGHT_VOLUME 211 
#define  WM8994_DAC2_LEFT_MIXER_ROUTING 210 
#define  WM8994_DAC2_LEFT_VOLUME 209 
#define  WM8994_DAC2_MIXER_VOLUMES 208 
#define  WM8994_DAC2_RIGHT_MIXER_ROUTING 207 
#define  WM8994_DAC2_RIGHT_VOLUME 206 
#define  WM8994_DAC_SOFTMUTE 205 
#define  WM8994_DC_SERVO_1 204 
#define  WM8994_DC_SERVO_2 203 
#define  WM8994_DC_SERVO_4 202 
#define  WM8994_DC_SERVO_4E 201 
#define  WM8994_DC_SERVO_READBACK 200 
#define  WM8994_FLL1_CONTROL_1 199 
#define  WM8994_FLL1_CONTROL_2 198 
#define  WM8994_FLL1_CONTROL_3 197 
#define  WM8994_FLL1_CONTROL_4 196 
#define  WM8994_FLL1_CONTROL_5 195 
#define  WM8994_FLL2_CONTROL_1 194 
#define  WM8994_FLL2_CONTROL_2 193 
#define  WM8994_FLL2_CONTROL_3 192 
#define  WM8994_FLL2_CONTROL_4 191 
#define  WM8994_FLL2_CONTROL_5 190 
#define  WM8994_GPIO_1 189 
#define  WM8994_GPIO_10 188 
#define  WM8994_GPIO_11 187 
#define  WM8994_GPIO_2 186 
#define  WM8994_GPIO_3 185 
#define  WM8994_GPIO_4 184 
#define  WM8994_GPIO_5 183 
#define  WM8994_GPIO_6 182 
#define  WM8994_GPIO_8 181 
#define  WM8994_GPIO_9 180 
#define  WM8994_HPOUT2_MIXER 179 
#define  WM8994_HPOUT2_VOLUME 178 
#define  WM8994_INPUT_MIXER_1 177 
#define  WM8994_INPUT_MIXER_2 176 
#define  WM8994_INPUT_MIXER_3 175 
#define  WM8994_INPUT_MIXER_4 174 
#define  WM8994_INPUT_MIXER_5 173 
#define  WM8994_INPUT_MIXER_6 172 
#define  WM8994_INTERRUPT_CONTROL 171 
#define  WM8994_INTERRUPT_RAW_STATUS_2 170 
#define  WM8994_INTERRUPT_STATUS_1 169 
#define  WM8994_INTERRUPT_STATUS_1_MASK 168 
#define  WM8994_INTERRUPT_STATUS_2 167 
#define  WM8994_INTERRUPT_STATUS_2_MASK 166 
#define  WM8994_IRQ_DEBOUNCE 165 
#define  WM8994_LDO_1 164 
#define  WM8994_LDO_2 163 
#define  WM8994_LEFT_LINE_INPUT_1_2_VOLUME 162 
#define  WM8994_LEFT_LINE_INPUT_3_4_VOLUME 161 
#define  WM8994_LEFT_OPGA_VOLUME 160 
#define  WM8994_LEFT_OUTPUT_VOLUME 159 
#define  WM8994_LINE_MIXER_1 158 
#define  WM8994_LINE_MIXER_2 157 
#define  WM8994_LINE_OUTPUTS_VOLUME 156 
#define  WM8994_OUTPUT_MIXER_1 155 
#define  WM8994_OUTPUT_MIXER_2 154 
#define  WM8994_OUTPUT_MIXER_3 153 
#define  WM8994_OUTPUT_MIXER_4 152 
#define  WM8994_OUTPUT_MIXER_5 151 
#define  WM8994_OUTPUT_MIXER_6 150 
#define  WM8994_OVERSAMPLING 149 
#define  WM8994_POWER_MANAGEMENT_1 148 
#define  WM8994_POWER_MANAGEMENT_2 147 
#define  WM8994_POWER_MANAGEMENT_3 146 
#define  WM8994_POWER_MANAGEMENT_4 145 
#define  WM8994_POWER_MANAGEMENT_5 144 
#define  WM8994_POWER_MANAGEMENT_6 143 
#define  WM8994_PULL_CONTROL_1 142 
#define  WM8994_PULL_CONTROL_2 141 
#define  WM8994_RATE_STATUS 140 
#define  WM8994_RIGHT_LINE_INPUT_1_2_VOLUME 139 
#define  WM8994_RIGHT_LINE_INPUT_3_4_VOLUME 138 
#define  WM8994_RIGHT_OPGA_VOLUME 137 
#define  WM8994_RIGHT_OUTPUT_VOLUME 136 
#define  WM8994_SIDETONE 135 
#define  WM8994_SOFTWARE_RESET 134 
#define  WM8994_SPEAKER_MIXER 133 
#define  WM8994_SPEAKER_VOLUME_LEFT 132 
#define  WM8994_SPEAKER_VOLUME_RIGHT 131 
#define  WM8994_SPKMIXL_ATTENUATION 130 
#define  WM8994_SPKMIXR_ATTENUATION 129 
#define  WM8994_SPKOUT_MIXERS 128 

__attribute__((used)) static bool wm1811_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8994_SOFTWARE_RESET:
	case WM8994_POWER_MANAGEMENT_1:
	case WM8994_POWER_MANAGEMENT_2:
	case WM8994_POWER_MANAGEMENT_3:
	case WM8994_POWER_MANAGEMENT_4:
	case WM8994_POWER_MANAGEMENT_5:
	case WM8994_POWER_MANAGEMENT_6:
	case WM8994_INPUT_MIXER_1:
	case WM8994_LEFT_LINE_INPUT_1_2_VOLUME:
	case WM8994_LEFT_LINE_INPUT_3_4_VOLUME:
	case WM8994_RIGHT_LINE_INPUT_1_2_VOLUME:
	case WM8994_RIGHT_LINE_INPUT_3_4_VOLUME:
	case WM8994_LEFT_OUTPUT_VOLUME:
	case WM8994_RIGHT_OUTPUT_VOLUME:
	case WM8994_LINE_OUTPUTS_VOLUME:
	case WM8994_HPOUT2_VOLUME:
	case WM8994_LEFT_OPGA_VOLUME:
	case WM8994_RIGHT_OPGA_VOLUME:
	case WM8994_SPKMIXL_ATTENUATION:
	case WM8994_SPKMIXR_ATTENUATION:
	case WM8994_SPKOUT_MIXERS:
	case WM8994_CLASSD:
	case WM8994_SPEAKER_VOLUME_LEFT:
	case WM8994_SPEAKER_VOLUME_RIGHT:
	case WM8994_INPUT_MIXER_2:
	case WM8994_INPUT_MIXER_3:
	case WM8994_INPUT_MIXER_4:
	case WM8994_INPUT_MIXER_5:
	case WM8994_INPUT_MIXER_6:
	case WM8994_OUTPUT_MIXER_1:
	case WM8994_OUTPUT_MIXER_2:
	case WM8994_OUTPUT_MIXER_3:
	case WM8994_OUTPUT_MIXER_4:
	case WM8994_OUTPUT_MIXER_5:
	case WM8994_OUTPUT_MIXER_6:
	case WM8994_HPOUT2_MIXER:
	case WM8994_LINE_MIXER_1:
	case WM8994_LINE_MIXER_2:
	case WM8994_SPEAKER_MIXER:
	case WM8994_ADDITIONAL_CONTROL:
	case WM8994_ANTIPOP_1:
	case WM8994_ANTIPOP_2:
	case WM8994_LDO_1:
	case WM8994_LDO_2:
	case WM8958_MICBIAS1:
	case WM8958_MICBIAS2:
	case WM8994_CHARGE_PUMP_1:
	case WM8958_CHARGE_PUMP_2:
	case WM8994_CLASS_W_1:
	case WM8994_DC_SERVO_1:
	case WM8994_DC_SERVO_2:
	case WM8994_DC_SERVO_READBACK:
	case WM8994_DC_SERVO_4:
	case WM8994_DC_SERVO_4E:
	case WM8994_ANALOGUE_HP_1:
	case WM8958_MIC_DETECT_1:
	case WM8958_MIC_DETECT_2:
	case WM8958_MIC_DETECT_3:
	case WM8994_CHIP_REVISION:
	case WM8994_CONTROL_INTERFACE:
	case WM8994_AIF1_CLOCKING_1:
	case WM8994_AIF1_CLOCKING_2:
	case WM8994_AIF2_CLOCKING_1:
	case WM8994_AIF2_CLOCKING_2:
	case WM8994_CLOCKING_1:
	case WM8994_CLOCKING_2:
	case WM8994_AIF1_RATE:
	case WM8994_AIF2_RATE:
	case WM8994_RATE_STATUS:
	case WM8994_FLL1_CONTROL_1:
	case WM8994_FLL1_CONTROL_2:
	case WM8994_FLL1_CONTROL_3:
	case WM8994_FLL1_CONTROL_4:
	case WM8994_FLL1_CONTROL_5:
	case WM8958_FLL1_EFS_1:
	case WM8958_FLL1_EFS_2:
	case WM8994_FLL2_CONTROL_1:
	case WM8994_FLL2_CONTROL_2:
	case WM8994_FLL2_CONTROL_3:
	case WM8994_FLL2_CONTROL_4:
	case WM8994_FLL2_CONTROL_5:
	case WM8958_FLL2_EFS_1:
	case WM8958_FLL2_EFS_2:
	case WM8994_AIF1_CONTROL_1:
	case WM8994_AIF1_CONTROL_2:
	case WM8994_AIF1_MASTER_SLAVE:
	case WM8994_AIF1_BCLK:
	case WM8994_AIF1ADC_LRCLK:
	case WM8994_AIF1DAC_LRCLK:
	case WM8994_AIF1DAC_DATA:
	case WM8994_AIF1ADC_DATA:
	case WM8994_AIF2_CONTROL_1:
	case WM8994_AIF2_CONTROL_2:
	case WM8994_AIF2_MASTER_SLAVE:
	case WM8994_AIF2_BCLK:
	case WM8994_AIF2ADC_LRCLK:
	case WM8994_AIF2DAC_LRCLK:
	case WM8994_AIF2DAC_DATA:
	case WM8994_AIF2ADC_DATA:
	case WM1811_AIF2TX_CONTROL:
	case WM8958_AIF3_CONTROL_1:
	case WM8958_AIF3_CONTROL_2:
	case WM8958_AIF3DAC_DATA:
	case WM8958_AIF3ADC_DATA:
	case WM8994_AIF1_ADC1_LEFT_VOLUME:
	case WM8994_AIF1_ADC1_RIGHT_VOLUME:
	case WM8994_AIF1_DAC1_LEFT_VOLUME:
	case WM8994_AIF1_DAC1_RIGHT_VOLUME:
	case WM8994_AIF1_ADC1_FILTERS:
	case WM8994_AIF1_ADC2_FILTERS:
	case WM8994_AIF1_DAC1_FILTERS_1:
	case WM8994_AIF1_DAC1_FILTERS_2:
	case WM8994_AIF1_DAC2_FILTERS_1:
	case WM8994_AIF1_DAC2_FILTERS_2:
	case WM8958_AIF1_DAC1_NOISE_GATE:
	case WM8958_AIF1_DAC2_NOISE_GATE:
	case WM8994_AIF1_DRC1_1:
	case WM8994_AIF1_DRC1_2:
	case WM8994_AIF1_DRC1_3:
	case WM8994_AIF1_DRC1_4:
	case WM8994_AIF1_DRC1_5:
	case WM8994_AIF1_DRC2_1:
	case WM8994_AIF1_DRC2_2:
	case WM8994_AIF1_DRC2_3:
	case WM8994_AIF1_DRC2_4:
	case WM8994_AIF1_DRC2_5:
	case WM8994_AIF1_DAC1_EQ_GAINS_1:
	case WM8994_AIF1_DAC1_EQ_GAINS_2:
	case WM8994_AIF1_DAC1_EQ_BAND_1_A:
	case WM8994_AIF1_DAC1_EQ_BAND_1_B:
	case WM8994_AIF1_DAC1_EQ_BAND_1_PG:
	case WM8994_AIF1_DAC1_EQ_BAND_2_A:
	case WM8994_AIF1_DAC1_EQ_BAND_2_B:
	case WM8994_AIF1_DAC1_EQ_BAND_2_C:
	case WM8994_AIF1_DAC1_EQ_BAND_2_PG:
	case WM8994_AIF1_DAC1_EQ_BAND_3_A:
	case WM8994_AIF1_DAC1_EQ_BAND_3_B:
	case WM8994_AIF1_DAC1_EQ_BAND_3_C:
	case WM8994_AIF1_DAC1_EQ_BAND_3_PG:
	case WM8994_AIF1_DAC1_EQ_BAND_4_A:
	case WM8994_AIF1_DAC1_EQ_BAND_4_B:
	case WM8994_AIF1_DAC1_EQ_BAND_4_C:
	case WM8994_AIF1_DAC1_EQ_BAND_4_PG:
	case WM8994_AIF1_DAC1_EQ_BAND_5_A:
	case WM8994_AIF1_DAC1_EQ_BAND_5_B:
	case WM8994_AIF1_DAC1_EQ_BAND_5_PG:
	case WM8994_AIF1_DAC1_EQ_BAND_1_C:
	case WM8994_AIF1_DAC2_EQ_GAINS_1:
	case WM8994_AIF1_DAC2_EQ_GAINS_2:
	case WM8994_AIF1_DAC2_EQ_BAND_1_A:
	case WM8994_AIF1_DAC2_EQ_BAND_1_B:
	case WM8994_AIF1_DAC2_EQ_BAND_1_PG:
	case WM8994_AIF1_DAC2_EQ_BAND_2_A:
	case WM8994_AIF1_DAC2_EQ_BAND_2_B:
	case WM8994_AIF1_DAC2_EQ_BAND_2_C:
	case WM8994_AIF1_DAC2_EQ_BAND_2_PG:
	case WM8994_AIF1_DAC2_EQ_BAND_3_A:
	case WM8994_AIF1_DAC2_EQ_BAND_3_B:
	case WM8994_AIF1_DAC2_EQ_BAND_3_C:
	case WM8994_AIF1_DAC2_EQ_BAND_3_PG:
	case WM8994_AIF1_DAC2_EQ_BAND_4_A:
	case WM8994_AIF1_DAC2_EQ_BAND_4_B:
	case WM8994_AIF1_DAC2_EQ_BAND_4_C:
	case WM8994_AIF1_DAC2_EQ_BAND_4_PG:
	case WM8994_AIF1_DAC2_EQ_BAND_5_A:
	case WM8994_AIF1_DAC2_EQ_BAND_5_B:
	case WM8994_AIF1_DAC2_EQ_BAND_5_PG:
	case WM8994_AIF1_DAC2_EQ_BAND_1_C:
	case WM8994_AIF2_ADC_LEFT_VOLUME:
	case WM8994_AIF2_ADC_RIGHT_VOLUME:
	case WM8994_AIF2_DAC_LEFT_VOLUME:
	case WM8994_AIF2_DAC_RIGHT_VOLUME:
	case WM8994_AIF2_ADC_FILTERS:
	case WM8994_AIF2_DAC_FILTERS_1:
	case WM8994_AIF2_DAC_FILTERS_2:
	case WM8958_AIF2_DAC_NOISE_GATE:
	case WM8994_AIF2_DRC_1:
	case WM8994_AIF2_DRC_2:
	case WM8994_AIF2_DRC_3:
	case WM8994_AIF2_DRC_4:
	case WM8994_AIF2_DRC_5:
	case WM8994_AIF2_EQ_GAINS_1:
	case WM8994_AIF2_EQ_GAINS_2:
	case WM8994_AIF2_EQ_BAND_1_A:
	case WM8994_AIF2_EQ_BAND_1_B:
	case WM8994_AIF2_EQ_BAND_1_PG:
	case WM8994_AIF2_EQ_BAND_2_A:
	case WM8994_AIF2_EQ_BAND_2_B:
	case WM8994_AIF2_EQ_BAND_2_C:
	case WM8994_AIF2_EQ_BAND_2_PG:
	case WM8994_AIF2_EQ_BAND_3_A:
	case WM8994_AIF2_EQ_BAND_3_B:
	case WM8994_AIF2_EQ_BAND_3_C:
	case WM8994_AIF2_EQ_BAND_3_PG:
	case WM8994_AIF2_EQ_BAND_4_A:
	case WM8994_AIF2_EQ_BAND_4_B:
	case WM8994_AIF2_EQ_BAND_4_C:
	case WM8994_AIF2_EQ_BAND_4_PG:
	case WM8994_AIF2_EQ_BAND_5_A:
	case WM8994_AIF2_EQ_BAND_5_B:
	case WM8994_AIF2_EQ_BAND_5_PG:
	case WM8994_AIF2_EQ_BAND_1_C:
	case WM8994_DAC1_MIXER_VOLUMES:
	case WM8994_DAC1_LEFT_MIXER_ROUTING:
	case WM8994_DAC1_RIGHT_MIXER_ROUTING:
	case WM8994_DAC2_MIXER_VOLUMES:
	case WM8994_DAC2_LEFT_MIXER_ROUTING:
	case WM8994_DAC2_RIGHT_MIXER_ROUTING:
	case WM8994_AIF1_ADC1_LEFT_MIXER_ROUTING:
	case WM8994_AIF1_ADC1_RIGHT_MIXER_ROUTING:
	case WM8994_AIF1_ADC2_LEFT_MIXER_ROUTING:
	case WM8994_AIF1_ADC2_RIGHT_MIXER_ROUTING:
	case WM8994_DAC1_LEFT_VOLUME:
	case WM8994_DAC1_RIGHT_VOLUME:
	case WM8994_DAC2_LEFT_VOLUME:
	case WM8994_DAC2_RIGHT_VOLUME:
	case WM8994_DAC_SOFTMUTE:
	case WM8994_OVERSAMPLING:
	case WM8994_SIDETONE:
	case WM8994_GPIO_1:
	case WM8994_GPIO_2:
	case WM8994_GPIO_3:
	case WM8994_GPIO_4:
	case WM8994_GPIO_5:
	case WM8994_GPIO_6:
	case WM8994_GPIO_8:
	case WM8994_GPIO_9:
	case WM8994_GPIO_10:
	case WM8994_GPIO_11:
	case WM8994_PULL_CONTROL_1:
	case WM8994_PULL_CONTROL_2:
	case WM8994_INTERRUPT_STATUS_1:
	case WM8994_INTERRUPT_STATUS_2:
	case WM8994_INTERRUPT_RAW_STATUS_2:
	case WM8994_INTERRUPT_STATUS_1_MASK:
	case WM8994_INTERRUPT_STATUS_2_MASK:
	case WM8994_INTERRUPT_CONTROL:
	case WM8994_IRQ_DEBOUNCE:
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

    // big-arr
    case 0:
    {
          unsigned int reg = 255;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm1811_readable_register(dev,reg);
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
