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
struct fintek_8250 {int pid; } ;

/* Variables and functions */
#define  CHIP_ID_F81216 132 
#define  CHIP_ID_F81216AD 131 
#define  CHIP_ID_F81216H 130 
#define  CHIP_ID_F81865 129 
#define  CHIP_ID_F81866 128 
 int ENODEV ; 
 int F81216_LDN_HIGH ; 
 int F81216_LDN_LOW ; 
 int F81866_LDN_HIGH ; 
 int F81866_LDN_LOW ; 

__attribute__((used)) static int fintek_8250_get_ldn_range(struct fintek_8250 *pdata, int *min,
				     int *max)
{
	switch (pdata->pid) {
	case CHIP_ID_F81865:
	case CHIP_ID_F81866:
		*min = F81866_LDN_LOW;
		*max = F81866_LDN_HIGH;
		return 0;

	case CHIP_ID_F81216AD:
	case CHIP_ID_F81216H:
	case CHIP_ID_F81216:
		*min = F81216_LDN_LOW;
		*max = F81216_LDN_HIGH;
		return 0;
	}

	return -ENODEV;
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
          int _len_pdata0 = 1;
          struct fintek_8250 * pdata = (struct fintek_8250 *) malloc(_len_pdata0*sizeof(struct fintek_8250));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 1;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 1;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fintek_8250_get_ldn_range(pdata,min,max);
          printf("%d\n", benchRet); 
          free(pdata);
          free(min);
          free(max);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdata0 = 65025;
          struct fintek_8250 * pdata = (struct fintek_8250 *) malloc(_len_pdata0*sizeof(struct fintek_8250));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 65025;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 65025;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fintek_8250_get_ldn_range(pdata,min,max);
          printf("%d\n", benchRet); 
          free(pdata);
          free(min);
          free(max);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdata0 = 100;
          struct fintek_8250 * pdata = (struct fintek_8250 *) malloc(_len_pdata0*sizeof(struct fintek_8250));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 100;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 100;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fintek_8250_get_ldn_range(pdata,min,max);
          printf("%d\n", benchRet); 
          free(pdata);
          free(min);
          free(max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
