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
typedef  scalar_t__ u8 ;
struct phy_dm_struct {int dummy; } ;

/* Variables and functions */
 scalar_t__ ODM_RATE54M ; 
 scalar_t__ ODM_RATEMCS0 ; 
 scalar_t__ ODM_RATEMCS31 ; 
 scalar_t__ ODM_RATEVHTSS1MCS9 ; 
 scalar_t__ ODM_RATEVHTSS2MCS9 ; 
 scalar_t__ ODM_RATEVHTSS3MCS9 ; 
 scalar_t__ ODM_RATEVHTSS4MCS9 ; 

__attribute__((used)) static u8 phydm_rate_to_num_ss(struct phy_dm_struct *dm, u8 data_rate)
{
	u8 num_ss = 1;

	if (data_rate <= ODM_RATE54M)
		num_ss = 1;
	else if (data_rate <= ODM_RATEMCS31)
		num_ss = ((data_rate - ODM_RATEMCS0) >> 3) + 1;
	else if (data_rate <= ODM_RATEVHTSS1MCS9)
		num_ss = 1;
	else if (data_rate <= ODM_RATEVHTSS2MCS9)
		num_ss = 2;
	else if (data_rate <= ODM_RATEVHTSS3MCS9)
		num_ss = 3;
	else if (data_rate <= ODM_RATEVHTSS4MCS9)
		num_ss = 4;

	return num_ss;
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
          long data_rate = 255;
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = phydm_rate_to_num_ss(dm,data_rate);
          printf("%ld\n", benchRet); 
          free(dm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
