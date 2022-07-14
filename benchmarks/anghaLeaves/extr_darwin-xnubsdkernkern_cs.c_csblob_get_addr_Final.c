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
typedef  int /*<<< orphan*/  vm_address_t ;
struct cs_blob {int /*<<< orphan*/  csb_mem_kaddr; } ;

/* Variables and functions */

vm_address_t
csblob_get_addr(struct cs_blob *blob)
{
    return blob->csb_mem_kaddr;
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
          int _len_blob0 = 1;
          struct cs_blob * blob = (struct cs_blob *) malloc(_len_blob0*sizeof(struct cs_blob));
          for(int _i0 = 0; _i0 < _len_blob0; _i0++) {
            blob[_i0].csb_mem_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csblob_get_addr(blob);
          printf("%d\n", benchRet); 
          free(blob);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_blob0 = 65025;
          struct cs_blob * blob = (struct cs_blob *) malloc(_len_blob0*sizeof(struct cs_blob));
          for(int _i0 = 0; _i0 < _len_blob0; _i0++) {
            blob[_i0].csb_mem_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csblob_get_addr(blob);
          printf("%d\n", benchRet); 
          free(blob);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_blob0 = 100;
          struct cs_blob * blob = (struct cs_blob *) malloc(_len_blob0*sizeof(struct cs_blob));
          for(int _i0 = 0; _i0 < _len_blob0; _i0++) {
            blob[_i0].csb_mem_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csblob_get_addr(blob);
          printf("%d\n", benchRet); 
          free(blob);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}