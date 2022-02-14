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
typedef  int /*<<< orphan*/ * hist_field_fn_t ;

/* Variables and functions */
 int /*<<< orphan*/ * hist_field_s16 ; 
 int /*<<< orphan*/ * hist_field_s32 ; 
 int /*<<< orphan*/ * hist_field_s64 ; 
 int /*<<< orphan*/ * hist_field_s8 ; 
 int /*<<< orphan*/ * hist_field_u16 ; 
 int /*<<< orphan*/ * hist_field_u32 ; 
 int /*<<< orphan*/ * hist_field_u64 ; 
 int /*<<< orphan*/ * hist_field_u8 ; 

__attribute__((used)) static hist_field_fn_t select_value_fn(int field_size, int field_is_signed)
{
	hist_field_fn_t fn = NULL;

	switch (field_size) {
	case 8:
		if (field_is_signed)
			fn = hist_field_s64;
		else
			fn = hist_field_u64;
		break;
	case 4:
		if (field_is_signed)
			fn = hist_field_s32;
		else
			fn = hist_field_u32;
		break;
	case 2:
		if (field_is_signed)
			fn = hist_field_s16;
		else
			fn = hist_field_u16;
		break;
	case 1:
		if (field_is_signed)
			fn = hist_field_s8;
		else
			fn = hist_field_u8;
		break;
	}

	return fn;
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
          int field_size = 255;
          int field_is_signed = 255;
          int * benchRet = select_value_fn(field_size,field_is_signed);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
