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
struct tcphdr {int th_flags; } ;
struct tcpcb {int t_flags; int t_unacksegs; } ;

/* Variables and functions */
 int TF_RXWIN0SENT ; 
 int TF_STRETCHACK ; 
 int TH_PUSH ; 
 int maxseg_unacked ; 
 int tcp_delack_enabled ; 

int
tcp_cc_delay_ack(struct tcpcb *tp, struct tcphdr *th)
{
	switch (tcp_delack_enabled) {
	    case 1:
	    case 2:
		if ((tp->t_flags & TF_RXWIN0SENT) == 0 &&
		    (th->th_flags & TH_PUSH) == 0 &&
		    (tp->t_unacksegs == 1))
			return(1);
		break;  
	    case 3:
		if ((tp->t_flags & TF_RXWIN0SENT) == 0 &&
		    (th->th_flags & TH_PUSH) == 0 &&
		    ((tp->t_unacksegs == 1) ||
		    ((tp->t_flags & TF_STRETCHACK) != 0 &&
			tp->t_unacksegs < (maxseg_unacked))))
			return(1);
		break;
	}
	return(0);
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_unacksegs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 1;
          struct tcphdr * th = (struct tcphdr *) malloc(_len_th0*sizeof(struct tcphdr));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].th_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_cc_delay_ack(tp,th);
          printf("%d\n", benchRet); 
          free(tp);
          free(th);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tp0 = 65025;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_unacksegs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 65025;
          struct tcphdr * th = (struct tcphdr *) malloc(_len_th0*sizeof(struct tcphdr));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].th_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_cc_delay_ack(tp,th);
          printf("%d\n", benchRet); 
          free(tp);
          free(th);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tp0 = 100;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_unacksegs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_th0 = 100;
          struct tcphdr * th = (struct tcphdr *) malloc(_len_th0*sizeof(struct tcphdr));
          for(int _i0 = 0; _i0 < _len_th0; _i0++) {
            th[_i0].th_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_cc_delay_ack(tp,th);
          printf("%d\n", benchRet); 
          free(tp);
          free(th);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
