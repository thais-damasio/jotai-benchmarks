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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mlx5e_priv {TYPE_2__* mdev; } ;
struct mlx5_core_health {scalar_t__ sick; } ;
struct TYPE_3__ {struct mlx5_core_health health; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;

/* Variables and functions */

__attribute__((used)) static int mlx5e_test_health_info(struct mlx5e_priv *priv)
{
	struct mlx5_core_health *health = &priv->mdev->priv.health;

	return health->sick ? 1 : 0;
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
          int _len_priv0 = 1;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__mdev0 = 1;
          priv[_i0].mdev = (struct TYPE_4__ *) malloc(_len_priv__i0__mdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__mdev0; _j0++) {
            priv[_i0].mdev->priv.health.sick = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlx5e_test_health_info(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].mdev);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__mdev0 = 1;
          priv[_i0].mdev = (struct TYPE_4__ *) malloc(_len_priv__i0__mdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__mdev0; _j0++) {
            priv[_i0].mdev->priv.health.sick = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlx5e_test_health_info(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].mdev);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__mdev0 = 1;
          priv[_i0].mdev = (struct TYPE_4__ *) malloc(_len_priv__i0__mdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__mdev0; _j0++) {
            priv[_i0].mdev->priv.health.sick = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlx5e_test_health_info(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].mdev);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
