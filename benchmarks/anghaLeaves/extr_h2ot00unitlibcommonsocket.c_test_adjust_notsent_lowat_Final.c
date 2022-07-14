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
typedef  int /*<<< orphan*/  h2o_socket_t ;
struct TYPE_3__ {unsigned int cur; int ret; int /*<<< orphan*/  call_cnt; } ;
struct TYPE_4__ {TYPE_1__ minimize_notsent_lowat; } ;

/* Variables and functions */
 TYPE_2__ cb_ret_vars ; 

__attribute__((used)) static int test_adjust_notsent_lowat(h2o_socket_t *sock, unsigned notsent_lowat)
{
    cb_ret_vars.minimize_notsent_lowat.cur = notsent_lowat;
    ++cb_ret_vars.minimize_notsent_lowat.call_cnt;
    return cb_ret_vars.minimize_notsent_lowat.ret;
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
          unsigned int notsent_lowat = 100;
          int _len_sock0 = 1;
          int * sock = (int *) malloc(_len_sock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = test_adjust_notsent_lowat(sock,notsent_lowat);
          printf("%d\n", benchRet); 
          free(sock);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int notsent_lowat = 255;
          int _len_sock0 = 65025;
          int * sock = (int *) malloc(_len_sock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = test_adjust_notsent_lowat(sock,notsent_lowat);
          printf("%d\n", benchRet); 
          free(sock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int notsent_lowat = 10;
          int _len_sock0 = 100;
          int * sock = (int *) malloc(_len_sock0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = test_adjust_notsent_lowat(sock,notsent_lowat);
          printf("%d\n", benchRet); 
          free(sock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}