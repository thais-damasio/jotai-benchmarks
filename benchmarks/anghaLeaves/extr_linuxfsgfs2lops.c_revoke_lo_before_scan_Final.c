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
struct gfs2_log_header_host {int /*<<< orphan*/  lh_tail; } ;
struct gfs2_jdesc {int /*<<< orphan*/  jd_replay_tail; scalar_t__ jd_found_revokes; } ;

/* Variables and functions */

__attribute__((used)) static void revoke_lo_before_scan(struct gfs2_jdesc *jd,
				  struct gfs2_log_header_host *head, int pass)
{
	if (pass != 0)
		return;

	jd->jd_found_revokes = 0;
	jd->jd_replay_tail = head->lh_tail;
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
          int pass = 100;
          int _len_jd0 = 1;
          struct gfs2_jdesc * jd = (struct gfs2_jdesc *) malloc(_len_jd0*sizeof(struct gfs2_jdesc));
          for(int _i0 = 0; _i0 < _len_jd0; _i0++) {
            jd[_i0].jd_replay_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        jd[_i0].jd_found_revokes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_head0 = 1;
          struct gfs2_log_header_host * head = (struct gfs2_log_header_host *) malloc(_len_head0*sizeof(struct gfs2_log_header_host));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].lh_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          revoke_lo_before_scan(jd,head,pass);
          free(jd);
          free(head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
