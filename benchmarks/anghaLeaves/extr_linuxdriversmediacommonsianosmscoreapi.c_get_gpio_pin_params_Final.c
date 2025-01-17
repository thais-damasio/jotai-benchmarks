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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static int get_gpio_pin_params(u32 pin_num, u32 *p_translatedpin_num,
		u32 *p_group_num, u32 *p_group_cfg) {

	*p_group_cfg = 1;

	if (pin_num <= 1)	{
		*p_translatedpin_num = 0;
		*p_group_num = 9;
		*p_group_cfg = 2;
	} else if (pin_num >= 2 && pin_num <= 6) {
		*p_translatedpin_num = 2;
		*p_group_num = 0;
		*p_group_cfg = 2;
	} else if (pin_num >= 7 && pin_num <= 11) {
		*p_translatedpin_num = 7;
		*p_group_num = 1;
	} else if (pin_num >= 12 && pin_num <= 15) {
		*p_translatedpin_num = 12;
		*p_group_num = 2;
		*p_group_cfg = 3;
	} else if (pin_num == 16) {
		*p_translatedpin_num = 16;
		*p_group_num = 23;
	} else if (pin_num >= 17 && pin_num <= 24) {
		*p_translatedpin_num = 17;
		*p_group_num = 3;
	} else if (pin_num == 25) {
		*p_translatedpin_num = 25;
		*p_group_num = 6;
	} else if (pin_num >= 26 && pin_num <= 28) {
		*p_translatedpin_num = 26;
		*p_group_num = 4;
	} else if (pin_num == 29) {
		*p_translatedpin_num = 29;
		*p_group_num = 5;
		*p_group_cfg = 2;
	} else if (pin_num == 30) {
		*p_translatedpin_num = 30;
		*p_group_num = 8;
	} else if (pin_num == 31) {
		*p_translatedpin_num = 31;
		*p_group_num = 17;
	} else
		return -1;

	*p_group_cfg <<= 24;

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

    // int-bounds
    case 0:
    {
          int pin_num = 100;
          int _len_p_translatedpin_num0 = 1;
          int * p_translatedpin_num = (int *) malloc(_len_p_translatedpin_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_translatedpin_num0; _i0++) {
            p_translatedpin_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_group_num0 = 1;
          int * p_group_num = (int *) malloc(_len_p_group_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_group_num0; _i0++) {
            p_group_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_group_cfg0 = 1;
          int * p_group_cfg = (int *) malloc(_len_p_group_cfg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_group_cfg0; _i0++) {
            p_group_cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_gpio_pin_params(pin_num,p_translatedpin_num,p_group_num,p_group_cfg);
          printf("%d\n", benchRet); 
          free(p_translatedpin_num);
          free(p_group_num);
          free(p_group_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
