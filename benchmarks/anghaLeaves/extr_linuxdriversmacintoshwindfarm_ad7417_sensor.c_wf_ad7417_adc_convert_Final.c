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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct wf_ad7417_priv {TYPE_1__* mpu; } ;
typedef  int s32 ;
struct TYPE_2__ {int /*<<< orphan*/  bdiode; int /*<<< orphan*/  mdiode; } ;

/* Variables and functions */
 int ADC_12V_CURRENT_SCALE ; 
 int ADC_CPU_CURRENT_SCALE ; 
 int ADC_CPU_VOLTAGE_SCALE ; 

__attribute__((used)) static void wf_ad7417_adc_convert(struct wf_ad7417_priv *pv,
				  int chan, s32 raw, s32 *value)
{
	switch(chan) {
	case 1: /* Diode */
		*value = (raw * (s32)pv->mpu->mdiode +
			((s32)pv->mpu->bdiode << 12)) >> 2;
		break;
	case 2: /* 12v current */
		*value = raw * ADC_12V_CURRENT_SCALE;
		break;
	case 3: /* core voltage */
		*value = raw * ADC_CPU_VOLTAGE_SCALE;
		break;
	case 4: /* core current */
		*value = raw * ADC_CPU_CURRENT_SCALE;
		break;
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
          int chan = 100;
          int raw = 100;
          int _len_pv0 = 1;
          struct wf_ad7417_priv * pv = (struct wf_ad7417_priv *) malloc(_len_pv0*sizeof(struct wf_ad7417_priv));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
              int _len_pv__i0__mpu0 = 1;
          pv[_i0].mpu = (struct TYPE_2__ *) malloc(_len_pv__i0__mpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pv__i0__mpu0; _j0++) {
            pv[_i0].mpu->bdiode = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].mpu->mdiode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wf_ad7417_adc_convert(pv,chan,raw,value);
          for(int _aux = 0; _aux < _len_pv0; _aux++) {
          free(pv[_aux].mpu);
          }
          free(pv);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int chan = 255;
          int raw = 255;
          int _len_pv0 = 65025;
          struct wf_ad7417_priv * pv = (struct wf_ad7417_priv *) malloc(_len_pv0*sizeof(struct wf_ad7417_priv));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
              int _len_pv__i0__mpu0 = 1;
          pv[_i0].mpu = (struct TYPE_2__ *) malloc(_len_pv__i0__mpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pv__i0__mpu0; _j0++) {
            pv[_i0].mpu->bdiode = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].mpu->mdiode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wf_ad7417_adc_convert(pv,chan,raw,value);
          for(int _aux = 0; _aux < _len_pv0; _aux++) {
          free(pv[_aux].mpu);
          }
          free(pv);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int chan = 10;
          int raw = 10;
          int _len_pv0 = 100;
          struct wf_ad7417_priv * pv = (struct wf_ad7417_priv *) malloc(_len_pv0*sizeof(struct wf_ad7417_priv));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
              int _len_pv__i0__mpu0 = 1;
          pv[_i0].mpu = (struct TYPE_2__ *) malloc(_len_pv__i0__mpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pv__i0__mpu0; _j0++) {
            pv[_i0].mpu->bdiode = ((-2 * (next_i()%2)) + 1) * next_i();
        pv[_i0].mpu->mdiode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wf_ad7417_adc_convert(pv,chan,raw,value);
          for(int _aux = 0; _aux < _len_pv0; _aux++) {
          free(pv[_aux].mpu);
          }
          free(pv);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
