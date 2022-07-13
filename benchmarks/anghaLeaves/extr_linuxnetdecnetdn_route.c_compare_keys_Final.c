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
struct flowidn {int daddr; int saddr; int flowidn_mark; int flowidn_scope; int flowidn_oif; int flowidn_iif; } ;

/* Variables and functions */

__attribute__((used)) static inline int compare_keys(struct flowidn *fl1, struct flowidn *fl2)
{
	return ((fl1->daddr ^ fl2->daddr) |
		(fl1->saddr ^ fl2->saddr) |
		(fl1->flowidn_mark ^ fl2->flowidn_mark) |
		(fl1->flowidn_scope ^ fl2->flowidn_scope) |
		(fl1->flowidn_oif ^ fl2->flowidn_oif) |
		(fl1->flowidn_iif ^ fl2->flowidn_iif)) == 0;
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
          int _len_fl10 = 1;
          struct flowidn * fl1 = (struct flowidn *) malloc(_len_fl10*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl10; _i0++) {
            fl1[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl20 = 1;
          struct flowidn * fl2 = (struct flowidn *) malloc(_len_fl20*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl20; _i0++) {
            fl2[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(fl1,fl2);
          printf("%d\n", benchRet); 
          free(fl1);
          free(fl2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fl10 = 65025;
          struct flowidn * fl1 = (struct flowidn *) malloc(_len_fl10*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl10; _i0++) {
            fl1[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl20 = 65025;
          struct flowidn * fl2 = (struct flowidn *) malloc(_len_fl20*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl20; _i0++) {
            fl2[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(fl1,fl2);
          printf("%d\n", benchRet); 
          free(fl1);
          free(fl2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fl10 = 100;
          struct flowidn * fl1 = (struct flowidn *) malloc(_len_fl10*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl10; _i0++) {
            fl1[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl1[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fl20 = 100;
          struct flowidn * fl2 = (struct flowidn *) malloc(_len_fl20*sizeof(struct flowidn));
          for(int _i0 = 0; _i0 < _len_fl20; _i0++) {
            fl2[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_scope = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_oif = ((-2 * (next_i()%2)) + 1) * next_i();
        fl2[_i0].flowidn_iif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_keys(fl1,fl2);
          printf("%d\n", benchRet); 
          free(fl1);
          free(fl2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
