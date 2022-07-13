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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ext4_sb_info {scalar_t__ s_es; } ;
struct TYPE_2__ {void* explicit_ptr; int /*<<< orphan*/  offset; } ;
struct ext4_attr {int attr_ptr; TYPE_1__ u; } ;

/* Variables and functions */
#define  ptr_explicit 130 
#define  ptr_ext4_sb_info_offset 129 
#define  ptr_ext4_super_block_offset 128 

__attribute__((used)) static void *calc_ptr(struct ext4_attr *a, struct ext4_sb_info *sbi)
{
	switch (a->attr_ptr) {
	case ptr_explicit:
		return a->u.explicit_ptr;
	case ptr_ext4_sb_info_offset:
		return (void *) (((char *) sbi) + a->u.offset);
	case ptr_ext4_super_block_offset:
		return (void *) (((char *) sbi->s_es) + a->u.offset);
	}
	return NULL;
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
          int _len_a0 = 1;
          struct ext4_attr * a = (struct ext4_attr *) malloc(_len_a0*sizeof(struct ext4_attr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].attr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].u.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 1;
          struct ext4_sb_info * sbi = (struct ext4_sb_info *) malloc(_len_sbi0*sizeof(struct ext4_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].s_es = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = calc_ptr(a,sbi);
          printf("{{other_type}} %p\n", &benchRet); 
          free(a);
          free(sbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct ext4_attr * a = (struct ext4_attr *) malloc(_len_a0*sizeof(struct ext4_attr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].attr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].u.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 65025;
          struct ext4_sb_info * sbi = (struct ext4_sb_info *) malloc(_len_sbi0*sizeof(struct ext4_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].s_es = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = calc_ptr(a,sbi);
          printf("{{other_type}} %p\n", &benchRet); 
          free(a);
          free(sbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct ext4_attr * a = (struct ext4_attr *) malloc(_len_a0*sizeof(struct ext4_attr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].attr_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].u.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 100;
          struct ext4_sb_info * sbi = (struct ext4_sb_info *) malloc(_len_sbi0*sizeof(struct ext4_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi[_i0].s_es = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = calc_ptr(a,sbi);
          printf("{{other_type}} %p\n", &benchRet); 
          free(a);
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
