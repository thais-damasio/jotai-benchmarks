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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ obj_index; scalar_t__ adapter_index; } ;
union handle_word {TYPE_1__ h; scalar_t__ w; } ;
typedef  scalar_t__ u32 ;
typedef  scalar_t__ u16 ;

/* Variables and functions */
 scalar_t__ HPI_ERROR_INVALID_HANDLE ; 

__attribute__((used)) static u16 hpi_handle_indexes(const u32 h, u16 *p1, u16 *p2)
{
	union handle_word uhandle;
	if (!h)
		return HPI_ERROR_INVALID_HANDLE;

	uhandle.w = h;

	*p1 = (u16)uhandle.h.adapter_index;
	if (p2)
		*p2 = (u16)uhandle.h.obj_index;

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
          const long h = 255;
          int _len_p10 = 65025;
          long * p1 = (long *) malloc(_len_p10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p20 = 65025;
          long * p2 = (long *) malloc(_len_p20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = hpi_handle_indexes(h,p1,p2);
          printf("%ld\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}