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
struct TYPE_2__ {unsigned int end_index; unsigned int start_index; } ;
struct mlxsw_sp1_kvdl_part {TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static void mlxsw_sp1_kvdl_part_update(struct mlxsw_sp1_kvdl_part *part,
				       struct mlxsw_sp1_kvdl_part *part_prev,
				       unsigned int size)
{
	if (!part_prev) {
		part->info.end_index = size - 1;
	} else {
		part->info.start_index = part_prev->info.end_index + 1;
		part->info.end_index = part->info.start_index + size - 1;
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

    // big-arr
    case 0:
    {
          unsigned int size = 255;
          int _len_part0 = 1;
          struct mlxsw_sp1_kvdl_part * part = (struct mlxsw_sp1_kvdl_part *) malloc(_len_part0*sizeof(struct mlxsw_sp1_kvdl_part));
          for(int _i0 = 0; _i0 < _len_part0; _i0++) {
            part->info.end_index = ((-2 * (next_i()%2)) + 1) * next_i();
        part->info.start_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_part_prev0 = 1;
          struct mlxsw_sp1_kvdl_part * part_prev = (struct mlxsw_sp1_kvdl_part *) malloc(_len_part_prev0*sizeof(struct mlxsw_sp1_kvdl_part));
          for(int _i0 = 0; _i0 < _len_part_prev0; _i0++) {
            part_prev->info.end_index = ((-2 * (next_i()%2)) + 1) * next_i();
        part_prev->info.start_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp1_kvdl_part_update(part,part_prev,size);
          free(part);
          free(part_prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
