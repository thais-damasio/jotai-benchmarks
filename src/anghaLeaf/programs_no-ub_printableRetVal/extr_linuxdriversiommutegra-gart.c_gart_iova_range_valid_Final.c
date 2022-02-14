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
struct gart_device {unsigned long iovmm_base; unsigned long page_count; } ;

/* Variables and functions */
 unsigned long GART_PAGE_SIZE ; 

__attribute__((used)) static inline bool gart_iova_range_valid(struct gart_device *gart,
					 unsigned long iova, size_t bytes)
{
	unsigned long iova_start, iova_end, gart_start, gart_end;

	iova_start = iova;
	iova_end = iova_start + bytes - 1;
	gart_start = gart->iovmm_base;
	gart_end = gart_start + gart->page_count * GART_PAGE_SIZE - 1;

	if (iova_start < gart_start)
		return false;
	if (iova_end > gart_end)
		return false;
	return true;
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
          unsigned long iova = 255;
          unsigned long bytes = 255;
          int _len_gart0 = 1;
          struct gart_device * gart = (struct gart_device *) malloc(_len_gart0*sizeof(struct gart_device));
          for(int _i0 = 0; _i0 < _len_gart0; _i0++) {
            gart->iovmm_base = ((-2 * (next_i()%2)) + 1) * next_i();
        gart->page_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gart_iova_range_valid(gart,iova,bytes);
          printf("%d\n", benchRet); 
          free(gart);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}