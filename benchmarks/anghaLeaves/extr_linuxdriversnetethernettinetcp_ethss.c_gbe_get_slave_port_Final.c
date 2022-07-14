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
typedef  int u32 ;
struct gbe_priv {scalar_t__ host_port; } ;

/* Variables and functions */

__attribute__((used)) static int gbe_get_slave_port(struct gbe_priv *priv, u32 slave_num)
{
	if (priv->host_port == 0)
		return slave_num + 1;

	return slave_num;
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
          int slave_num = 100;
          int _len_priv0 = 1;
          struct gbe_priv * priv = (struct gbe_priv *) malloc(_len_priv0*sizeof(struct gbe_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].host_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gbe_get_slave_port(priv,slave_num);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slave_num = 255;
          int _len_priv0 = 65025;
          struct gbe_priv * priv = (struct gbe_priv *) malloc(_len_priv0*sizeof(struct gbe_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].host_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gbe_get_slave_port(priv,slave_num);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slave_num = 10;
          int _len_priv0 = 100;
          struct gbe_priv * priv = (struct gbe_priv *) malloc(_len_priv0*sizeof(struct gbe_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].host_port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gbe_get_slave_port(priv,slave_num);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}