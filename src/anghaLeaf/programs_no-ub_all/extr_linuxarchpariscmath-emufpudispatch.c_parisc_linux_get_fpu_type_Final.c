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
typedef  int /*<<< orphan*/  u_int ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;

/* Variables and functions */
 size_t FPU_TYPE_FLAG_POS ; 
 int /*<<< orphan*/  PA2_0_FPU_FLAG ; 
 int /*<<< orphan*/  ROLEX_EXTEN_FLAG ; 
 int /*<<< orphan*/  TIMEX_EXTEN_FLAG ; 
 TYPE_1__ boot_cpu_data ; 
 scalar_t__ pcxs ; 
 scalar_t__ pcxt ; 
 scalar_t__ pcxt_ ; 
 scalar_t__ pcxu ; 

__attribute__((used)) static void parisc_linux_get_fpu_type(u_int fpregs[])
{
	/* on pa-linux the fpu type is not filled in by the
	 * caller; it is constructed here  
	 */ 
	if (boot_cpu_data.cpu_type == pcxs)
		fpregs[FPU_TYPE_FLAG_POS] = TIMEX_EXTEN_FLAG;
	else if (boot_cpu_data.cpu_type == pcxt ||
	         boot_cpu_data.cpu_type == pcxt_)
		fpregs[FPU_TYPE_FLAG_POS] = ROLEX_EXTEN_FLAG;
	else if (boot_cpu_data.cpu_type >= pcxu)
		fpregs[FPU_TYPE_FLAG_POS] = PA2_0_FPU_FLAG;
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
          int _len_fpregs0 = 1;
          int * fpregs = (int *) malloc(_len_fpregs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fpregs0; _i0++) {
            fpregs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parisc_linux_get_fpu_type(fpregs);
          free(fpregs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
