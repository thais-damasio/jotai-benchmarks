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
typedef  int /*<<< orphan*/  u32 ;
typedef  scalar_t__ u16 ;
struct ps3av_send_hdr {int /*<<< orphan*/  cid; scalar_t__ size; int /*<<< orphan*/  version; } ;

/* Variables and functions */
 scalar_t__ PS3AV_HDR_SIZE ; 
 int /*<<< orphan*/  PS3AV_VERSION ; 

void ps3av_set_hdr(u32 cid, u16 size, struct ps3av_send_hdr *hdr)
{
	hdr->version = PS3AV_VERSION;
	hdr->size = size - PS3AV_HDR_SIZE;
	hdr->cid = cid;
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
          int cid = 255;
          long size = 255;
          int _len_hdr0 = 1;
          struct ps3av_send_hdr * hdr = (struct ps3av_send_hdr *) malloc(_len_hdr0*sizeof(struct ps3av_send_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr->cid = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->size = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ps3av_set_hdr(cid,size,hdr);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
