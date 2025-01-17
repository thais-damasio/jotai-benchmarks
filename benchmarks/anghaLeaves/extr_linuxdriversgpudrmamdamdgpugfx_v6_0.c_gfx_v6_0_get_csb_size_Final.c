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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {scalar_t__ reg_count; int /*<<< orphan*/ * extent; } ;
struct TYPE_3__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;

/* Variables and functions */
 scalar_t__ SECT_CONTEXT ; 

__attribute__((used)) static u32 gfx_v6_0_get_csb_size(struct amdgpu_device *adev)
{
	u32 count = 0;
	const struct cs_section_def *sect = NULL;
	const struct cs_extent_def *ext = NULL;

	if (adev->gfx.rlc.cs_data == NULL)
		return 0;

	/* begin clear state */
	count += 2;
	/* context control state */
	count += 3;

	for (sect = adev->gfx.rlc.cs_data; sect->section != NULL; ++sect) {
		for (ext = sect->section; ext->extent != NULL; ++ext) {
			if (sect->id == SECT_CONTEXT)
				count += 2 + ext->reg_count;
			else
				return 0;
		}
	}
	/* pa_sc_raster_config */
	count += 3;
	/* end clear state */
	count += 2;
	/* clear state */
	count += 2;

	return count;
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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              int _len_adev__i0__gfx_rlc_cs_data0 = 1;
          adev[_i0].gfx.rlc.cs_data = (struct cs_section_def *) malloc(_len_adev__i0__gfx_rlc_cs_data0*sizeof(struct cs_section_def));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_rlc_cs_data0; _j0++) {
            adev[_i0].gfx.rlc.cs_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_rlc_cs_data_section0 = 1;
          adev[_i0].gfx.rlc.cs_data->section = (struct cs_extent_def *) malloc(_len_adev__i0__gfx_rlc_cs_data_section0*sizeof(struct cs_extent_def));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_rlc_cs_data_section0; _j0++) {
            adev[_i0].gfx.rlc.cs_data->section->reg_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__gfx_rlc_cs_data_section_extent0 = 1;
          adev[_i0].gfx.rlc.cs_data->section->extent = (int *) malloc(_len_adev__i0__gfx_rlc_cs_data_section_extent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__gfx_rlc_cs_data_section_extent0; _j0++) {
            adev[_i0].gfx.rlc.cs_data->section->extent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = gfx_v6_0_get_csb_size(adev);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
