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
typedef  int /*<<< orphan*/  u32 ;
struct nand_bbt_descr {int options; int /*<<< orphan*/  veroffs; } ;
struct mtd_info {scalar_t__ writesize; } ;

/* Variables and functions */
 int NAND_BBT_NO_OOB ; 

__attribute__((used)) static u32 bbt_get_ver_offs(struct mtd_info *mtd, struct nand_bbt_descr *td)
{
	u32 ver_offs = td->veroffs;

	if (!(td->options & NAND_BBT_NO_OOB))
		ver_offs += mtd->writesize;
	return ver_offs;
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
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].writesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_td0 = 1;
          struct nand_bbt_descr * td = (struct nand_bbt_descr *) malloc(_len_td0*sizeof(struct nand_bbt_descr));
          for(int _i0 = 0; _i0 < _len_td0; _i0++) {
            td[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        td[_i0].veroffs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bbt_get_ver_offs(mtd,td);
          printf("%d\n", benchRet); 
          free(mtd);
          free(td);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].writesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_td0 = 65025;
          struct nand_bbt_descr * td = (struct nand_bbt_descr *) malloc(_len_td0*sizeof(struct nand_bbt_descr));
          for(int _i0 = 0; _i0 < _len_td0; _i0++) {
            td[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        td[_i0].veroffs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bbt_get_ver_offs(mtd,td);
          printf("%d\n", benchRet); 
          free(mtd);
          free(td);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].writesize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_td0 = 100;
          struct nand_bbt_descr * td = (struct nand_bbt_descr *) malloc(_len_td0*sizeof(struct nand_bbt_descr));
          for(int _i0 = 0; _i0 < _len_td0; _i0++) {
            td[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
        td[_i0].veroffs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bbt_get_ver_offs(mtd,td);
          printf("%d\n", benchRet); 
          free(mtd);
          free(td);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
