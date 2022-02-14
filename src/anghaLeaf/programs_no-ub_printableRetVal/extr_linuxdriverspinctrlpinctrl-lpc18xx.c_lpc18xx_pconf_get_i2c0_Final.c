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
typedef  int u8 ;
typedef  int u32 ;
typedef  enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;

/* Variables and functions */
 int EINVAL ; 
 int ENOTSUPP ; 
 int LPC18XX_SCU_I2C0_EFP ; 
 int LPC18XX_SCU_I2C0_EHD ; 
 int LPC18XX_SCU_I2C0_EZI ; 
 int LPC18XX_SCU_I2C0_SCL_SHIFT ; 
 int LPC18XX_SCU_I2C0_SDA_SHIFT ; 
 int LPC18XX_SCU_I2C0_ZIF ; 
#define  PIN_CONFIG_INPUT_ENABLE 131 
#define  PIN_CONFIG_INPUT_SCHMITT 130 
#define  PIN_CONFIG_INPUT_SCHMITT_ENABLE 129 
#define  PIN_CONFIG_SLEW_RATE 128 
 unsigned int PIN_I2C0_SCL ; 

__attribute__((used)) static int lpc18xx_pconf_get_i2c0(enum pin_config_param param, int *arg, u32 reg,
				  unsigned pin)
{
	u8 shift;

	if (pin == PIN_I2C0_SCL)
		shift = LPC18XX_SCU_I2C0_SCL_SHIFT;
	else
		shift = LPC18XX_SCU_I2C0_SDA_SHIFT;

	switch (param) {
	case PIN_CONFIG_INPUT_ENABLE:
		if (reg & (LPC18XX_SCU_I2C0_EZI << shift))
			*arg = 1;
		else
			return -EINVAL;
		break;

	case PIN_CONFIG_SLEW_RATE:
		if (reg & (LPC18XX_SCU_I2C0_EHD << shift))
			*arg = 1;
		else
			*arg = 0;
		break;

	case PIN_CONFIG_INPUT_SCHMITT:
		if (reg & (LPC18XX_SCU_I2C0_EFP << shift))
			*arg = 3;
		else
			*arg = 50;
		break;

	case PIN_CONFIG_INPUT_SCHMITT_ENABLE:
		if (reg & (LPC18XX_SCU_I2C0_ZIF << shift))
			return -EINVAL;
		else
			*arg = 1;
		break;

	default:
		return -ENOTSUPP;
	}

	return 0;
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
          enum pin_config_param param = 0;
          int reg = 255;
          unsigned int pin = 255;
          int _len_arg0 = 65025;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc18xx_pconf_get_i2c0(param,arg,reg,pin);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
