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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct spmi_pmic_arb {int channel; } ;
typedef  enum pmic_arb_channel { ____Placeholder_pmic_arb_channel } pmic_arb_channel ;

/* Variables and functions */

__attribute__((used)) static int pmic_arb_offset_v1(struct spmi_pmic_arb *pmic_arb, u8 sid, u16 addr,
			enum pmic_arb_channel ch_type)
{
	return 0x800 + 0x80 * pmic_arb->channel;
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
          int sid = 255;
          int addr = 255;
          enum pmic_arb_channel ch_type = 0;
          int _len_pmic_arb0 = 1;
          struct spmi_pmic_arb * pmic_arb = (struct spmi_pmic_arb *) malloc(_len_pmic_arb0*sizeof(struct spmi_pmic_arb));
          for(int _i0 = 0; _i0 < _len_pmic_arb0; _i0++) {
            pmic_arb->channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmic_arb_offset_v1(pmic_arb,sid,addr,ch_type);
          printf("%d\n", benchRet); 
          free(pmic_arb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
