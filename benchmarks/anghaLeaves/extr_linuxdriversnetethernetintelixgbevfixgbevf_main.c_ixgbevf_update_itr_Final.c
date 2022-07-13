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
typedef  int u64 ;
typedef  int u32 ;
struct ixgbevf_ring_container {int total_bytes; int total_packets; int itr; } ;
struct ixgbevf_q_vector {int itr; } ;

/* Variables and functions */
#define  bulk_latency 130 
#define  low_latency 129 
#define  lowest_latency 128 

__attribute__((used)) static void ixgbevf_update_itr(struct ixgbevf_q_vector *q_vector,
			       struct ixgbevf_ring_container *ring_container)
{
	int bytes = ring_container->total_bytes;
	int packets = ring_container->total_packets;
	u32 timepassed_us;
	u64 bytes_perint;
	u8 itr_setting = ring_container->itr;

	if (packets == 0)
		return;

	/* simple throttle rate management
	 *    0-20MB/s lowest (100000 ints/s)
	 *   20-100MB/s low   (20000 ints/s)
	 *  100-1249MB/s bulk (12000 ints/s)
	 */
	/* what was last interrupt timeslice? */
	timepassed_us = q_vector->itr >> 2;
	bytes_perint = bytes / timepassed_us; /* bytes/usec */

	switch (itr_setting) {
	case lowest_latency:
		if (bytes_perint > 10)
			itr_setting = low_latency;
		break;
	case low_latency:
		if (bytes_perint > 20)
			itr_setting = bulk_latency;
		else if (bytes_perint <= 10)
			itr_setting = lowest_latency;
		break;
	case bulk_latency:
		if (bytes_perint <= 20)
			itr_setting = low_latency;
		break;
	}

	/* clear work counters since we have the values we need */
	ring_container->total_bytes = 0;
	ring_container->total_packets = 0;

	/* write updated itr to ring container */
	ring_container->itr = itr_setting;
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
          int _len_q_vector0 = 1;
          struct ixgbevf_q_vector * q_vector = (struct ixgbevf_q_vector *) malloc(_len_q_vector0*sizeof(struct ixgbevf_q_vector));
          for(int _i0 = 0; _i0 < _len_q_vector0; _i0++) {
            q_vector[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring_container0 = 1;
          struct ixgbevf_ring_container * ring_container = (struct ixgbevf_ring_container *) malloc(_len_ring_container0*sizeof(struct ixgbevf_ring_container));
          for(int _i0 = 0; _i0 < _len_ring_container0; _i0++) {
            ring_container[_i0].total_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].total_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_update_itr(q_vector,ring_container);
          free(q_vector);
          free(ring_container);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q_vector0 = 65025;
          struct ixgbevf_q_vector * q_vector = (struct ixgbevf_q_vector *) malloc(_len_q_vector0*sizeof(struct ixgbevf_q_vector));
          for(int _i0 = 0; _i0 < _len_q_vector0; _i0++) {
            q_vector[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring_container0 = 65025;
          struct ixgbevf_ring_container * ring_container = (struct ixgbevf_ring_container *) malloc(_len_ring_container0*sizeof(struct ixgbevf_ring_container));
          for(int _i0 = 0; _i0 < _len_ring_container0; _i0++) {
            ring_container[_i0].total_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].total_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_update_itr(q_vector,ring_container);
          free(q_vector);
          free(ring_container);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q_vector0 = 100;
          struct ixgbevf_q_vector * q_vector = (struct ixgbevf_q_vector *) malloc(_len_q_vector0*sizeof(struct ixgbevf_q_vector));
          for(int _i0 = 0; _i0 < _len_q_vector0; _i0++) {
            q_vector[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring_container0 = 100;
          struct ixgbevf_ring_container * ring_container = (struct ixgbevf_ring_container *) malloc(_len_ring_container0*sizeof(struct ixgbevf_ring_container));
          for(int _i0 = 0; _i0 < _len_ring_container0; _i0++) {
            ring_container[_i0].total_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].total_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        ring_container[_i0].itr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_update_itr(q_vector,ring_container);
          free(q_vector);
          free(ring_container);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
