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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ispstat {TYPE_1__* buf; } ;
struct TYPE_2__ {int empty; } ;

/* Variables and functions */
 int STAT_MAX_BUFS ; 

__attribute__((used)) static void isp_stat_buf_clear(struct ispstat *stat)
{
	int i;

	for (i = 0; i < STAT_MAX_BUFS; i++)
		stat->buf[i].empty = 1;
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
          int _len_stat0 = 1;
          struct ispstat * stat = (struct ispstat *) malloc(_len_stat0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
              int _len_stat__i0__buf0 = 1;
          stat[_i0].buf = (struct TYPE_2__ *) malloc(_len_stat__i0__buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_stat__i0__buf0; _j0++) {
            stat[_i0].buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isp_stat_buf_clear(stat);
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].buf);
          }
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
