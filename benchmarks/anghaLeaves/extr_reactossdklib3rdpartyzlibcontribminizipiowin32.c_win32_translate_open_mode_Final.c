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
typedef  int DWORD ;

/* Variables and functions */
 int CREATE_ALWAYS ; 
 int FILE_SHARE_READ ; 
 int GENERIC_READ ; 
 int GENERIC_WRITE ; 
 int OPEN_EXISTING ; 
 int ZLIB_FILEFUNC_MODE_CREATE ; 
 int ZLIB_FILEFUNC_MODE_EXISTING ; 
 int ZLIB_FILEFUNC_MODE_READ ; 
 int ZLIB_FILEFUNC_MODE_READWRITEFILTER ; 

__attribute__((used)) static void win32_translate_open_mode(int mode,
                                      DWORD* lpdwDesiredAccess,
                                      DWORD* lpdwCreationDisposition,
                                      DWORD* lpdwShareMode,
                                      DWORD* lpdwFlagsAndAttributes)
{
    *lpdwDesiredAccess = *lpdwShareMode = *lpdwFlagsAndAttributes = *lpdwCreationDisposition = 0;

    if ((mode & ZLIB_FILEFUNC_MODE_READWRITEFILTER)==ZLIB_FILEFUNC_MODE_READ)
    {
        *lpdwDesiredAccess = GENERIC_READ;
        *lpdwCreationDisposition = OPEN_EXISTING;
        *lpdwShareMode = FILE_SHARE_READ;
    }
    else if (mode & ZLIB_FILEFUNC_MODE_EXISTING)
    {
        *lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
        *lpdwCreationDisposition = OPEN_EXISTING;
    }
    else if (mode & ZLIB_FILEFUNC_MODE_CREATE)
    {
        *lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
        *lpdwCreationDisposition = CREATE_ALWAYS;
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

    // int-bounds
    case 0:
    {
          int mode = 100;
          int _len_lpdwDesiredAccess0 = 1;
          int * lpdwDesiredAccess = (int *) malloc(_len_lpdwDesiredAccess0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwDesiredAccess0; _i0++) {
            lpdwDesiredAccess[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwCreationDisposition0 = 1;
          int * lpdwCreationDisposition = (int *) malloc(_len_lpdwCreationDisposition0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwCreationDisposition0; _i0++) {
            lpdwCreationDisposition[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwShareMode0 = 1;
          int * lpdwShareMode = (int *) malloc(_len_lpdwShareMode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwShareMode0; _i0++) {
            lpdwShareMode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwFlagsAndAttributes0 = 1;
          int * lpdwFlagsAndAttributes = (int *) malloc(_len_lpdwFlagsAndAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwFlagsAndAttributes0; _i0++) {
            lpdwFlagsAndAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          win32_translate_open_mode(mode,lpdwDesiredAccess,lpdwCreationDisposition,lpdwShareMode,lpdwFlagsAndAttributes);
          free(lpdwDesiredAccess);
          free(lpdwCreationDisposition);
          free(lpdwShareMode);
          free(lpdwFlagsAndAttributes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int _len_lpdwDesiredAccess0 = 65025;
          int * lpdwDesiredAccess = (int *) malloc(_len_lpdwDesiredAccess0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwDesiredAccess0; _i0++) {
            lpdwDesiredAccess[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwCreationDisposition0 = 65025;
          int * lpdwCreationDisposition = (int *) malloc(_len_lpdwCreationDisposition0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwCreationDisposition0; _i0++) {
            lpdwCreationDisposition[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwShareMode0 = 65025;
          int * lpdwShareMode = (int *) malloc(_len_lpdwShareMode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwShareMode0; _i0++) {
            lpdwShareMode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwFlagsAndAttributes0 = 65025;
          int * lpdwFlagsAndAttributes = (int *) malloc(_len_lpdwFlagsAndAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwFlagsAndAttributes0; _i0++) {
            lpdwFlagsAndAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          win32_translate_open_mode(mode,lpdwDesiredAccess,lpdwCreationDisposition,lpdwShareMode,lpdwFlagsAndAttributes);
          free(lpdwDesiredAccess);
          free(lpdwCreationDisposition);
          free(lpdwShareMode);
          free(lpdwFlagsAndAttributes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int _len_lpdwDesiredAccess0 = 100;
          int * lpdwDesiredAccess = (int *) malloc(_len_lpdwDesiredAccess0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwDesiredAccess0; _i0++) {
            lpdwDesiredAccess[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwCreationDisposition0 = 100;
          int * lpdwCreationDisposition = (int *) malloc(_len_lpdwCreationDisposition0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwCreationDisposition0; _i0++) {
            lpdwCreationDisposition[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwShareMode0 = 100;
          int * lpdwShareMode = (int *) malloc(_len_lpdwShareMode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwShareMode0; _i0++) {
            lpdwShareMode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpdwFlagsAndAttributes0 = 100;
          int * lpdwFlagsAndAttributes = (int *) malloc(_len_lpdwFlagsAndAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lpdwFlagsAndAttributes0; _i0++) {
            lpdwFlagsAndAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          win32_translate_open_mode(mode,lpdwDesiredAccess,lpdwCreationDisposition,lpdwShareMode,lpdwFlagsAndAttributes);
          free(lpdwDesiredAccess);
          free(lpdwCreationDisposition);
          free(lpdwShareMode);
          free(lpdwFlagsAndAttributes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
