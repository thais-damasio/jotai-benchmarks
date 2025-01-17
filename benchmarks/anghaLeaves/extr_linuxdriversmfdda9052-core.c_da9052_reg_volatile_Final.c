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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
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
#define  DA9052_ADCIN4_RES_REG 160 
#define  DA9052_ADCIN5_RES_REG 159 
#define  DA9052_ADCIN6_RES_REG 158 
#define  DA9052_ADC_RES_H_REG 157 
#define  DA9052_ADC_RES_L_REG 156 
#define  DA9052_ALARM_MI_REG 155 
#define  DA9052_CHG_TIME_REG 154 
#define  DA9052_CONTROL_B_REG 153 
#define  DA9052_CONTROL_D_REG 152 
#define  DA9052_COUNT_D_REG 151 
#define  DA9052_COUNT_H_REG 150 
#define  DA9052_COUNT_MI_REG 149 
#define  DA9052_COUNT_MO_REG 148 
#define  DA9052_COUNT_S_REG 147 
#define  DA9052_COUNT_Y_REG 146 
#define  DA9052_EVENT_A_REG 145 
#define  DA9052_EVENT_B_REG 144 
#define  DA9052_EVENT_C_REG 143 
#define  DA9052_EVENT_D_REG 142 
#define  DA9052_FAULTLOG_REG 141 
#define  DA9052_ICHG_AV_REG 140 
#define  DA9052_STATUS_A_REG 139 
#define  DA9052_STATUS_B_REG 138 
#define  DA9052_STATUS_C_REG 137 
#define  DA9052_STATUS_D_REG 136 
#define  DA9052_SUPPLY_REG 135 
#define  DA9052_TBAT_RES_REG 134 
#define  DA9052_TJUNC_RES_REG 133 
#define  DA9052_TSI_LSB_REG 132 
#define  DA9052_TSI_X_MSB_REG 131 
#define  DA9052_TSI_Y_MSB_REG 130 
#define  DA9052_TSI_Z_MSB_REG 129 
#define  DA9052_VDD_RES_REG 128 

__attribute__((used)) static bool da9052_reg_volatile(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case DA9052_STATUS_A_REG:
	case DA9052_STATUS_B_REG:
	case DA9052_STATUS_C_REG:
	case DA9052_STATUS_D_REG:
	case DA9052_EVENT_A_REG:
	case DA9052_EVENT_B_REG:
	case DA9052_EVENT_C_REG:
	case DA9052_EVENT_D_REG:
	case DA9052_CONTROL_B_REG:
	case DA9052_CONTROL_D_REG:
	case DA9052_SUPPLY_REG:
	case DA9052_FAULTLOG_REG:
	case DA9052_CHG_TIME_REG:
	case DA9052_ADC_RES_L_REG:
	case DA9052_ADC_RES_H_REG:
	case DA9052_VDD_RES_REG:
	case DA9052_ICHG_AV_REG:
	case DA9052_TBAT_RES_REG:
	case DA9052_ADCIN4_RES_REG:
	case DA9052_ADCIN5_RES_REG:
	case DA9052_ADCIN6_RES_REG:
	case DA9052_TJUNC_RES_REG:
	case DA9052_TSI_X_MSB_REG:
	case DA9052_TSI_Y_MSB_REG:
	case DA9052_TSI_LSB_REG:
	case DA9052_TSI_Z_MSB_REG:
	case DA9052_COUNT_S_REG:
	case DA9052_COUNT_MI_REG:
	case DA9052_COUNT_H_REG:
	case DA9052_COUNT_D_REG:
	case DA9052_COUNT_MO_REG:
	case DA9052_COUNT_Y_REG:
	case DA9052_ALARM_MI_REG:
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
          int benchRet = da9052_reg_volatile(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = da9052_reg_volatile(dev,reg);
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
