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
typedef  int u16 ;

/* Variables and functions */

int probe_is_insn_relative_long(u16 *insn)
{
	/* Check if we have a RIL-b or RIL-c format instruction which
	 * we need to modify in order to avoid instruction emulation. */
	switch (insn[0] >> 8) {
	case 0xc0:
		if ((insn[0] & 0x0f) == 0x00) /* larl */
			return true;
		break;
	case 0xc4:
		switch (insn[0] & 0x0f) {
		case 0x02: /* llhrl  */
		case 0x04: /* lghrl  */
		case 0x05: /* lhrl   */
		case 0x06: /* llghrl */
		case 0x07: /* sthrl  */
		case 0x08: /* lgrl   */
		case 0x0b: /* stgrl  */
		case 0x0c: /* lgfrl  */
		case 0x0d: /* lrl    */
		case 0x0e: /* llgfrl */
		case 0x0f: /* strl   */
			return true;
		}
		break;
	case 0xc6:
		switch (insn[0] & 0x0f) {
		case 0x02: /* pfdrl  */
		case 0x04: /* cghrl  */
		case 0x05: /* chrl   */
		case 0x06: /* clghrl */
		case 0x07: /* clhrl  */
		case 0x08: /* cgrl   */
		case 0x0a: /* clgrl  */
		case 0x0c: /* cgfrl  */
		case 0x0d: /* crl    */
		case 0x0e: /* clgfrl */
		case 0x0f: /* clrl   */
			return true;
		}
		break;
	}
	return false;
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
          int _len_insn0 = 65025;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = probe_is_insn_relative_long(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
