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
typedef  int u16 ;
struct nfit_blk_mmio {int num_lines; int line_size; int table_size; } ;
struct acpi_nfit_interleave {int line_count; int line_size; } ;

/* Variables and functions */
 int ENXIO ; 

__attribute__((used)) static int nfit_blk_init_interleave(struct nfit_blk_mmio *mmio,
		struct acpi_nfit_interleave *idt, u16 interleave_ways)
{
	if (idt) {
		mmio->num_lines = idt->line_count;
		mmio->line_size = idt->line_size;
		if (interleave_ways == 0)
			return -ENXIO;
		mmio->table_size = mmio->num_lines * interleave_ways
			* mmio->line_size;
	}

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
          int interleave_ways = 255;
          int _len_mmio0 = 1;
          struct nfit_blk_mmio * mmio = (struct nfit_blk_mmio *) malloc(_len_mmio0*sizeof(struct nfit_blk_mmio));
          for(int _i0 = 0; _i0 < _len_mmio0; _i0++) {
            mmio->num_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        mmio->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        mmio->table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idt0 = 1;
          struct acpi_nfit_interleave * idt = (struct acpi_nfit_interleave *) malloc(_len_idt0*sizeof(struct acpi_nfit_interleave));
          for(int _i0 = 0; _i0 < _len_idt0; _i0++) {
            idt->line_count = ((-2 * (next_i()%2)) + 1) * next_i();
        idt->line_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfit_blk_init_interleave(mmio,idt,interleave_ways);
          printf("%d\n", benchRet); 
          free(mmio);
          free(idt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}