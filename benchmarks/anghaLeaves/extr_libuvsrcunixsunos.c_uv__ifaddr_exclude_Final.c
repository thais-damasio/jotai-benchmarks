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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ifaddrs {int ifa_flags; TYPE_1__* ifa_addr; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;

/* Variables and functions */
 scalar_t__ AF_INET ; 
 scalar_t__ AF_INET6 ; 
 int IFF_RUNNING ; 
 int IFF_UP ; 

__attribute__((used)) static int uv__ifaddr_exclude(struct ifaddrs *ent) {
  if (!((ent->ifa_flags & IFF_UP) && (ent->ifa_flags & IFF_RUNNING)))
    return 1;
  if (ent->ifa_addr == NULL)
    return 1;
  if (ent->ifa_addr->sa_family != AF_INET &&
      ent->ifa_addr->sa_family != AF_INET6)
    return 1;
  return 0;
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
          int _len_ent0 = 1;
          struct ifaddrs * ent = (struct ifaddrs *) malloc(_len_ent0*sizeof(struct ifaddrs));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ifa_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__ifa_addr0 = 1;
          ent[_i0].ifa_addr = (struct TYPE_2__ *) malloc(_len_ent__i0__ifa_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ent__i0__ifa_addr0; _j0++) {
            ent[_i0].ifa_addr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = uv__ifaddr_exclude(ent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].ifa_addr);
          }
          free(ent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ent0 = 65025;
          struct ifaddrs * ent = (struct ifaddrs *) malloc(_len_ent0*sizeof(struct ifaddrs));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ifa_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__ifa_addr0 = 1;
          ent[_i0].ifa_addr = (struct TYPE_2__ *) malloc(_len_ent__i0__ifa_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ent__i0__ifa_addr0; _j0++) {
            ent[_i0].ifa_addr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = uv__ifaddr_exclude(ent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].ifa_addr);
          }
          free(ent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ent0 = 100;
          struct ifaddrs * ent = (struct ifaddrs *) malloc(_len_ent0*sizeof(struct ifaddrs));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].ifa_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__ifa_addr0 = 1;
          ent[_i0].ifa_addr = (struct TYPE_2__ *) malloc(_len_ent__i0__ifa_addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ent__i0__ifa_addr0; _j0++) {
            ent[_i0].ifa_addr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = uv__ifaddr_exclude(ent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].ifa_addr);
          }
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
