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
#define  WM8961_ADCL_SIGNAL_PATH 182 
#define  WM8961_ADCR_SIGNAL_PATH 181 
#define  WM8961_ADC_DAC_CONTROL_1 180 
#define  WM8961_ADC_DAC_CONTROL_2 179 
#define  WM8961_ADDITIONAL_CONTROL_1 178 
#define  WM8961_ADDITIONAL_CONTROL_2 177 
#define  WM8961_ADDITIONAL_CONTROL_3 176 
#define  WM8961_ADDITIONAL_CONTROL_4 175 
#define  WM8961_ALC1 174 
#define  WM8961_ALC2 173 
#define  WM8961_ALC3 172 
#define  WM8961_ANALOGUE_HP_0 171 
#define  WM8961_ANALOGUE_HP_2 170 
#define  WM8961_ANALOGUE_PGA_BIAS 169 
#define  WM8961_ANTI_POP 168 
#define  WM8961_AUDIO_INTERFACE_0 167 
#define  WM8961_AUDIO_INTERFACE_1 166 
#define  WM8961_AUDIO_INTERFACE_2 165 
#define  WM8961_CHARGE_PUMP_1 164 
#define  WM8961_CHARGE_PUMP_B 163 
#define  WM8961_CLASS_D_CONTROL_1 162 
#define  WM8961_CLASS_D_CONTROL_2 161 
#define  WM8961_CLOCKING1 160 
#define  WM8961_CLOCKING2 159 
#define  WM8961_CLOCKING_3 158 
#define  WM8961_CLOCKING_4 157 
#define  WM8961_DC_SERVO_0 156 
#define  WM8961_DC_SERVO_1 155 
#define  WM8961_DC_SERVO_3 154 
#define  WM8961_DC_SERVO_5 153 
#define  WM8961_DSP_SIDETONE_0 152 
#define  WM8961_DSP_SIDETONE_1 151 
#define  WM8961_GENERAL_TEST_1 150 
#define  WM8961_LEFT_ADC_VOLUME 149 
#define  WM8961_LEFT_DAC_VOLUME 148 
#define  WM8961_LEFT_INPUT_VOLUME 147 
#define  WM8961_LOUT1_VOLUME 146 
#define  WM8961_LOUT2_VOLUME 145 
#define  WM8961_NOISE_GATE 144 
#define  WM8961_PWR_MGMT_1 143 
#define  WM8961_PWR_MGMT_2 142 
#define  WM8961_PWR_MGMT_3 141 
#define  WM8961_RIGHT_ADC_VOLUME 140 
#define  WM8961_RIGHT_DAC_VOLUME 139 
#define  WM8961_RIGHT_INPUT_VOLUME 138 
#define  WM8961_ROUT1_VOLUME 137 
#define  WM8961_ROUT2_VOLUME 136 
#define  WM8961_SOFTWARE_RESET 135 
#define  WM8961_WRITE_SEQUENCER_1 134 
#define  WM8961_WRITE_SEQUENCER_2 133 
#define  WM8961_WRITE_SEQUENCER_3 132 
#define  WM8961_WRITE_SEQUENCER_4 131 
#define  WM8961_WRITE_SEQUENCER_5 130 
#define  WM8961_WRITE_SEQUENCER_6 129 
#define  WM8961_WRITE_SEQUENCER_7 128 

__attribute__((used)) static bool wm8961_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8961_LEFT_INPUT_VOLUME:
	case WM8961_RIGHT_INPUT_VOLUME:
	case WM8961_LOUT1_VOLUME:
	case WM8961_ROUT1_VOLUME:
	case WM8961_CLOCKING1:
	case WM8961_ADC_DAC_CONTROL_1:
	case WM8961_ADC_DAC_CONTROL_2:
	case WM8961_AUDIO_INTERFACE_0:
	case WM8961_CLOCKING2:
	case WM8961_AUDIO_INTERFACE_1:
	case WM8961_LEFT_DAC_VOLUME:
	case WM8961_RIGHT_DAC_VOLUME:
	case WM8961_AUDIO_INTERFACE_2:
	case WM8961_SOFTWARE_RESET:
	case WM8961_ALC1:
	case WM8961_ALC2:
	case WM8961_ALC3:
	case WM8961_NOISE_GATE:
	case WM8961_LEFT_ADC_VOLUME:
	case WM8961_RIGHT_ADC_VOLUME:
	case WM8961_ADDITIONAL_CONTROL_1:
	case WM8961_ADDITIONAL_CONTROL_2:
	case WM8961_PWR_MGMT_1:
	case WM8961_PWR_MGMT_2:
	case WM8961_ADDITIONAL_CONTROL_3:
	case WM8961_ANTI_POP:
	case WM8961_CLOCKING_3:
	case WM8961_ADCL_SIGNAL_PATH:
	case WM8961_ADCR_SIGNAL_PATH:
	case WM8961_LOUT2_VOLUME:
	case WM8961_ROUT2_VOLUME:
	case WM8961_PWR_MGMT_3:
	case WM8961_ADDITIONAL_CONTROL_4:
	case WM8961_CLASS_D_CONTROL_1:
	case WM8961_CLASS_D_CONTROL_2:
	case WM8961_CLOCKING_4:
	case WM8961_DSP_SIDETONE_0:
	case WM8961_DSP_SIDETONE_1:
	case WM8961_DC_SERVO_0:
	case WM8961_DC_SERVO_1:
	case WM8961_DC_SERVO_3:
	case WM8961_DC_SERVO_5:
	case WM8961_ANALOGUE_PGA_BIAS:
	case WM8961_ANALOGUE_HP_0:
	case WM8961_ANALOGUE_HP_2:
	case WM8961_CHARGE_PUMP_1:
	case WM8961_CHARGE_PUMP_B:
	case WM8961_WRITE_SEQUENCER_1:
	case WM8961_WRITE_SEQUENCER_2:
	case WM8961_WRITE_SEQUENCER_3:
	case WM8961_WRITE_SEQUENCER_4:
	case WM8961_WRITE_SEQUENCER_5:
	case WM8961_WRITE_SEQUENCER_6:
	case WM8961_WRITE_SEQUENCER_7:
	case WM8961_GENERAL_TEST_1:
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
          int benchRet = wm8961_readable(dev,reg);
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
          int benchRet = wm8961_readable(dev,reg);
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
          int benchRet = wm8961_readable(dev,reg);
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
