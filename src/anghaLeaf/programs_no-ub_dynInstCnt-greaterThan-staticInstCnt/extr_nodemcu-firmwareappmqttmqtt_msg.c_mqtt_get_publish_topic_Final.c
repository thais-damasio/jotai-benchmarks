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
typedef  int uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */

const char* mqtt_get_publish_topic(uint8_t* buffer, uint16_t* buffer_length)
{
  int i;
  int totlen = 0;
  int topiclen;

  for(i = 1; i < *buffer_length; ++i)
  {
    totlen += (buffer[i] & 0x7f) << (7 * (i -1));
    if((buffer[i] & 0x80) == 0)
    {
      ++i;
      break;
    }
  }
  totlen += i;

  if(i + 2 > *buffer_length)
    return NULL;
  topiclen = buffer[i++] << 8;
  topiclen |= buffer[i++];

  if(i + topiclen > *buffer_length)
    return NULL;

  *buffer_length = topiclen;
  return (const char*)(buffer + i);
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
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer_length0 = 65025;
          int * buffer_length = (int *) malloc(_len_buffer_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer_length0; _i0++) {
            buffer_length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = mqtt_get_publish_topic(buffer,buffer_length);
          printf("{{other_type}} %p\n", &benchRet); 
          free(buffer);
          free(buffer_length);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}