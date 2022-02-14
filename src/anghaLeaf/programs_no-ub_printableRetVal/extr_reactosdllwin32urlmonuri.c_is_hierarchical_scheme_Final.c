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

/* Type definitions */
typedef  scalar_t__ URL_SCHEME ;
typedef  int BOOL ;

/* Variables and functions */
 scalar_t__ URL_SCHEME_FILE ; 
 scalar_t__ URL_SCHEME_FTP ; 
 scalar_t__ URL_SCHEME_GOPHER ; 
 scalar_t__ URL_SCHEME_HTTP ; 
 scalar_t__ URL_SCHEME_HTTPS ; 
 scalar_t__ URL_SCHEME_NNTP ; 
 scalar_t__ URL_SCHEME_RES ; 
 scalar_t__ URL_SCHEME_TELNET ; 
 scalar_t__ URL_SCHEME_WAIS ; 

__attribute__((used)) static inline BOOL is_hierarchical_scheme(URL_SCHEME type) {
    return(type == URL_SCHEME_HTTP || type == URL_SCHEME_FTP ||
           type == URL_SCHEME_GOPHER || type == URL_SCHEME_NNTP ||
           type == URL_SCHEME_TELNET || type == URL_SCHEME_WAIS ||
           type == URL_SCHEME_FILE || type == URL_SCHEME_HTTPS ||
           type == URL_SCHEME_RES);
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
          long type = 255;
          int benchRet = is_hierarchical_scheme(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}