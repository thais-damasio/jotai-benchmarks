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
       1            big-arr-10x\n\
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
struct TYPE_3__ {int dwBuildNumber; } ;
typedef  int /*<<< orphan*/  LPSERVER_INFO_102 ;
typedef  TYPE_1__* LPOSVERSIONINFOEX ;
typedef  int INT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */

INT
GetBuildNumber(BOOL bLocal, LPOSVERSIONINFOEX osvi, LPSERVER_INFO_102 pBuf102)
{
	INT BuildNum = 255;
	if(!bLocal)
	{
		/* FIXME: Use Registry to get value */
	}
	else
	{
		BuildNum = osvi->dwBuildNumber;
	}
	return BuildNum;
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
          int bLocal = 100;
          int pBuf102 = 100;
          int _len_osvi0 = 1;
          struct TYPE_3__ * osvi = (struct TYPE_3__ *) malloc(_len_osvi0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_osvi0; _i0++) {
            osvi[_i0].dwBuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetBuildNumber(bLocal,osvi,pBuf102);
          printf("%d\n", benchRet); 
          free(osvi);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bLocal = 10;
          int pBuf102 = 10;
          int _len_osvi0 = 100;
          struct TYPE_3__ * osvi = (struct TYPE_3__ *) malloc(_len_osvi0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_osvi0; _i0++) {
            osvi[_i0].dwBuildNumber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetBuildNumber(bLocal,osvi,pBuf102);
          printf("%d\n", benchRet); 
          free(osvi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
