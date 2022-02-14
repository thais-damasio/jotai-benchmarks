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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;

/* Variables and functions */
 int /*<<< orphan*/  ATOM_EXT_PLL1 ; 
 int /*<<< orphan*/  ATOM_PPLL0 ; 
 int /*<<< orphan*/  ATOM_PPLL1 ; 
 int /*<<< orphan*/  ATOM_PPLL2 ; 
 int /*<<< orphan*/  ATOM_PPLL_INVALID ; 
#define  CLOCK_SOURCE_ID_DFS 135 
#define  CLOCK_SOURCE_ID_DP_DTO 134 
#define  CLOCK_SOURCE_ID_EXTERNAL 133 
#define  CLOCK_SOURCE_ID_PLL0 132 
#define  CLOCK_SOURCE_ID_PLL1 131 
#define  CLOCK_SOURCE_ID_PLL2 130 
#define  CLOCK_SOURCE_ID_UNDEFINED 129 
#define  CLOCK_SOURCE_ID_VCE 128 

__attribute__((used)) static bool clock_source_id_to_atom(
	enum clock_source_id id,
	uint32_t *atom_pll_id)
{
	bool result = true;

	if (atom_pll_id != NULL)
		switch (id) {
		case CLOCK_SOURCE_ID_PLL0:
			*atom_pll_id = ATOM_PPLL0;
			break;
		case CLOCK_SOURCE_ID_PLL1:
			*atom_pll_id = ATOM_PPLL1;
			break;
		case CLOCK_SOURCE_ID_PLL2:
			*atom_pll_id = ATOM_PPLL2;
			break;
		case CLOCK_SOURCE_ID_EXTERNAL:
			*atom_pll_id = ATOM_PPLL_INVALID;
			break;
		case CLOCK_SOURCE_ID_DFS:
			*atom_pll_id = ATOM_EXT_PLL1;
			break;
		case CLOCK_SOURCE_ID_VCE:
			/* for VCE encoding,
			 * we need to pass in ATOM_PPLL_INVALID
			 */
			*atom_pll_id = ATOM_PPLL_INVALID;
			break;
		case CLOCK_SOURCE_ID_DP_DTO:
			/* When programming DP DTO PLL ID should be invalid */
			*atom_pll_id = ATOM_PPLL_INVALID;
			break;
		case CLOCK_SOURCE_ID_UNDEFINED:
			/* Should not happen */
			*atom_pll_id = ATOM_PPLL_INVALID;
			result = false;
			break;
		default:
			result = false;
			break;
		}

	return result;
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
          enum clock_source_id id = 0;
          int _len_atom_pll_id0 = 65025;
          int * atom_pll_id = (int *) malloc(_len_atom_pll_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_atom_pll_id0; _i0++) {
            atom_pll_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clock_source_id_to_atom(id,atom_pll_id);
          printf("%d\n", benchRet); 
          free(atom_pll_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
