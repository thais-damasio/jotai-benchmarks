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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_3__* corhdr; TYPE_2__* nthdr; } ;
struct TYPE_8__ {int MajorRuntimeVersion; scalar_t__ MinorRuntimeVersion; int Flags; } ;
struct TYPE_6__ {scalar_t__ Magic; } ;
struct TYPE_7__ {TYPE_1__ OptionalHeader; } ;
typedef  int /*<<< orphan*/  PEKIND ;
typedef  TYPE_4__ ASSEMBLY ;

/* Variables and functions */
 int COMIMAGE_FLAGS_32BITREQUIRED ; 
 int COMIMAGE_FLAGS_ILONLY ; 
 scalar_t__ IMAGE_NT_OPTIONAL_HDR64_MAGIC ; 
 int /*<<< orphan*/  peAMD64 ; 
 int /*<<< orphan*/  peI386 ; 
 int /*<<< orphan*/  peMSIL ; 
 int /*<<< orphan*/  peNone ; 

PEKIND assembly_get_architecture(ASSEMBLY *assembly)
{
    if ((assembly->corhdr->MajorRuntimeVersion == 2) && (assembly->corhdr->MinorRuntimeVersion == 0))
        return peNone; /* .NET 1.x assembly */

    if (assembly->nthdr->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR64_MAGIC)
        return peAMD64; /* AMD64/IA64 assembly */

    if ((assembly->corhdr->Flags & COMIMAGE_FLAGS_ILONLY) && !(assembly->corhdr->Flags & COMIMAGE_FLAGS_32BITREQUIRED))
        return peMSIL; /* MSIL assembly */

    return peI386; /* x86 assembly */
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
          int _len_assembly0 = 1;
          struct TYPE_9__ * assembly = (struct TYPE_9__ *) malloc(_len_assembly0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_assembly0; _i0++) {
              int _len_assembly__i0__corhdr0 = 1;
          assembly[_i0].corhdr = (struct TYPE_8__ *) malloc(_len_assembly__i0__corhdr0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__corhdr0; _j0++) {
            assembly[_i0].corhdr->MajorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->MinorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->Flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_assembly__i0__nthdr0 = 1;
          assembly[_i0].nthdr = (struct TYPE_7__ *) malloc(_len_assembly__i0__nthdr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__nthdr0; _j0++) {
            assembly[_i0].nthdr->OptionalHeader.Magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = assembly_get_architecture(assembly);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].corhdr);
          }
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].nthdr);
          }
          free(assembly);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_assembly0 = 65025;
          struct TYPE_9__ * assembly = (struct TYPE_9__ *) malloc(_len_assembly0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_assembly0; _i0++) {
              int _len_assembly__i0__corhdr0 = 1;
          assembly[_i0].corhdr = (struct TYPE_8__ *) malloc(_len_assembly__i0__corhdr0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__corhdr0; _j0++) {
            assembly[_i0].corhdr->MajorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->MinorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->Flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_assembly__i0__nthdr0 = 1;
          assembly[_i0].nthdr = (struct TYPE_7__ *) malloc(_len_assembly__i0__nthdr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__nthdr0; _j0++) {
            assembly[_i0].nthdr->OptionalHeader.Magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = assembly_get_architecture(assembly);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].corhdr);
          }
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].nthdr);
          }
          free(assembly);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_assembly0 = 100;
          struct TYPE_9__ * assembly = (struct TYPE_9__ *) malloc(_len_assembly0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_assembly0; _i0++) {
              int _len_assembly__i0__corhdr0 = 1;
          assembly[_i0].corhdr = (struct TYPE_8__ *) malloc(_len_assembly__i0__corhdr0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__corhdr0; _j0++) {
            assembly[_i0].corhdr->MajorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->MinorRuntimeVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        assembly[_i0].corhdr->Flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_assembly__i0__nthdr0 = 1;
          assembly[_i0].nthdr = (struct TYPE_7__ *) malloc(_len_assembly__i0__nthdr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_assembly__i0__nthdr0; _j0++) {
            assembly[_i0].nthdr->OptionalHeader.Magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = assembly_get_architecture(assembly);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].corhdr);
          }
          for(int _aux = 0; _aux < _len_assembly0; _aux++) {
          free(assembly[_aux].nthdr);
          }
          free(assembly);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
