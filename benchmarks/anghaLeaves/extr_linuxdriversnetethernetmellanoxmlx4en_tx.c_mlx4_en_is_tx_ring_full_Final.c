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
struct mlx4_en_tx_ring {scalar_t__ prod; scalar_t__ cons; scalar_t__ full_size; } ;

/* Variables and functions */

__attribute__((used)) static inline bool mlx4_en_is_tx_ring_full(struct mlx4_en_tx_ring *ring)
{
	return ring->prod - ring->cons > ring->full_size;
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
          int _len_ring0 = 1;
          struct mlx4_en_tx_ring * ring = (struct mlx4_en_tx_ring *) malloc(_len_ring0*sizeof(struct mlx4_en_tx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].prod = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].full_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_en_is_tx_ring_full(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct mlx4_en_tx_ring * ring = (struct mlx4_en_tx_ring *) malloc(_len_ring0*sizeof(struct mlx4_en_tx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].prod = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].full_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_en_is_tx_ring_full(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct mlx4_en_tx_ring * ring = (struct mlx4_en_tx_ring *) malloc(_len_ring0*sizeof(struct mlx4_en_tx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].prod = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].full_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_en_is_tx_ring_full(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
