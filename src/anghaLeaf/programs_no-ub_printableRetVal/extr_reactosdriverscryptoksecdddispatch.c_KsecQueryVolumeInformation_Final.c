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
struct TYPE_2__ {scalar_t__ Characteristics; int /*<<< orphan*/  DeviceType; } ;
typedef  scalar_t__ PVOID ;
typedef  int* PSIZE_T ;
typedef  TYPE_1__* PFILE_FS_DEVICE_INFORMATION ;
typedef  int /*<<< orphan*/  NTSTATUS ;
typedef  scalar_t__ FS_INFORMATION_CLASS ;
typedef  int /*<<< orphan*/  FILE_FS_DEVICE_INFORMATION ;

/* Variables and functions */
 int /*<<< orphan*/  FILE_DEVICE_NULL ; 
 scalar_t__ FileFsDeviceInformation ; 
 int /*<<< orphan*/  STATUS_INFO_LENGTH_MISMATCH ; 
 int /*<<< orphan*/  STATUS_INVALID_INFO_CLASS ; 
 int /*<<< orphan*/  STATUS_SUCCESS ; 

__attribute__((used)) static
NTSTATUS
KsecQueryVolumeInformation(
    PVOID InfoBuffer,
    FS_INFORMATION_CLASS FsInformationClass,
    PSIZE_T BufferLength)
{
    PFILE_FS_DEVICE_INFORMATION DeviceInformation;

    /* Only FileFsDeviceInformation is supported */
    if (FsInformationClass != FileFsDeviceInformation)
    {
        return STATUS_INVALID_INFO_CLASS;
    }

    /* Validate buffer size */
    if (*BufferLength < sizeof(FILE_FS_DEVICE_INFORMATION))
    {
        *BufferLength = sizeof(FILE_FS_DEVICE_INFORMATION);
        return STATUS_INFO_LENGTH_MISMATCH;
    }

    /* Fill the structure */
    DeviceInformation = (PFILE_FS_DEVICE_INFORMATION)InfoBuffer;
    DeviceInformation->DeviceType = FILE_DEVICE_NULL;
    DeviceInformation->Characteristics = 0;
    *BufferLength = sizeof(FILE_FS_DEVICE_INFORMATION);

    return STATUS_SUCCESS;
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
          long InfoBuffer = 255;
          long FsInformationClass = 255;
          int _len_BufferLength0 = 65025;
          int * BufferLength = (int *) malloc(_len_BufferLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BufferLength0; _i0++) {
            BufferLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = KsecQueryVolumeInformation(InfoBuffer,FsInformationClass,BufferLength);
          printf("%d\n", benchRet); 
          free(BufferLength);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}