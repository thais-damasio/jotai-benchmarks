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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  JAVA_INT ;

/* Variables and functions */
 int /*<<< orphan*/  _STATIC_org_apache_harmony_luni_platform_IFileSystem_O_NONBLOCK ; 

void org_apache_harmony_luni_platform_IFileSystem_PUT_O_NONBLOCK(JAVA_INT v)
{
    _STATIC_org_apache_harmony_luni_platform_IFileSystem_O_NONBLOCK = v;
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
          int v = 100;
          org_apache_harmony_luni_platform_IFileSystem_PUT_O_NONBLOCK(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int v = 255;
          org_apache_harmony_luni_platform_IFileSystem_PUT_O_NONBLOCK(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int v = 10;
          org_apache_harmony_luni_platform_IFileSystem_PUT_O_NONBLOCK(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
