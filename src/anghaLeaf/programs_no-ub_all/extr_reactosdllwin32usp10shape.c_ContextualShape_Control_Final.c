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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  WORD ;
typedef  int WCHAR ;
struct TYPE_4__ {int /*<<< orphan*/  wgBlank; int /*<<< orphan*/  wgDefault; } ;
struct TYPE_5__ {TYPE_1__ sfp; } ;
typedef  TYPE_2__ ScriptCache ;
typedef  int /*<<< orphan*/  SCRIPT_ANALYSIS ;
typedef  int INT ;
typedef  int /*<<< orphan*/  HDC ;

/* Variables and functions */

__attribute__((used)) static void ContextualShape_Control(HDC hdc, ScriptCache *psc, SCRIPT_ANALYSIS *psa, WCHAR* pwcChars, INT cChars, WORD* pwOutGlyphs, INT* pcGlyphs, INT cMaxGlyphs, WORD *pwLogClust)
{
    int i;
    for (i=0; i < cChars; i++)
    {
        switch (pwcChars[i])
        {
            case 0x000A:
            case 0x000D:
                pwOutGlyphs[i] = psc->sfp.wgBlank;
                break;
            default:
                if (pwcChars[i] < 0x1C)
                    pwOutGlyphs[i] = psc->sfp.wgDefault;
                else
                    pwOutGlyphs[i] = psc->sfp.wgBlank;
        }
    }
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
          int hdc = 255;
          int cChars = 255;
          int cMaxGlyphs = 255;
          int _len_psc0 = 1;
          struct TYPE_5__ * psc = (struct TYPE_5__ *) malloc(_len_psc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_psc0; _i0++) {
            psc->sfp.wgBlank = ((-2 * (next_i()%2)) + 1) * next_i();
        psc->sfp.wgDefault = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psa0 = 65025;
          int * psa = (int *) malloc(_len_psa0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_psa0; _i0++) {
            psa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwcChars0 = 65025;
          int * pwcChars = (int *) malloc(_len_pwcChars0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwcChars0; _i0++) {
            pwcChars[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwOutGlyphs0 = 65025;
          int * pwOutGlyphs = (int *) malloc(_len_pwOutGlyphs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwOutGlyphs0; _i0++) {
            pwOutGlyphs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcGlyphs0 = 65025;
          int * pcGlyphs = (int *) malloc(_len_pcGlyphs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcGlyphs0; _i0++) {
            pcGlyphs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pwLogClust0 = 65025;
          int * pwLogClust = (int *) malloc(_len_pwLogClust0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ContextualShape_Control(hdc,psc,psa,pwcChars,cChars,pwOutGlyphs,pcGlyphs,cMaxGlyphs,pwLogClust);
          free(psc);
          free(psa);
          free(pwcChars);
          free(pwOutGlyphs);
          free(pcGlyphs);
          free(pwLogClust);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}