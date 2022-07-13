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
typedef  int u8 ;
struct phy_status_rpt_8812 {int pwdb_all; } ;
struct phy_dm_struct {int /*<<< orphan*/  is_in_hct_test; } ;
struct dm_phy_status_info {int rx_pwdb_all; } ;

/* Variables and functions */

__attribute__((used)) static inline u8
phydm_get_signal_quality_8812(struct dm_phy_status_info *phy_info,
			      struct phy_dm_struct *dm,
			      struct phy_status_rpt_8812 *phy_sta_rpt)
{
	u8 sq_rpt;

	if (phy_info->rx_pwdb_all > 40 && !dm->is_in_hct_test)
		return 100;

	sq_rpt = phy_sta_rpt->pwdb_all;

	if (sq_rpt > 64)
		return 0;
	else if (sq_rpt < 20)
		return 100;
	else
		return ((64 - sq_rpt) * 100) / 44;
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
          int _len_phy_info0 = 1;
          struct dm_phy_status_info * phy_info = (struct dm_phy_status_info *) malloc(_len_phy_info0*sizeof(struct dm_phy_status_info));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
            phy_info[_i0].rx_pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].is_in_hct_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_sta_rpt0 = 1;
          struct phy_status_rpt_8812 * phy_sta_rpt = (struct phy_status_rpt_8812 *) malloc(_len_phy_sta_rpt0*sizeof(struct phy_status_rpt_8812));
          for(int _i0 = 0; _i0 < _len_phy_sta_rpt0; _i0++) {
            phy_sta_rpt[_i0].pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phydm_get_signal_quality_8812(phy_info,dm,phy_sta_rpt);
          printf("%d\n", benchRet); 
          free(phy_info);
          free(dm);
          free(phy_sta_rpt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phy_info0 = 65025;
          struct dm_phy_status_info * phy_info = (struct dm_phy_status_info *) malloc(_len_phy_info0*sizeof(struct dm_phy_status_info));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
            phy_info[_i0].rx_pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm0 = 65025;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].is_in_hct_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_sta_rpt0 = 65025;
          struct phy_status_rpt_8812 * phy_sta_rpt = (struct phy_status_rpt_8812 *) malloc(_len_phy_sta_rpt0*sizeof(struct phy_status_rpt_8812));
          for(int _i0 = 0; _i0 < _len_phy_sta_rpt0; _i0++) {
            phy_sta_rpt[_i0].pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phydm_get_signal_quality_8812(phy_info,dm,phy_sta_rpt);
          printf("%d\n", benchRet); 
          free(phy_info);
          free(dm);
          free(phy_sta_rpt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phy_info0 = 100;
          struct dm_phy_status_info * phy_info = (struct dm_phy_status_info *) malloc(_len_phy_info0*sizeof(struct dm_phy_status_info));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
            phy_info[_i0].rx_pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm0 = 100;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].is_in_hct_test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_sta_rpt0 = 100;
          struct phy_status_rpt_8812 * phy_sta_rpt = (struct phy_status_rpt_8812 *) malloc(_len_phy_sta_rpt0*sizeof(struct phy_status_rpt_8812));
          for(int _i0 = 0; _i0 < _len_phy_sta_rpt0; _i0++) {
            phy_sta_rpt[_i0].pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phydm_get_signal_quality_8812(phy_info,dm,phy_sta_rpt);
          printf("%d\n", benchRet); 
          free(phy_info);
          free(dm);
          free(phy_sta_rpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
