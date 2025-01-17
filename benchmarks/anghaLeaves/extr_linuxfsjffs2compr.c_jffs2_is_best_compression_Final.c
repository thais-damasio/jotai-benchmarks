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

/* Type definitions */
typedef  int uint32_t ;
struct jffs2_compressor {int /*<<< orphan*/  compr; } ;

/* Variables and functions */
 int FAVOUR_LZO_PERCENT ; 
 int /*<<< orphan*/  JFFS2_COMPR_LZO ; 
#define  JFFS2_COMPR_MODE_FAVOURLZO 129 
#define  JFFS2_COMPR_MODE_SIZE 128 
 int jffs2_compression_mode ; 

__attribute__((used)) static int jffs2_is_best_compression(struct jffs2_compressor *this,
		struct jffs2_compressor *best, uint32_t size, uint32_t bestsize)
{
	switch (jffs2_compression_mode) {
	case JFFS2_COMPR_MODE_SIZE:
		if (bestsize > size)
			return 1;
		return 0;
	case JFFS2_COMPR_MODE_FAVOURLZO:
		if ((this->compr == JFFS2_COMPR_LZO) && (bestsize > size))
			return 1;
		if ((best->compr != JFFS2_COMPR_LZO) && (bestsize > size))
			return 1;
		if ((this->compr == JFFS2_COMPR_LZO) && (bestsize > (size * FAVOUR_LZO_PERCENT / 100)))
			return 1;
		if ((bestsize * FAVOUR_LZO_PERCENT / 100) > size)
			return 1;

		return 0;
	}
	/* Shouldn't happen */
	return 0;
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
          int size = 100;
          int bestsize = 100;
          int _len_this0 = 1;
          struct jffs2_compressor * this = (struct jffs2_compressor *) malloc(_len_this0*sizeof(struct jffs2_compressor));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].compr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_best0 = 1;
          struct jffs2_compressor * best = (struct jffs2_compressor *) malloc(_len_best0*sizeof(struct jffs2_compressor));
          for(int _i0 = 0; _i0 < _len_best0; _i0++) {
            best[_i0].compr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = jffs2_is_best_compression(this,best,size,bestsize);
          printf("%d\n", benchRet); 
          free(this);
          free(best);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
