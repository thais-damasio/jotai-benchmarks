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
typedef  int /*<<< orphan*/  WINSPOOL_HANDLE ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcEnumPrinterDrivers(WINSPOOL_HANDLE pName, WCHAR* pEnvironment, DWORD Level, BYTE* pDrivers, DWORD cbBuf, DWORD* pcbNeeded, DWORD* pcReturned)
{
    UNIMPLEMENTED;
    return ERROR_INVALID_FUNCTION;
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
          int pName = 100;
          int Level = 100;
          int cbBuf = 100;
          int _len_pEnvironment0 = 1;
          int * pEnvironment = (int *) malloc(_len_pEnvironment0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEnvironment0; _i0++) {
            pEnvironment[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDrivers0 = 1;
          int * pDrivers = (int *) malloc(_len_pDrivers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDrivers0; _i0++) {
            pDrivers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbNeeded0 = 1;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcReturned0 = 1;
          int * pcReturned = (int *) malloc(_len_pcReturned0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcReturned0; _i0++) {
            pcReturned[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcEnumPrinterDrivers(pName,pEnvironment,Level,pDrivers,cbBuf,pcbNeeded,pcReturned);
          printf("%d\n", benchRet); 
          free(pEnvironment);
          free(pDrivers);
          free(pcbNeeded);
          free(pcReturned);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pName = 255;
          int Level = 255;
          int cbBuf = 255;
          int _len_pEnvironment0 = 65025;
          int * pEnvironment = (int *) malloc(_len_pEnvironment0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEnvironment0; _i0++) {
            pEnvironment[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDrivers0 = 65025;
          int * pDrivers = (int *) malloc(_len_pDrivers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDrivers0; _i0++) {
            pDrivers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbNeeded0 = 65025;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcReturned0 = 65025;
          int * pcReturned = (int *) malloc(_len_pcReturned0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcReturned0; _i0++) {
            pcReturned[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcEnumPrinterDrivers(pName,pEnvironment,Level,pDrivers,cbBuf,pcbNeeded,pcReturned);
          printf("%d\n", benchRet); 
          free(pEnvironment);
          free(pDrivers);
          free(pcbNeeded);
          free(pcReturned);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pName = 10;
          int Level = 10;
          int cbBuf = 10;
          int _len_pEnvironment0 = 100;
          int * pEnvironment = (int *) malloc(_len_pEnvironment0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pEnvironment0; _i0++) {
            pEnvironment[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDrivers0 = 100;
          int * pDrivers = (int *) malloc(_len_pDrivers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDrivers0; _i0++) {
            pDrivers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbNeeded0 = 100;
          int * pcbNeeded = (int *) malloc(_len_pcbNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbNeeded0; _i0++) {
            pcbNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcReturned0 = 100;
          int * pcReturned = (int *) malloc(_len_pcReturned0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcReturned0; _i0++) {
            pcReturned[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcEnumPrinterDrivers(pName,pEnvironment,Level,pDrivers,cbBuf,pcbNeeded,pcReturned);
          printf("%d\n", benchRet); 
          free(pEnvironment);
          free(pDrivers);
          free(pcbNeeded);
          free(pcReturned);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
