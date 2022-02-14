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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct ibmvmc_buffer {scalar_t__ owner; scalar_t__ free; scalar_t__ valid; } ;
struct TYPE_4__ {struct ibmvmc_buffer* buffer; } ;
struct TYPE_3__ {size_t max_hmc_index; } ;

/* Variables and functions */
 scalar_t__ VMC_BUF_OWNER_ALPHA ; 
 TYPE_2__* hmcs ; 
 TYPE_1__ ibmvmc ; 
 unsigned long ibmvmc_max_buf_pool_size ; 

__attribute__((used)) static struct ibmvmc_buffer *ibmvmc_get_valid_hmc_buffer(u8 hmc_index)
{
	struct ibmvmc_buffer *buffer;
	struct ibmvmc_buffer *ret_buf = NULL;
	unsigned long i;

	if (hmc_index > ibmvmc.max_hmc_index)
		return NULL;

	buffer = hmcs[hmc_index].buffer;

	for (i = 0; i < ibmvmc_max_buf_pool_size; i++) {
		if (buffer[i].valid && buffer[i].free &&
		    buffer[i].owner == VMC_BUF_OWNER_ALPHA) {
			buffer[i].free = 0;
			ret_buf = &buffer[i];
			break;
		}
	}

	return ret_buf;
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
          unsigned long hmc_index = 255;
          struct ibmvmc_buffer * benchRet = ibmvmc_get_valid_hmc_buffer(hmc_index);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
