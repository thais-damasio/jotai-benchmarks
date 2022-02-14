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
typedef  int /*<<< orphan*/  WINSPOOL_PRINTER_HANDLE ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcEnumPrinterData(WINSPOOL_PRINTER_HANDLE hPrinter, DWORD dwIndex, WCHAR* pValueName, DWORD cbValueName, DWORD* pcbValueName, DWORD* pType, BYTE* pData, DWORD cbData, DWORD* pcbData)
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

    // big-arr
    case 0:
    {
          int hPrinter = 255;
          int dwIndex = 255;
          int cbValueName = 255;
          int cbData = 255;
          int _len_pValueName0 = 65025;
          int * pValueName = (int *) malloc(_len_pValueName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pValueName0; _i0++) {
            pValueName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbValueName0 = 65025;
          int * pcbValueName = (int *) malloc(_len_pcbValueName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbValueName0; _i0++) {
            pcbValueName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pType0 = 65025;
          int * pType = (int *) malloc(_len_pType0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pType0; _i0++) {
            pType[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pData0 = 65025;
          int * pData = (int *) malloc(_len_pData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pData0; _i0++) {
            pData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbData0 = 65025;
          int * pcbData = (int *) malloc(_len_pcbData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbData0; _i0++) {
            pcbData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcEnumPrinterData(hPrinter,dwIndex,pValueName,cbValueName,pcbValueName,pType,pData,cbData,pcbData);
          printf("%d\n", benchRet); 
          free(pValueName);
          free(pcbValueName);
          free(pType);
          free(pData);
          free(pcbData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
