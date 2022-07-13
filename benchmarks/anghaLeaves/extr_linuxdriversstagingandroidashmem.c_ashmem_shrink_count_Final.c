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
struct shrinker {int dummy; } ;
struct shrink_control {int dummy; } ;

/* Variables and functions */
 unsigned long lru_count ; 

__attribute__((used)) static unsigned long
ashmem_shrink_count(struct shrinker *shrink, struct shrink_control *sc)
{
	/*
	 * note that lru_count is count of pages on the lru, not a count of
	 * objects on the list. This means the scan function needs to return the
	 * number of pages freed, not the number of objects scanned.
	 */
	return lru_count;
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
          int _len_shrink0 = 1;
          struct shrinker * shrink = (struct shrinker *) malloc(_len_shrink0*sizeof(struct shrinker));
          for(int _i0 = 0; _i0 < _len_shrink0; _i0++) {
            shrink[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 1;
          struct shrink_control * sc = (struct shrink_control *) malloc(_len_sc0*sizeof(struct shrink_control));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ashmem_shrink_count(shrink,sc);
          printf("%lu\n", benchRet); 
          free(shrink);
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_shrink0 = 65025;
          struct shrinker * shrink = (struct shrinker *) malloc(_len_shrink0*sizeof(struct shrinker));
          for(int _i0 = 0; _i0 < _len_shrink0; _i0++) {
            shrink[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 65025;
          struct shrink_control * sc = (struct shrink_control *) malloc(_len_sc0*sizeof(struct shrink_control));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ashmem_shrink_count(shrink,sc);
          printf("%lu\n", benchRet); 
          free(shrink);
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_shrink0 = 100;
          struct shrinker * shrink = (struct shrinker *) malloc(_len_shrink0*sizeof(struct shrinker));
          for(int _i0 = 0; _i0 < _len_shrink0; _i0++) {
            shrink[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc0 = 100;
          struct shrink_control * sc = (struct shrink_control *) malloc(_len_sc0*sizeof(struct shrink_control));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ashmem_shrink_count(shrink,sc);
          printf("%lu\n", benchRet); 
          free(shrink);
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
