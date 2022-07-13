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
#define  WM831X_AUXADC_CONTROL 297 
#define  WM831X_AUXADC_DATA 296 
#define  WM831X_AUXADC_SOURCE 295 
#define  WM831X_BACKUP_CHARGER_CONTROL 294 
#define  WM831X_CHARGER_CONTROL_1 293 
#define  WM831X_CHARGER_CONTROL_2 292 
#define  WM831X_CHARGER_STATUS 291 
#define  WM831X_CLOCK_CONTROL_1 290 
#define  WM831X_CLOCK_CONTROL_2 289 
#define  WM831X_COMPARATOR_1 288 
#define  WM831X_COMPARATOR_2 287 
#define  WM831X_COMPARATOR_3 286 
#define  WM831X_COMPARATOR_4 285 
#define  WM831X_COMPARATOR_CONTROL 284 
#define  WM831X_CONTROL_INTERFACE 283 
#define  WM831X_CURRENT_SINK_1 282 
#define  WM831X_CURRENT_SINK_2 281 
#define  WM831X_CUSTOMER_OTP_ID 280 
#define  WM831X_DBE_CHECK_DATA 279 
#define  WM831X_DC1_CONTROL_1 278 
#define  WM831X_DC1_CONTROL_2 277 
#define  WM831X_DC1_DVS_CONTROL 276 
#define  WM831X_DC1_ON_CONFIG 275 
#define  WM831X_DC1_OTP_CONTROL 274 
#define  WM831X_DC1_SLEEP_CONTROL 273 
#define  WM831X_DC2_CONTROL_1 272 
#define  WM831X_DC2_CONTROL_2 271 
#define  WM831X_DC2_DVS_CONTROL 270 
#define  WM831X_DC2_ON_CONFIG 269 
#define  WM831X_DC2_OTP_CONTROL 268 
#define  WM831X_DC2_SLEEP_CONTROL 267 
#define  WM831X_DC3_CONTROL_1 266 
#define  WM831X_DC3_CONTROL_2 265 
#define  WM831X_DC3_ON_CONFIG 264 
#define  WM831X_DC3_OTP_CONTROL 263 
#define  WM831X_DC3_SLEEP_CONTROL 262 
#define  WM831X_DC4_CONTROL 261 
#define  WM831X_DC4_SLEEP_CONTROL 260 
#define  WM831X_DCDC_ENABLE 259 
#define  WM831X_DCDC_STATUS 258 
#define  WM831X_DCDC_UV_STATUS 257 
#define  WM831X_EPE1_CONTROL 256 
#define  WM831X_EPE2_CONTROL 255 
#define  WM831X_FACTORY_OTP_1 254 
#define  WM831X_FACTORY_OTP_2 253 
#define  WM831X_FACTORY_OTP_3 252 
#define  WM831X_FACTORY_OTP_4 251 
#define  WM831X_FACTORY_OTP_5 250 
#define  WM831X_FACTORY_OTP_ID 249 
#define  WM831X_FLL_CONTROL_1 248 
#define  WM831X_FLL_CONTROL_2 247 
#define  WM831X_FLL_CONTROL_3 246 
#define  WM831X_FLL_CONTROL_4 245 
#define  WM831X_FLL_CONTROL_5 244 
#define  WM831X_GPIO10_CONTROL 243 
#define  WM831X_GPIO11_CONTROL 242 
#define  WM831X_GPIO12_CONTROL 241 
#define  WM831X_GPIO13_CONTROL 240 
#define  WM831X_GPIO14_CONTROL 239 
#define  WM831X_GPIO15_CONTROL 238 
#define  WM831X_GPIO16_CONTROL 237 
#define  WM831X_GPIO1_CONTROL 236 
#define  WM831X_GPIO1_OTP_CONTROL 235 
#define  WM831X_GPIO2_CONTROL 234 
#define  WM831X_GPIO2_OTP_CONTROL 233 
#define  WM831X_GPIO3_CONTROL 232 
#define  WM831X_GPIO3_OTP_CONTROL 231 
#define  WM831X_GPIO4_CONTROL 230 
#define  WM831X_GPIO4_OTP_CONTROL 229 
#define  WM831X_GPIO5_CONTROL 228 
#define  WM831X_GPIO5_OTP_CONTROL 227 
#define  WM831X_GPIO6_CONTROL 226 
#define  WM831X_GPIO6_OTP_CONTROL 225 
#define  WM831X_GPIO7_CONTROL 224 
#define  WM831X_GPIO8_CONTROL 223 
#define  WM831X_GPIO9_CONTROL 222 
#define  WM831X_GPIO_LEVEL 221 
#define  WM831X_INTERRUPT_STATUS_1 220 
#define  WM831X_INTERRUPT_STATUS_1_MASK 219 
#define  WM831X_INTERRUPT_STATUS_2 218 
#define  WM831X_INTERRUPT_STATUS_2_MASK 217 
#define  WM831X_INTERRUPT_STATUS_3 216 
#define  WM831X_INTERRUPT_STATUS_3_MASK 215 
#define  WM831X_INTERRUPT_STATUS_4 214 
#define  WM831X_INTERRUPT_STATUS_4_MASK 213 
#define  WM831X_INTERRUPT_STATUS_5 212 
#define  WM831X_INTERRUPT_STATUS_5_MASK 211 
#define  WM831X_IRQ_CONFIG 210 
#define  WM831X_LDO10_CONTROL 209 
#define  WM831X_LDO10_ON_CONTROL 208 
#define  WM831X_LDO10_SLEEP_CONTROL 207 
#define  WM831X_LDO11_EPE_CONTROL 206 
#define  WM831X_LDO11_ON_CONTROL 205 
#define  WM831X_LDO11_SLEEP_CONTROL 204 
#define  WM831X_LDO1_2_OTP_CONTROL 203 
#define  WM831X_LDO1_CONTROL 202 
#define  WM831X_LDO1_ON_CONTROL 201 
#define  WM831X_LDO1_SLEEP_CONTROL 200 
#define  WM831X_LDO2_CONTROL 199 
#define  WM831X_LDO2_ON_CONTROL 198 
#define  WM831X_LDO2_SLEEP_CONTROL 197 
#define  WM831X_LDO3_4_OTP_CONTROL 196 
#define  WM831X_LDO3_CONTROL 195 
#define  WM831X_LDO3_ON_CONTROL 194 
#define  WM831X_LDO3_SLEEP_CONTROL 193 
#define  WM831X_LDO4_CONTROL 192 
#define  WM831X_LDO4_ON_CONTROL 191 
#define  WM831X_LDO4_SLEEP_CONTROL 190 
#define  WM831X_LDO5_6_OTP_CONTROL 189 
#define  WM831X_LDO5_CONTROL 188 
#define  WM831X_LDO5_ON_CONTROL 187 
#define  WM831X_LDO5_SLEEP_CONTROL 186 
#define  WM831X_LDO6_CONTROL 185 
#define  WM831X_LDO6_ON_CONTROL 184 
#define  WM831X_LDO6_SLEEP_CONTROL 183 
#define  WM831X_LDO7_8_OTP_CONTROL 182 
#define  WM831X_LDO7_CONTROL 181 
#define  WM831X_LDO7_ON_CONTROL 180 
#define  WM831X_LDO7_SLEEP_CONTROL 179 
#define  WM831X_LDO8_CONTROL 178 
#define  WM831X_LDO8_ON_CONTROL 177 
#define  WM831X_LDO8_SLEEP_CONTROL 176 
#define  WM831X_LDO9_10_OTP_CONTROL 175 
#define  WM831X_LDO9_CONTROL 174 
#define  WM831X_LDO9_ON_CONTROL 173 
#define  WM831X_LDO9_SLEEP_CONTROL 172 
#define  WM831X_LDO_ENABLE 171 
#define  WM831X_LDO_STATUS 170 
#define  WM831X_LDO_UV_STATUS 169 
#define  WM831X_OFF_SOURCE 168 
#define  WM831X_ON_PIN_CONTROL 167 
#define  WM831X_ON_SOURCE 166 
#define  WM831X_OTP_CONTROL 165 
#define  WM831X_PARENT_ID 164 
#define  WM831X_POWER_GOOD_SOURCE_1 163 
#define  WM831X_POWER_GOOD_SOURCE_2 162 
#define  WM831X_POWER_STATE 161 
#define  WM831X_RESET_CONTROL 160 
#define  WM831X_RESET_ID 159 
#define  WM831X_REVISION 158 
#define  WM831X_RTC_ALARM_1 157 
#define  WM831X_RTC_ALARM_2 156 
#define  WM831X_RTC_CONTROL 155 
#define  WM831X_RTC_TIME_1 154 
#define  WM831X_RTC_TIME_2 153 
#define  WM831X_RTC_TRIM 152 
#define  WM831X_RTC_WRITE_COUNTER 151 
#define  WM831X_SECURITY_KEY 150 
#define  WM831X_SOFTWARE_SCRATCH 149 
#define  WM831X_STATUS_LED_1 148 
#define  WM831X_STATUS_LED_2 147 
#define  WM831X_SYSTEM_INTERRUPTS 146 
#define  WM831X_SYSTEM_INTERRUPTS_MASK 145 
#define  WM831X_SYSTEM_STATUS 144 
#define  WM831X_SYSVDD_CONTROL 143 
#define  WM831X_THERMAL_MONITORING 142 
#define  WM831X_TOUCH_CONTROL_1 141 
#define  WM831X_TOUCH_CONTROL_2 140 
#define  WM831X_TOUCH_DATA_X 139 
#define  WM831X_TOUCH_DATA_Y 138 
#define  WM831X_TOUCH_DATA_Z 137 
#define  WM831X_UNIQUE_ID_1 136 
#define  WM831X_UNIQUE_ID_2 135 
#define  WM831X_UNIQUE_ID_3 134 
#define  WM831X_UNIQUE_ID_4 133 
#define  WM831X_UNIQUE_ID_5 132 
#define  WM831X_UNIQUE_ID_6 131 
#define  WM831X_UNIQUE_ID_7 130 
#define  WM831X_UNIQUE_ID_8 129 
#define  WM831X_WATCHDOG 128 

__attribute__((used)) static bool wm831x_reg_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM831X_RESET_ID:
	case WM831X_REVISION:
	case WM831X_PARENT_ID:
	case WM831X_SYSVDD_CONTROL:
	case WM831X_THERMAL_MONITORING:
	case WM831X_POWER_STATE:
	case WM831X_WATCHDOG:
	case WM831X_ON_PIN_CONTROL:
	case WM831X_RESET_CONTROL:
	case WM831X_CONTROL_INTERFACE:
	case WM831X_SECURITY_KEY:
	case WM831X_SOFTWARE_SCRATCH:
	case WM831X_OTP_CONTROL:
	case WM831X_GPIO_LEVEL:
	case WM831X_SYSTEM_STATUS:
	case WM831X_ON_SOURCE:
	case WM831X_OFF_SOURCE:
	case WM831X_SYSTEM_INTERRUPTS:
	case WM831X_INTERRUPT_STATUS_1:
	case WM831X_INTERRUPT_STATUS_2:
	case WM831X_INTERRUPT_STATUS_3:
	case WM831X_INTERRUPT_STATUS_4:
	case WM831X_INTERRUPT_STATUS_5:
	case WM831X_IRQ_CONFIG:
	case WM831X_SYSTEM_INTERRUPTS_MASK:
	case WM831X_INTERRUPT_STATUS_1_MASK:
	case WM831X_INTERRUPT_STATUS_2_MASK:
	case WM831X_INTERRUPT_STATUS_3_MASK:
	case WM831X_INTERRUPT_STATUS_4_MASK:
	case WM831X_INTERRUPT_STATUS_5_MASK:
	case WM831X_RTC_WRITE_COUNTER:
	case WM831X_RTC_TIME_1:
	case WM831X_RTC_TIME_2:
	case WM831X_RTC_ALARM_1:
	case WM831X_RTC_ALARM_2:
	case WM831X_RTC_CONTROL:
	case WM831X_RTC_TRIM:
	case WM831X_TOUCH_CONTROL_1:
	case WM831X_TOUCH_CONTROL_2:
	case WM831X_TOUCH_DATA_X:
	case WM831X_TOUCH_DATA_Y:
	case WM831X_TOUCH_DATA_Z:
	case WM831X_AUXADC_DATA:
	case WM831X_AUXADC_CONTROL:
	case WM831X_AUXADC_SOURCE:
	case WM831X_COMPARATOR_CONTROL:
	case WM831X_COMPARATOR_1:
	case WM831X_COMPARATOR_2:
	case WM831X_COMPARATOR_3:
	case WM831X_COMPARATOR_4:
	case WM831X_GPIO1_CONTROL:
	case WM831X_GPIO2_CONTROL:
	case WM831X_GPIO3_CONTROL:
	case WM831X_GPIO4_CONTROL:
	case WM831X_GPIO5_CONTROL:
	case WM831X_GPIO6_CONTROL:
	case WM831X_GPIO7_CONTROL:
	case WM831X_GPIO8_CONTROL:
	case WM831X_GPIO9_CONTROL:
	case WM831X_GPIO10_CONTROL:
	case WM831X_GPIO11_CONTROL:
	case WM831X_GPIO12_CONTROL:
	case WM831X_GPIO13_CONTROL:
	case WM831X_GPIO14_CONTROL:
	case WM831X_GPIO15_CONTROL:
	case WM831X_GPIO16_CONTROL:
	case WM831X_CHARGER_CONTROL_1:
	case WM831X_CHARGER_CONTROL_2:
	case WM831X_CHARGER_STATUS:
	case WM831X_BACKUP_CHARGER_CONTROL:
	case WM831X_STATUS_LED_1:
	case WM831X_STATUS_LED_2:
	case WM831X_CURRENT_SINK_1:
	case WM831X_CURRENT_SINK_2:
	case WM831X_DCDC_ENABLE:
	case WM831X_LDO_ENABLE:
	case WM831X_DCDC_STATUS:
	case WM831X_LDO_STATUS:
	case WM831X_DCDC_UV_STATUS:
	case WM831X_LDO_UV_STATUS:
	case WM831X_DC1_CONTROL_1:
	case WM831X_DC1_CONTROL_2:
	case WM831X_DC1_ON_CONFIG:
	case WM831X_DC1_SLEEP_CONTROL:
	case WM831X_DC1_DVS_CONTROL:
	case WM831X_DC2_CONTROL_1:
	case WM831X_DC2_CONTROL_2:
	case WM831X_DC2_ON_CONFIG:
	case WM831X_DC2_SLEEP_CONTROL:
	case WM831X_DC2_DVS_CONTROL:
	case WM831X_DC3_CONTROL_1:
	case WM831X_DC3_CONTROL_2:
	case WM831X_DC3_ON_CONFIG:
	case WM831X_DC3_SLEEP_CONTROL:
	case WM831X_DC4_CONTROL:
	case WM831X_DC4_SLEEP_CONTROL:
	case WM831X_EPE1_CONTROL:
	case WM831X_EPE2_CONTROL:
	case WM831X_LDO1_CONTROL:
	case WM831X_LDO1_ON_CONTROL:
	case WM831X_LDO1_SLEEP_CONTROL:
	case WM831X_LDO2_CONTROL:
	case WM831X_LDO2_ON_CONTROL:
	case WM831X_LDO2_SLEEP_CONTROL:
	case WM831X_LDO3_CONTROL:
	case WM831X_LDO3_ON_CONTROL:
	case WM831X_LDO3_SLEEP_CONTROL:
	case WM831X_LDO4_CONTROL:
	case WM831X_LDO4_ON_CONTROL:
	case WM831X_LDO4_SLEEP_CONTROL:
	case WM831X_LDO5_CONTROL:
	case WM831X_LDO5_ON_CONTROL:
	case WM831X_LDO5_SLEEP_CONTROL:
	case WM831X_LDO6_CONTROL:
	case WM831X_LDO6_ON_CONTROL:
	case WM831X_LDO6_SLEEP_CONTROL:
	case WM831X_LDO7_CONTROL:
	case WM831X_LDO7_ON_CONTROL:
	case WM831X_LDO7_SLEEP_CONTROL:
	case WM831X_LDO8_CONTROL:
	case WM831X_LDO8_ON_CONTROL:
	case WM831X_LDO8_SLEEP_CONTROL:
	case WM831X_LDO9_CONTROL:
	case WM831X_LDO9_ON_CONTROL:
	case WM831X_LDO9_SLEEP_CONTROL:
	case WM831X_LDO10_CONTROL:
	case WM831X_LDO10_ON_CONTROL:
	case WM831X_LDO10_SLEEP_CONTROL:
	case WM831X_LDO11_ON_CONTROL:
	case WM831X_LDO11_SLEEP_CONTROL:
	case WM831X_POWER_GOOD_SOURCE_1:
	case WM831X_POWER_GOOD_SOURCE_2:
	case WM831X_CLOCK_CONTROL_1:
	case WM831X_CLOCK_CONTROL_2:
	case WM831X_FLL_CONTROL_1:
	case WM831X_FLL_CONTROL_2:
	case WM831X_FLL_CONTROL_3:
	case WM831X_FLL_CONTROL_4:
	case WM831X_FLL_CONTROL_5:
	case WM831X_UNIQUE_ID_1:
	case WM831X_UNIQUE_ID_2:
	case WM831X_UNIQUE_ID_3:
	case WM831X_UNIQUE_ID_4:
	case WM831X_UNIQUE_ID_5:
	case WM831X_UNIQUE_ID_6:
	case WM831X_UNIQUE_ID_7:
	case WM831X_UNIQUE_ID_8:
	case WM831X_FACTORY_OTP_ID:
	case WM831X_FACTORY_OTP_1:
	case WM831X_FACTORY_OTP_2:
	case WM831X_FACTORY_OTP_3:
	case WM831X_FACTORY_OTP_4:
	case WM831X_FACTORY_OTP_5:
	case WM831X_CUSTOMER_OTP_ID:
	case WM831X_DC1_OTP_CONTROL:
	case WM831X_DC2_OTP_CONTROL:
	case WM831X_DC3_OTP_CONTROL:
	case WM831X_LDO1_2_OTP_CONTROL:
	case WM831X_LDO3_4_OTP_CONTROL:
	case WM831X_LDO5_6_OTP_CONTROL:
	case WM831X_LDO7_8_OTP_CONTROL:
	case WM831X_LDO9_10_OTP_CONTROL:
	case WM831X_LDO11_EPE_CONTROL:
	case WM831X_GPIO1_OTP_CONTROL:
	case WM831X_GPIO2_OTP_CONTROL:
	case WM831X_GPIO3_OTP_CONTROL:
	case WM831X_GPIO4_OTP_CONTROL:
	case WM831X_GPIO5_OTP_CONTROL:
	case WM831X_GPIO6_OTP_CONTROL:
	case WM831X_DBE_CHECK_DATA:
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
          int benchRet = wm831x_reg_readable(dev,reg);
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
          int benchRet = wm831x_reg_readable(dev,reg);
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
          int benchRet = wm831x_reg_readable(dev,reg);
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
