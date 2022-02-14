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
struct se_cmd {int prot_op; } ;

/* Variables and functions */
#define  TARGET_PROT_DIN_INSERT 133 
#define  TARGET_PROT_DIN_PASS 132 
#define  TARGET_PROT_DIN_STRIP 131 
#define  TARGET_PROT_DOUT_INSERT 130 
#define  TARGET_PROT_DOUT_PASS 129 
#define  TARGET_PROT_DOUT_STRIP 128 

__attribute__((used)) static inline int
qla_tgt_ref_mask_check(struct se_cmd *se_cmd)
{
	switch (se_cmd->prot_op) {
	case TARGET_PROT_DIN_INSERT:
	case TARGET_PROT_DOUT_INSERT:
	case TARGET_PROT_DIN_STRIP:
	case TARGET_PROT_DOUT_STRIP:
	case TARGET_PROT_DIN_PASS:
	case TARGET_PROT_DOUT_PASS:
	    return 1;
	default:
	    return 0;
	}
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

    // big-arr
    case 0:
    {
          int _len_se_cmd0 = 1;
          struct se_cmd * se_cmd = (struct se_cmd *) malloc(_len_se_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_se_cmd0; _i0++) {
            se_cmd->prot_op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla_tgt_ref_mask_check(se_cmd);
          printf("%d\n", benchRet); 
          free(se_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
