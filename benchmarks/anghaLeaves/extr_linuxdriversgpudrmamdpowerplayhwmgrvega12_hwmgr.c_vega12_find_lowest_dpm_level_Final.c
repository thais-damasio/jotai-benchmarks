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
typedef  size_t uint32_t ;
struct vega12_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {int enabled; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t vega12_find_lowest_dpm_level(
		struct vega12_single_dpm_table *table)
{
	uint32_t i;

	for (i = 0; i < table->count; i++) {
		if (table->dpm_levels[i].enabled)
			break;
	}

	if (i >= table->count) {
		i = 0;
		table->dpm_levels[i].enabled = true;
	}

	return i;
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
          int _len_table0 = 1;
          struct vega12_single_dpm_table * table = (struct vega12_single_dpm_table *) malloc(_len_table0*sizeof(struct vega12_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__dpm_levels0 = 1;
          table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__dpm_levels0; _j0++) {
            table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = vega12_find_lowest_dpm_level(table);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].dpm_levels);
          }
          free(table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_table0 = 65025;
          struct vega12_single_dpm_table * table = (struct vega12_single_dpm_table *) malloc(_len_table0*sizeof(struct vega12_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__dpm_levels0 = 1;
          table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__dpm_levels0; _j0++) {
            table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = vega12_find_lowest_dpm_level(table);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].dpm_levels);
          }
          free(table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_table0 = 100;
          struct vega12_single_dpm_table * table = (struct vega12_single_dpm_table *) malloc(_len_table0*sizeof(struct vega12_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__dpm_levels0 = 1;
          table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__dpm_levels0; _j0++) {
            table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = vega12_find_lowest_dpm_level(table);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].dpm_levels);
          }
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
