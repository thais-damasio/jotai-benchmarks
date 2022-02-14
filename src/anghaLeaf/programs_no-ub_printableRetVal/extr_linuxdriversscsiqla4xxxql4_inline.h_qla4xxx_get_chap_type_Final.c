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
struct ql4_chap_table {int flags; } ;

/* Variables and functions */
 int BIDI_CHAP ; 
 int BIT_7 ; 
 int LOCAL_CHAP ; 

__attribute__((used)) static inline int qla4xxx_get_chap_type(struct ql4_chap_table *chap_entry)
{
	int type;

	if (chap_entry->flags & BIT_7)
		type = LOCAL_CHAP;
	else
		type = BIDI_CHAP;

	return type;
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
          int _len_chap_entry0 = 1;
          struct ql4_chap_table * chap_entry = (struct ql4_chap_table *) malloc(_len_chap_entry0*sizeof(struct ql4_chap_table));
          for(int _i0 = 0; _i0 < _len_chap_entry0; _i0++) {
            chap_entry->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla4xxx_get_chap_type(chap_entry);
          printf("%d\n", benchRet); 
          free(chap_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
