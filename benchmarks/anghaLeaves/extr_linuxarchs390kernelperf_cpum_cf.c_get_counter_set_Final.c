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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u64 ;
typedef  enum cpumf_ctr_set { ____Placeholder_cpumf_ctr_set } cpumf_ctr_set ;

/* Variables and functions */
 int CPUMF_CTR_SET_BASIC ; 
 int CPUMF_CTR_SET_CRYPTO ; 
 int CPUMF_CTR_SET_EXT ; 
 int CPUMF_CTR_SET_MAX ; 
 int CPUMF_CTR_SET_MT_DIAG ; 
 int CPUMF_CTR_SET_USER ; 

__attribute__((used)) static enum cpumf_ctr_set get_counter_set(u64 event)
{
	int set = CPUMF_CTR_SET_MAX;

	if (event < 32)
		set = CPUMF_CTR_SET_BASIC;
	else if (event < 64)
		set = CPUMF_CTR_SET_USER;
	else if (event < 128)
		set = CPUMF_CTR_SET_CRYPTO;
	else if (event < 256)
		set = CPUMF_CTR_SET_EXT;
	else if (event >= 448 && event < 496)
		set = CPUMF_CTR_SET_MT_DIAG;

	return set;
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
          int event = 100;
          enum cpumf_ctr_set benchRet = get_counter_set(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          int event = 255;
          enum cpumf_ctr_set benchRet = get_counter_set(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int event = 10;
          enum cpumf_ctr_set benchRet = get_counter_set(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
