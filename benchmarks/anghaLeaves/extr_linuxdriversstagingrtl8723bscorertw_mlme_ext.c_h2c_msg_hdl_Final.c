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
typedef  int /*<<< orphan*/  u8 ;
struct adapter {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  H2C_PARAMETERS_ERROR ; 
 int /*<<< orphan*/  H2C_SUCCESS ; 

u8 h2c_msg_hdl(struct adapter *padapter, unsigned char *pbuf)
{
	if (!pbuf)
		return H2C_PARAMETERS_ERROR;

	return H2C_SUCCESS;
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbuf0 = 1;
          unsigned char * pbuf = (unsigned char *) malloc(_len_pbuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2c_msg_hdl(padapter,pbuf);
          printf("%d\n", benchRet); 
          free(padapter);
          free(pbuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_padapter0 = 65025;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbuf0 = 65025;
          unsigned char * pbuf = (unsigned char *) malloc(_len_pbuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2c_msg_hdl(padapter,pbuf);
          printf("%d\n", benchRet); 
          free(padapter);
          free(pbuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_padapter0 = 100;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbuf0 = 100;
          unsigned char * pbuf = (unsigned char *) malloc(_len_pbuf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2c_msg_hdl(padapter,pbuf);
          printf("%d\n", benchRet); 
          free(padapter);
          free(pbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}