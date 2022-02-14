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
typedef  int STATSD_APP_CHART_DIM_VALUE_TYPE ;

/* Variables and functions */
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_AVERAGE 136 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_EVENTS 135 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_LAST 134 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_MAX 133 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_MEDIAN 132 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_MIN 131 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_PERCENTILE 130 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_STDDEV 129 
#define  STATSD_APP_CHART_DIM_VALUE_TYPE_SUM 128 

__attribute__((used)) static const char *valuetype2string(STATSD_APP_CHART_DIM_VALUE_TYPE type) {
    switch(type) {
        case STATSD_APP_CHART_DIM_VALUE_TYPE_EVENTS: return "events";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_LAST: return "last";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_MIN: return "min";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_MAX: return "max";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_SUM: return "sum";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_AVERAGE: return "average";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_MEDIAN: return "median";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_STDDEV: return "stddev";
        case STATSD_APP_CHART_DIM_VALUE_TYPE_PERCENTILE: return "percentile";
    }

    return "unknown";
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
          int type = 255;
          const char * benchRet = valuetype2string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}