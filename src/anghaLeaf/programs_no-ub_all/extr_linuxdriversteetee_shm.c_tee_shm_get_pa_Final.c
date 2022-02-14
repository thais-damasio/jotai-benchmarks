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
struct tee_shm {size_t size; scalar_t__ paddr; } ;
typedef  scalar_t__ phys_addr_t ;

/* Variables and functions */
 int EINVAL ; 

int tee_shm_get_pa(struct tee_shm *shm, size_t offs, phys_addr_t *pa)
{
	if (offs >= shm->size)
		return -EINVAL;
	if (pa)
		*pa = shm->paddr + offs;
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
          unsigned long offs = 255;
          int _len_shm0 = 1;
          struct tee_shm * shm = (struct tee_shm *) malloc(_len_shm0*sizeof(struct tee_shm));
          for(int _i0 = 0; _i0 < _len_shm0; _i0++) {
            shm->size = ((-2 * (next_i()%2)) + 1) * next_i();
        shm->paddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pa0 = 65025;
          long * pa = (long *) malloc(_len_pa0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pa0; _i0++) {
            pa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tee_shm_get_pa(shm,offs,pa);
          printf("%d\n", benchRet); 
          free(shm);
          free(pa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}