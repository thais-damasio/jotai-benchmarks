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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  initiator; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ servparams; int /*<<< orphan*/  imagepair; } ;
struct fc_prli_s {TYPE_2__ parampage; } ;
typedef  enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;

/* Variables and functions */
 int FC_PARSE_FAILURE ; 
 int FC_PARSE_OK ; 
 scalar_t__ FC_TYPE_FCP ; 

enum fc_parse_status
fc_prli_parse(struct fc_prli_s *prli)
{
	if (prli->parampage.type != FC_TYPE_FCP)
		return FC_PARSE_FAILURE;

	if (!prli->parampage.imagepair)
		return FC_PARSE_FAILURE;

	if (!prli->parampage.servparams.initiator)
		return FC_PARSE_FAILURE;

	return FC_PARSE_OK;
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
          int _len_prli0 = 1;
          struct fc_prli_s * prli = (struct fc_prli_s *) malloc(_len_prli0*sizeof(struct fc_prli_s));
          for(int _i0 = 0; _i0 < _len_prli0; _i0++) {
            prli->parampage.type = ((-2 * (next_i()%2)) + 1) * next_i();
        prli->parampage.servparams.initiator = ((-2 * (next_i()%2)) + 1) * next_i();
        prli->parampage.imagepair = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fc_parse_status benchRet = fc_prli_parse(prli);
          printf("{{other_type}} %p\n", &benchRet); 
          free(prli);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
