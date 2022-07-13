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
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int /*<<< orphan*/  speed_set; } ;
typedef  enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;

/* Variables and functions */
#define  SPEED_1000 130 
#define  SPEED_10000 129 
#define  SPEED_2500 128 
 int XGBE_MODE_KR ; 
 int XGBE_MODE_KX_1000 ; 
 int XGBE_MODE_KX_2500 ; 
 int XGBE_MODE_UNKNOWN ; 
 int /*<<< orphan*/  XGBE_SPEEDSET_1000_10000 ; 
 int /*<<< orphan*/  XGBE_SPEEDSET_2500_10000 ; 

__attribute__((used)) static enum xgbe_mode xgbe_phy_get_mode(struct xgbe_prv_data *pdata,
					int speed)
{
	struct xgbe_phy_data *phy_data = pdata->phy_data;

	switch (speed) {
	case SPEED_1000:
		return (phy_data->speed_set == XGBE_SPEEDSET_1000_10000)
			? XGBE_MODE_KX_1000 : XGBE_MODE_UNKNOWN;
	case SPEED_2500:
		return (phy_data->speed_set == XGBE_SPEEDSET_2500_10000)
			? XGBE_MODE_KX_2500 : XGBE_MODE_UNKNOWN;
	case SPEED_10000:
		return XGBE_MODE_KR;
	default:
		return XGBE_MODE_UNKNOWN;
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
          int speed = 100;
          int _len_pdata0 = 1;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__phy_data0 = 1;
          pdata[_i0].phy_data = (struct xgbe_phy_data *) malloc(_len_pdata__i0__phy_data0*sizeof(struct xgbe_phy_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__phy_data0; _j0++) {
            pdata[_i0].phy_data->speed_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum xgbe_mode benchRet = xgbe_phy_get_mode(pdata,speed);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].phy_data);
          }
          free(pdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int speed = 255;
          int _len_pdata0 = 65025;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__phy_data0 = 1;
          pdata[_i0].phy_data = (struct xgbe_phy_data *) malloc(_len_pdata__i0__phy_data0*sizeof(struct xgbe_phy_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__phy_data0; _j0++) {
            pdata[_i0].phy_data->speed_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum xgbe_mode benchRet = xgbe_phy_get_mode(pdata,speed);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].phy_data);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int speed = 10;
          int _len_pdata0 = 100;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__phy_data0 = 1;
          pdata[_i0].phy_data = (struct xgbe_phy_data *) malloc(_len_pdata__i0__phy_data0*sizeof(struct xgbe_phy_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__phy_data0; _j0++) {
            pdata[_i0].phy_data->speed_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum xgbe_mode benchRet = xgbe_phy_get_mode(pdata,speed);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].phy_data);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
