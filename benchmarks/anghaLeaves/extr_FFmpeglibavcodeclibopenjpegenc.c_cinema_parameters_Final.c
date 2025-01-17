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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int cp_tdx; int cp_tdy; char tp_flag; int tp_on; int cblockw_init; int cblockh_init; int csty; int roi_compno; int subsampling_dx; int subsampling_dy; int irreversible; int tcp_mct; int /*<<< orphan*/  prog_order; scalar_t__ image_offset_y0; scalar_t__ image_offset_x0; scalar_t__ cp_ty0; scalar_t__ cp_tx0; scalar_t__ tile_size_on; } ;
typedef  TYPE_1__ opj_cparameters_t ;

/* Variables and functions */
 int /*<<< orphan*/  OPJ_CPRL ; 

__attribute__((used)) static void cinema_parameters(opj_cparameters_t *p)
{
    p->tile_size_on = 0;
    p->cp_tdx = 1;
    p->cp_tdy = 1;

    /* Tile part */
    p->tp_flag = 'C';
    p->tp_on = 1;

    /* Tile and Image shall be at (0, 0) */
    p->cp_tx0 = 0;
    p->cp_ty0 = 0;
    p->image_offset_x0 = 0;
    p->image_offset_y0 = 0;

    /* Codeblock size= 32 * 32 */
    p->cblockw_init = 32;
    p->cblockh_init = 32;
    p->csty |= 0x01;

    /* The progression order shall be CPRL */
    p->prog_order = OPJ_CPRL;

    /* No ROI */
    p->roi_compno = -1;

    /* No subsampling */
    p->subsampling_dx = 1;
    p->subsampling_dy = 1;

    /* 9-7 transform */
    p->irreversible = 1;

    p->tcp_mct = 1;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].cp_tdx = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cp_tdy = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tp_on = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cblockw_init = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cblockh_init = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].csty = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].roi_compno = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].subsampling_dx = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].subsampling_dy = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].irreversible = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tcp_mct = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prog_order = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].image_offset_y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].image_offset_x0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cp_ty0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cp_tx0 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tile_size_on = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cinema_parameters(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
