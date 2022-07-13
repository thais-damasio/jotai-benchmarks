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
typedef  int u8 ;
struct orc_host {int** allocation_map; } ;

/* Variables and functions */
 int MAX_CHANNELS ; 

__attribute__((used)) static void init_alloc_map(struct orc_host * host)
{
	u8 i, j;

	for (i = 0; i < MAX_CHANNELS; i++) {
		for (j = 0; j < 8; j++) {
			host->allocation_map[i][j] = 0xffffffff;
		}
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

    // int-bounds
    case 0:
    {
          int _len_host0 = 1;
          struct orc_host * host = (struct orc_host *) malloc(_len_host0*sizeof(struct orc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__allocation_map0 = 1;
          host[_i0].allocation_map = (int **) malloc(_len_host__i0__allocation_map0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_host__i0__allocation_map0; _j0++) {
            int _len_host__i0__allocation_map1 = 1;
            host[_i0].allocation_map[_j0] = (int *) malloc(_len_host__i0__allocation_map1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_host__i0__allocation_map1; _j1++) {
              host[_i0].allocation_map[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_alloc_map(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].allocation_map));
        free(host[_aux].allocation_map);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct orc_host * host = (struct orc_host *) malloc(_len_host0*sizeof(struct orc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__allocation_map0 = 1;
          host[_i0].allocation_map = (int **) malloc(_len_host__i0__allocation_map0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_host__i0__allocation_map0; _j0++) {
            int _len_host__i0__allocation_map1 = 1;
            host[_i0].allocation_map[_j0] = (int *) malloc(_len_host__i0__allocation_map1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_host__i0__allocation_map1; _j1++) {
              host[_i0].allocation_map[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_alloc_map(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].allocation_map));
        free(host[_aux].allocation_map);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct orc_host * host = (struct orc_host *) malloc(_len_host0*sizeof(struct orc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__allocation_map0 = 1;
          host[_i0].allocation_map = (int **) malloc(_len_host__i0__allocation_map0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_host__i0__allocation_map0; _j0++) {
            int _len_host__i0__allocation_map1 = 1;
            host[_i0].allocation_map[_j0] = (int *) malloc(_len_host__i0__allocation_map1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_host__i0__allocation_map1; _j1++) {
              host[_i0].allocation_map[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_alloc_map(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(*(host[_aux].allocation_map));
        free(host[_aux].allocation_map);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
