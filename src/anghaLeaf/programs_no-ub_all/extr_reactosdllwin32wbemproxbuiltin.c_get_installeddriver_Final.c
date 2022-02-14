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
typedef  char WCHAR ;
typedef  scalar_t__ UINT ;

/* Variables and functions */
 scalar_t__ HW_VENDOR_AMD ; 
 scalar_t__ HW_VENDOR_INTEL ; 
 scalar_t__ HW_VENDOR_NVIDIA ; 

__attribute__((used)) static const WCHAR *get_installeddriver( UINT vendorid )
{
    static const WCHAR driver_amdW[] = {'a','t','i','c','f','x','3','2','.','d','l','l',0};
    static const WCHAR driver_intelW[] = {'i','g','d','u','m','d','i','m','3','2','.','d','l','l',0};
    static const WCHAR driver_nvidiaW[] = {'n','v','d','3','d','u','m','.','d','l','l',0};
    static const WCHAR driver_wineW[] = {'w','i','n','e','.','d','l','l',0};

    /* FIXME: wined3d has a better table, but we cannot access this information through dxgi */

    if (vendorid == HW_VENDOR_AMD)
        return driver_amdW;
    else if (vendorid == HW_VENDOR_NVIDIA)
        return driver_nvidiaW;
    else if (vendorid == HW_VENDOR_INTEL)
        return driver_intelW;
    return driver_wineW;
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
          long vendorid = 255;
          const char * benchRet = get_installeddriver(vendorid);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
