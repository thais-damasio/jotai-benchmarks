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
struct sata_gemini {scalar_t__ muxmode; int /*<<< orphan*/  sata_bridge; } ;

/* Variables and functions */
 scalar_t__ GEMINI_MUXMODE_2 ; 
 scalar_t__ GEMINI_MUXMODE_3 ; 

bool gemini_sata_bridge_enabled(struct sata_gemini *sg, bool is_ata1)
{
	if (!sg->sata_bridge)
		return false;
	/*
	 * In muxmode 2 and 3 one of the ATA controllers is
	 * actually not connected to any SATA bridge.
	 */
	if ((sg->muxmode == GEMINI_MUXMODE_2) &&
	    !is_ata1)
		return false;
	if ((sg->muxmode == GEMINI_MUXMODE_3) &&
	    is_ata1)
		return false;

	return true;
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
          int is_ata1 = 100;
          int _len_sg0 = 1;
          struct sata_gemini * sg = (struct sata_gemini *) malloc(_len_sg0*sizeof(struct sata_gemini));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].muxmode = ((-2 * (next_i()%2)) + 1) * next_i();
        sg[_i0].sata_bridge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gemini_sata_bridge_enabled(sg,is_ata1);
          printf("%d\n", benchRet); 
          free(sg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_ata1 = 255;
          int _len_sg0 = 65025;
          struct sata_gemini * sg = (struct sata_gemini *) malloc(_len_sg0*sizeof(struct sata_gemini));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].muxmode = ((-2 * (next_i()%2)) + 1) * next_i();
        sg[_i0].sata_bridge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gemini_sata_bridge_enabled(sg,is_ata1);
          printf("%d\n", benchRet); 
          free(sg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_ata1 = 10;
          int _len_sg0 = 100;
          struct sata_gemini * sg = (struct sata_gemini *) malloc(_len_sg0*sizeof(struct sata_gemini));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].muxmode = ((-2 * (next_i()%2)) + 1) * next_i();
        sg[_i0].sata_bridge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gemini_sata_bridge_enabled(sg,is_ata1);
          printf("%d\n", benchRet); 
          free(sg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
