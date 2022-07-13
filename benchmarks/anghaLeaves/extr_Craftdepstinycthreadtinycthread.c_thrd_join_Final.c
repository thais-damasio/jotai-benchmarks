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
typedef  int /*<<< orphan*/  thrd_t ;

/* Variables and functions */
 int thrd_success ; 

int thrd_join(thrd_t thr, int *res)
{
#if defined(_TTHREAD_WIN32_)
  if (WaitForSingleObject(thr, INFINITE) == WAIT_FAILED)
  {
    return thrd_error;
  }
  if (res != NULL)
  {
    DWORD dwRes;
    GetExitCodeThread(thr, &dwRes);
    *res = dwRes;
  }
#elif defined(_TTHREAD_POSIX_)
  void *pres;
  int ires = 0;
  if (pthread_join(thr, &pres) != 0)
  {
    return thrd_error;
  }
  if (pres != NULL)
  {
    ires = *(int*)pres;
    free(pres);
  }
  if (res != NULL)
  {
    *res = ires;
  }
#endif
  return thrd_success;
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
          int thr = 100;
          int _len_res0 = 1;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thrd_join(thr,res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          int thr = 255;
          int _len_res0 = 65025;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thrd_join(thr,res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int thr = 10;
          int _len_res0 = 100;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thrd_join(thr,res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
