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
struct mlxsw_sp_acl {struct mlxsw_afk* afk; } ;
struct mlxsw_afk {int dummy; } ;

/* Variables and functions */

struct mlxsw_afk *mlxsw_sp_acl_afk(struct mlxsw_sp_acl *acl)
{
	return acl->afk;
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
          int _len_acl0 = 1;
          struct mlxsw_sp_acl * acl = (struct mlxsw_sp_acl *) malloc(_len_acl0*sizeof(struct mlxsw_sp_acl));
          for(int _i0 = 0; _i0 < _len_acl0; _i0++) {
              int _len_acl__i0__afk0 = 1;
          acl[_i0].afk = (struct mlxsw_afk *) malloc(_len_acl__i0__afk0*sizeof(struct mlxsw_afk));
          for(int _j0 = 0; _j0 < _len_acl__i0__afk0; _j0++) {
            acl[_i0].afk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlxsw_afk * benchRet = mlxsw_sp_acl_afk(acl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_acl0; _aux++) {
          free(acl[_aux].afk);
          }
          free(acl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
