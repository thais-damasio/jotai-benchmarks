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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {unsigned int v4l2_pix_fmt; int /*<<< orphan*/  pix_order; } ;
struct TYPE_6__ {unsigned int v4l2_pix_fmt; int /*<<< orphan*/  pix_fmt; } ;
struct TYPE_8__ {TYPE_3__ ycbcr; void* data_pack; TYPE_2__ bayer; } ;
struct vpfe_isif_device {TYPE_4__ isif_cfg; TYPE_1__* formats; } ;
struct TYPE_5__ {scalar_t__ code; } ;

/* Variables and functions */
 int EINVAL ; 
 void* ISIF_PACK_16BIT ; 
 void* ISIF_PACK_8BIT ; 
 size_t ISIF_PAD_SINK ; 
 int /*<<< orphan*/  ISIF_PIXFMT_RAW ; 
 int /*<<< orphan*/  ISIF_PIXORDER_CBYCRY ; 
 int /*<<< orphan*/  ISIF_PIXORDER_YCBYCR ; 
 scalar_t__ MEDIA_BUS_FMT_SGRBG12_1X12 ; 
 unsigned int V4L2_PIX_FMT_SBGGR16 ; 
 unsigned int V4L2_PIX_FMT_SGRBG10ALAW8 ; 
 unsigned int V4L2_PIX_FMT_SGRBG10DPCM8 ; 
 unsigned int V4L2_PIX_FMT_UYVY ; 
 unsigned int V4L2_PIX_FMT_YUYV ; 

__attribute__((used)) static int
isif_set_pixel_format(struct vpfe_isif_device *isif, unsigned int pixfmt)
{
	if (isif->formats[ISIF_PAD_SINK].code == MEDIA_BUS_FMT_SGRBG12_1X12) {
		if (pixfmt == V4L2_PIX_FMT_SBGGR16)
			isif->isif_cfg.data_pack = ISIF_PACK_16BIT;
		else if ((pixfmt == V4L2_PIX_FMT_SGRBG10DPCM8) ||
				(pixfmt == V4L2_PIX_FMT_SGRBG10ALAW8))
			isif->isif_cfg.data_pack = ISIF_PACK_8BIT;
		else
			return -EINVAL;

		isif->isif_cfg.bayer.pix_fmt = ISIF_PIXFMT_RAW;
		isif->isif_cfg.bayer.v4l2_pix_fmt = pixfmt;
	} else {
		if (pixfmt == V4L2_PIX_FMT_YUYV)
			isif->isif_cfg.ycbcr.pix_order = ISIF_PIXORDER_YCBYCR;
		else if (pixfmt == V4L2_PIX_FMT_UYVY)
			isif->isif_cfg.ycbcr.pix_order = ISIF_PIXORDER_CBYCRY;
		else
			return -EINVAL;

		isif->isif_cfg.data_pack = ISIF_PACK_8BIT;
		isif->isif_cfg.ycbcr.v4l2_pix_fmt = pixfmt;
	}

	return 0;
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
          unsigned int pixfmt = 100;
          int _len_isif0 = 1;
          struct vpfe_isif_device * isif = (struct vpfe_isif_device *) malloc(_len_isif0*sizeof(struct vpfe_isif_device));
          for(int _i0 = 0; _i0 < _len_isif0; _i0++) {
            isif[_i0].isif_cfg.ycbcr.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.pix_order = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isif__i0__formats0 = 1;
          isif[_i0].formats = (struct TYPE_5__ *) malloc(_len_isif__i0__formats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_isif__i0__formats0; _j0++) {
            isif[_i0].formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = isif_set_pixel_format(isif,pixfmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_isif0; _aux++) {
          free(isif[_aux].formats);
          }
          free(isif);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pixfmt = 255;
          int _len_isif0 = 65025;
          struct vpfe_isif_device * isif = (struct vpfe_isif_device *) malloc(_len_isif0*sizeof(struct vpfe_isif_device));
          for(int _i0 = 0; _i0 < _len_isif0; _i0++) {
            isif[_i0].isif_cfg.ycbcr.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.pix_order = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isif__i0__formats0 = 1;
          isif[_i0].formats = (struct TYPE_5__ *) malloc(_len_isif__i0__formats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_isif__i0__formats0; _j0++) {
            isif[_i0].formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = isif_set_pixel_format(isif,pixfmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_isif0; _aux++) {
          free(isif[_aux].formats);
          }
          free(isif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pixfmt = 10;
          int _len_isif0 = 100;
          struct vpfe_isif_device * isif = (struct vpfe_isif_device *) malloc(_len_isif0*sizeof(struct vpfe_isif_device));
          for(int _i0 = 0; _i0 < _len_isif0; _i0++) {
            isif[_i0].isif_cfg.ycbcr.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.pix_order = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.v4l2_pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isif__i0__formats0 = 1;
          isif[_i0].formats = (struct TYPE_5__ *) malloc(_len_isif__i0__formats0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_isif__i0__formats0; _j0++) {
            isif[_i0].formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = isif_set_pixel_format(isif,pixfmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_isif0; _aux++) {
          free(isif[_aux].formats);
          }
          free(isif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
