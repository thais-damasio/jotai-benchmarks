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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut32 ;
struct TYPE_5__ {scalar_t__ nb_section; TYPE_1__** sections; } ;
typedef  TYPE_2__ r_bin_omf_obj ;
struct TYPE_4__ {int bits; } ;

/* Variables and functions */

int r_bin_omf_get_bits(r_bin_omf_obj *obj) {
	ut32 ct_sec = 0;
	if (!obj) {
		return 32;
	}

	// we assume if one segdef define a 32 segment all opcodes are 32bits
	while (ct_sec < obj->nb_section) {
		if (obj->sections[ct_sec++]->bits == 32) {
			return 32;
		}
	}
	return 16;
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
          int _len_obj0 = 1;
          struct TYPE_5__ * obj = (struct TYPE_5__ *) malloc(_len_obj0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].nb_section = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__sections0 = 1;
          obj[_i0].sections = (struct TYPE_4__ **) malloc(_len_obj__i0__sections0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_obj__i0__sections0; _j0++) {
            int _len_obj__i0__sections1 = 1;
            obj[_i0].sections[_j0] = (struct TYPE_4__ *) malloc(_len_obj__i0__sections1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_obj__i0__sections1; _j1++) {
              obj[_i0].sections[_j0]->bits = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = r_bin_omf_get_bits(obj);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(*(obj[_aux].sections));
        free(obj[_aux].sections);
          }
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
