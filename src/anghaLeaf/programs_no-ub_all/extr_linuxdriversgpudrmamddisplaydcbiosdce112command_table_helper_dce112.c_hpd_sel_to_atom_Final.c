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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  enum hpd_source_id { ____Placeholder_hpd_source_id } hpd_source_id ;

/* Variables and functions */
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD1_SEL ; 
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD2_SEL ; 
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD3_SEL ; 
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD4_SEL ; 
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD5_SEL ; 
 int /*<<< orphan*/  ATOM_TRANSMITTER_V6_HPD6_SEL ; 
#define  HPD_SOURCEID1 134 
#define  HPD_SOURCEID2 133 
#define  HPD_SOURCEID3 132 
#define  HPD_SOURCEID4 131 
#define  HPD_SOURCEID5 130 
#define  HPD_SOURCEID6 129 
#define  HPD_SOURCEID_UNKNOWN 128 

__attribute__((used)) static uint8_t hpd_sel_to_atom(enum hpd_source_id id)
{
	uint8_t atom_hpd_sel = 0;

	switch (id) {
	case HPD_SOURCEID1:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD1_SEL;
		break;
	case HPD_SOURCEID2:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD2_SEL;
		break;
	case HPD_SOURCEID3:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD3_SEL;
		break;
	case HPD_SOURCEID4:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD4_SEL;
		break;
	case HPD_SOURCEID5:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD5_SEL;
		break;
	case HPD_SOURCEID6:
		atom_hpd_sel = ATOM_TRANSMITTER_V6_HPD6_SEL;
		break;
	case HPD_SOURCEID_UNKNOWN:
	default:
		atom_hpd_sel = 0;
		break;
	}
	return atom_hpd_sel;
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
          enum hpd_source_id id = 0;
          int benchRet = hpd_sel_to_atom(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
