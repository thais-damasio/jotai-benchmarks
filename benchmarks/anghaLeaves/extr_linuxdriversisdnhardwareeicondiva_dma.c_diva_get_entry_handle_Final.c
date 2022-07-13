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
       1            big-arr-10x\n\
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
struct _diva_dma_map_entry {void* addr_handle; } ;

/* Variables and functions */

void *diva_get_entry_handle(struct _diva_dma_map_entry *pmap, int nr) {
	return (pmap[nr].addr_handle);
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
          int nr = 255;
          int _len_pmap0 = 65025;
          struct _diva_dma_map_entry * pmap = (struct _diva_dma_map_entry *) malloc(_len_pmap0*sizeof(struct _diva_dma_map_entry));
          for(int _i0 = 0; _i0 < _len_pmap0; _i0++) {
              }
          void * benchRet = diva_get_entry_handle(pmap,nr);
          printf("{{other_type}} %p\n", &benchRet); 
          free(pmap);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nr = 10;
          int _len_pmap0 = 100;
          struct _diva_dma_map_entry * pmap = (struct _diva_dma_map_entry *) malloc(_len_pmap0*sizeof(struct _diva_dma_map_entry));
          for(int _i0 = 0; _i0 < _len_pmap0; _i0++) {
              }
          void * benchRet = diva_get_entry_handle(pmap,nr);
          printf("{{other_type}} %p\n", &benchRet); 
          free(pmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
