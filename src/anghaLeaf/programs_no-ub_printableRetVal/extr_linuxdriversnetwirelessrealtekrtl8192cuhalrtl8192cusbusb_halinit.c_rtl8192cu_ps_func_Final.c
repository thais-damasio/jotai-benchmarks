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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  PADAPTER ;
typedef  int HAL_INTF_PS_FUNC ;

/* Variables and functions */
 int /*<<< orphan*/  _TRUE ; 

__attribute__((used)) static u8 rtl8192cu_ps_func(PADAPTER Adapter,HAL_INTF_PS_FUNC efunc_id, u8 *val)
{	
	u8 bResult = _TRUE;
	switch(efunc_id){

		#if defined(CONFIG_AUTOSUSPEND) && defined(SUPPORT_HW_RFOFF_DETECTED)
		case HAL_USB_SELECT_SUSPEND:
			{
				u8 bfwpoll = *(( u8*)val);
				rtl8192c_set_FwSelectSuspend_cmd(Adapter,bfwpoll ,500);//note fw to support hw power down ping detect
			}
			break;
		#endif //CONFIG_AUTOSUSPEND && SUPPORT_HW_RFOFF_DETECTED

		default:
			break;
	}
	return bResult;
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
          int Adapter = 255;
          int efunc_id = 255;
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtl8192cu_ps_func(Adapter,efunc_id,val);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}