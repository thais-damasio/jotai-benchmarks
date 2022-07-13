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
struct efx_filter_spec {int encap_type; int /*<<< orphan*/  match_flags; } ;
typedef  enum efx_encap_type { ____Placeholder_efx_encap_type } efx_encap_type ;

/* Variables and functions */
 int /*<<< orphan*/  EFX_FILTER_MATCH_ENCAP_TYPE ; 

__attribute__((used)) static inline void efx_filter_set_encap_type(struct efx_filter_spec *spec,
					     enum efx_encap_type encap_type)
{
	spec->match_flags |= EFX_FILTER_MATCH_ENCAP_TYPE;
	spec->encap_type = encap_type;
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
          enum efx_encap_type encap_type = 0;
          int _len_spec0 = 1;
          struct efx_filter_spec * spec = (struct efx_filter_spec *) malloc(_len_spec0*sizeof(struct efx_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
            spec[_i0].encap_type = ((-2 * (next_i()%2)) + 1) * next_i();
        spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          efx_filter_set_encap_type(spec,encap_type);
          free(spec);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum efx_encap_type encap_type = 0;
          int _len_spec0 = 65025;
          struct efx_filter_spec * spec = (struct efx_filter_spec *) malloc(_len_spec0*sizeof(struct efx_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
            spec[_i0].encap_type = ((-2 * (next_i()%2)) + 1) * next_i();
        spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          efx_filter_set_encap_type(spec,encap_type);
          free(spec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum efx_encap_type encap_type = 0;
          int _len_spec0 = 100;
          struct efx_filter_spec * spec = (struct efx_filter_spec *) malloc(_len_spec0*sizeof(struct efx_filter_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
            spec[_i0].encap_type = ((-2 * (next_i()%2)) + 1) * next_i();
        spec[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          efx_filter_set_encap_type(spec,encap_type);
          free(spec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
