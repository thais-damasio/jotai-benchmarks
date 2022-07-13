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
struct symbol {scalar_t__ end; unsigned long start; } ;
struct addr_location {scalar_t__ addr; TYPE_1__* map; } ;
struct TYPE_2__ {unsigned long start; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long get_offset(struct symbol *sym, struct addr_location *al)
{
	unsigned long offset;

	if (al->addr < sym->end)
		offset = al->addr - sym->start;
	else
		offset = al->addr - al->map->start - sym->start;

	return offset;
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
          int _len_sym0 = 1;
          struct symbol * sym = (struct symbol *) malloc(_len_sym0*sizeof(struct symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
            sym[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sym[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 1;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_al__i0__map0 = 1;
          al[_i0].map = (struct TYPE_2__ *) malloc(_len_al__i0__map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_al__i0__map0; _j0++) {
            al[_i0].map->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = get_offset(sym,al);
          printf("%lu\n", benchRet); 
          free(sym);
          for(int _aux = 0; _aux < _len_al0; _aux++) {
          free(al[_aux].map);
          }
          free(al);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sym0 = 65025;
          struct symbol * sym = (struct symbol *) malloc(_len_sym0*sizeof(struct symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
            sym[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sym[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 65025;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_al__i0__map0 = 1;
          al[_i0].map = (struct TYPE_2__ *) malloc(_len_al__i0__map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_al__i0__map0; _j0++) {
            al[_i0].map->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = get_offset(sym,al);
          printf("%lu\n", benchRet); 
          free(sym);
          for(int _aux = 0; _aux < _len_al0; _aux++) {
          free(al[_aux].map);
          }
          free(al);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sym0 = 100;
          struct symbol * sym = (struct symbol *) malloc(_len_sym0*sizeof(struct symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
            sym[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sym[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 100;
          struct addr_location * al = (struct addr_location *) malloc(_len_al0*sizeof(struct addr_location));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_al__i0__map0 = 1;
          al[_i0].map = (struct TYPE_2__ *) malloc(_len_al__i0__map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_al__i0__map0; _j0++) {
            al[_i0].map->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = get_offset(sym,al);
          printf("%lu\n", benchRet); 
          free(sym);
          for(int _aux = 0; _aux < _len_al0; _aux++) {
          free(al[_aux].map);
          }
          free(al);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
