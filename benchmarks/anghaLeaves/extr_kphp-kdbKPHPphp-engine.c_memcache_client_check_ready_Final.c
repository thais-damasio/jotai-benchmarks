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
struct connection {scalar_t__ status; int ready; } ;

/* Variables and functions */
 scalar_t__ conn_connecting ; 
 scalar_t__ conn_error ; 
 scalar_t__ conn_none ; 
 scalar_t__ cr_failed ; 
 int cr_notyet ; 
 int cr_ok ; 

int memcache_client_check_ready (struct connection *c) {
  if (c->status == conn_connecting) {
    return c->ready = cr_ok;
  }

  /*assert (c->status != conn_none);*/
  if (c->status == conn_none || c->status == conn_connecting) {
    return c->ready = cr_notyet;
  }
  if (c->status == conn_error || c->ready == cr_failed) {
    return c->ready = cr_failed;
  }
  return c->ready = cr_ok;
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
          int _len_c0 = 1;
          struct connection * c = (struct connection *) malloc(_len_c0*sizeof(struct connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = memcache_client_check_ready(c);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
