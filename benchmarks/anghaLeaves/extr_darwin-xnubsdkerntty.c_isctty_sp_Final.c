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
struct tty {struct session* t_session; } ;
struct session {int dummy; } ;
typedef  TYPE_1__* proc_t ;
struct TYPE_3__ {int p_flag; } ;

/* Variables and functions */
 int P_CONTROLT ; 

__attribute__((used)) static int
isctty_sp(proc_t p, struct tty  *tp, struct session *sessp)
{
	return(sessp == tp->t_session && p->p_flag & P_CONTROLT);

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
            p[_i0].p_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tp0 = 1;
          struct tty * tp = (struct tty *) malloc(_len_tp0*sizeof(struct tty));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
              int _len_tp__i0__t_session0 = 1;
          tp[_i0].t_session = (struct session *) malloc(_len_tp__i0__t_session0*sizeof(struct session));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_session0; _j0++) {
            tp[_i0].t_session->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sessp0 = 1;
          struct session * sessp = (struct session *) malloc(_len_sessp0*sizeof(struct session));
          for(int _i0 = 0; _i0 < _len_sessp0; _i0++) {
            sessp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isctty_sp(p,tp,sessp);
          printf("%d\n", benchRet); 
          free(p);
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].t_session);
          }
          free(tp);
          free(sessp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
