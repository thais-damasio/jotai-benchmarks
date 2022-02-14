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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int IOCCapabilities; } ;
struct MPT3SAS_ADAPTER {TYPE_1__ facts; } ;

/* Variables and functions */
#define  MPI2_DIAG_BUF_TYPE_EXTENDED 130 
#define  MPI2_DIAG_BUF_TYPE_SNAPSHOT 129 
#define  MPI2_DIAG_BUF_TYPE_TRACE 128 
 int MPI2_IOCFACTS_CAPABILITY_DIAG_TRACE_BUFFER ; 
 int MPI2_IOCFACTS_CAPABILITY_EXTENDED_BUFFER ; 
 int MPI2_IOCFACTS_CAPABILITY_SNAPSHOT_BUFFER ; 

__attribute__((used)) static u8
_ctl_diag_capability(struct MPT3SAS_ADAPTER *ioc, u8 buffer_type)
{
	u8 rc = 0;

	switch (buffer_type) {
	case MPI2_DIAG_BUF_TYPE_TRACE:
		if (ioc->facts.IOCCapabilities &
		    MPI2_IOCFACTS_CAPABILITY_DIAG_TRACE_BUFFER)
			rc = 1;
		break;
	case MPI2_DIAG_BUF_TYPE_SNAPSHOT:
		if (ioc->facts.IOCCapabilities &
		    MPI2_IOCFACTS_CAPABILITY_SNAPSHOT_BUFFER)
			rc = 1;
		break;
	case MPI2_DIAG_BUF_TYPE_EXTENDED:
		if (ioc->facts.IOCCapabilities &
		    MPI2_IOCFACTS_CAPABILITY_EXTENDED_BUFFER)
			rc = 1;
	}

	return rc;
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
          int buffer_type = 255;
          int _len_ioc0 = 1;
          struct MPT3SAS_ADAPTER * ioc = (struct MPT3SAS_ADAPTER *) malloc(_len_ioc0*sizeof(struct MPT3SAS_ADAPTER));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
            ioc->facts.IOCCapabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _ctl_diag_capability(ioc,buffer_type);
          printf("%d\n", benchRet); 
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
