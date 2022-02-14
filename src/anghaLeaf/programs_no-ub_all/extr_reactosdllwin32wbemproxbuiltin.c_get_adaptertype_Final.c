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
typedef  int DWORD ;

/* Variables and functions */
#define  IF_TYPE_ETHERNET_CSMACD 131 
#define  IF_TYPE_IEEE1394 130 
#define  IF_TYPE_IEEE80211 129 
#define  IF_TYPE_TUNNEL 128 

__attribute__((used)) static const WCHAR *get_adaptertype( DWORD type, int *physical )
{
    static const WCHAR ethernetW[] = {'E','t','h','e','r','n','e','t',' ','8','0','2','.','3',0};
    static const WCHAR wirelessW[] = {'W','i','r','e','l','e','s','s',0};
    static const WCHAR firewireW[] = {'1','3','9','4',0};
    static const WCHAR tunnelW[]   = {'T','u','n','n','e','l',0};

    switch (type)
    {
    case IF_TYPE_ETHERNET_CSMACD: *physical = -1; return ethernetW;
    case IF_TYPE_IEEE80211:       *physical = -1; return wirelessW;
    case IF_TYPE_IEEE1394:        *physical = -1; return firewireW;
    case IF_TYPE_TUNNEL:          *physical = 0; return tunnelW;
    default:                      *physical = 0; return NULL;
    }
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
          int type = 255;
          int _len_physical0 = 65025;
          int * physical = (int *) malloc(_len_physical0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_physical0; _i0++) {
            physical[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = get_adaptertype(type,physical);
          printf("{{other_type}} %p\n", &benchRet); 
          free(physical);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}