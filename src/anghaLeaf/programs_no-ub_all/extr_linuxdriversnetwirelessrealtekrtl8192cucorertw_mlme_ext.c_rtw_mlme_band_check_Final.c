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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {scalar_t__ setband; } ;
typedef  TYPE_1__ _adapter ;

/* Variables and functions */
 scalar_t__ GHZ24_50 ; 
 scalar_t__ GHZ_24 ; 
 scalar_t__ GHZ_50 ; 
 int _FALSE ; 
 int _TRUE ; 

bool rtw_mlme_band_check(_adapter *adapter, const u32 ch)
{
	if (adapter->setband == GHZ24_50 /* 2.4G and 5G */
		|| (adapter->setband == GHZ_24 && ch < 35) /* 2.4G only */
		|| (adapter->setband == GHZ_50 && ch > 35) /* 5G only */
	) {
		return _TRUE;
	}
	return _FALSE;
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
          const int ch = 255;
          int _len_adapter0 = 1;
          struct TYPE_3__ * adapter = (struct TYPE_3__ *) malloc(_len_adapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter->setband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_mlme_band_check(adapter,ch);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}