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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int issuer_rm_w; int cm_filter_w; int cm_connection_w; int ulp_filter_w; int ulp_connection_w; } ;
struct qeth_card {TYPE_1__ token; } ;

/* Variables and functions */

__attribute__((used)) static void qeth_init_tokens(struct qeth_card *card)
{
	card->token.issuer_rm_w = 0x00010103UL;
	card->token.cm_filter_w = 0x00010108UL;
	card->token.cm_connection_w = 0x0001010aUL;
	card->token.ulp_filter_w = 0x0001010bUL;
	card->token.ulp_connection_w = 0x0001010dUL;
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

    // big-arr
    case 0:
    {
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card->token.issuer_rm_w = ((-2 * (next_i()%2)) + 1) * next_i();
        card->token.cm_filter_w = ((-2 * (next_i()%2)) + 1) * next_i();
        card->token.cm_connection_w = ((-2 * (next_i()%2)) + 1) * next_i();
        card->token.ulp_filter_w = ((-2 * (next_i()%2)) + 1) * next_i();
        card->token.ulp_connection_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_init_tokens(card);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
