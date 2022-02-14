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

/* Variables and functions */
#define  TL_STORAGE_FILE_GIF 137 
#define  TL_STORAGE_FILE_JPEG 136 
#define  TL_STORAGE_FILE_MOV 135 
#define  TL_STORAGE_FILE_MP3 134 
#define  TL_STORAGE_FILE_MP4 133 
#define  TL_STORAGE_FILE_PARTIAL 132 
#define  TL_STORAGE_FILE_PDF 131 
#define  TL_STORAGE_FILE_PNG 130 
#define  TL_STORAGE_FILE_UNKNOWN 129 
#define  TL_STORAGE_FILE_WEBP 128 
 int ct_gif ; 
 int ct_jpeg ; 
 int ct_last ; 
 int ct_mov ; 
 int ct_mp3 ; 
 int ct_mp4 ; 
 int ct_partial ; 
 int ct_pdf ; 
 int ct_png ; 
 int ct_unknown ; 
 int ct_webp ; 

int file_type_to_content_type (int file_type) {
  switch (file_type) {
    case TL_STORAGE_FILE_UNKNOWN: return ct_unknown;
    case TL_STORAGE_FILE_JPEG: return ct_jpeg;
    case TL_STORAGE_FILE_GIF: return ct_gif;
    case TL_STORAGE_FILE_PNG: return ct_png;
    case TL_STORAGE_FILE_PDF: return ct_pdf;
    case TL_STORAGE_FILE_MP3: return ct_mp3;
    case TL_STORAGE_FILE_MOV: return ct_mov;
    case TL_STORAGE_FILE_MP4: return ct_mp4;
    case TL_STORAGE_FILE_PARTIAL: return ct_partial;
    case TL_STORAGE_FILE_WEBP: return ct_webp;
  }
  return ct_last | 0x40000000;
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
          int file_type = 255;
          int benchRet = file_type_to_content_type(file_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
