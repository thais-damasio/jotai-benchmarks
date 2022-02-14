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
typedef  int WCHAR ;
typedef  int UINT ;

/* Variables and functions */

WCHAR ff_wtoupper (	/* Returns upper converted character */
	WCHAR chr		/* Unicode character to be upper converted */
)
{
	static const WCHAR lower[] = {	/* Lower case characters to be converted */
	/* Latin Supplement */			0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF,
	/* Latin Extended-A */			0x101,0x103,0x105,0x107,0x109,0x10B,0x10D,0x10F,0x111,0x113,0x115,0x117,0x119,0x11B,0x11D,0x11F,0x121,0x123,0x125,0x127,0x129,0x12B,0x12D,0x12F,0x131,0x133,0x135,0x137,0x13A,0x13C,0x13E,0x140,0x142,0x144,0x146,0x148,0x14B,0x14D,0x14F,0x151,0x153,0x155,0x157,0x159,0x15B,0x15D,0x15F,0x161,0x163,0x165,0x167,0x169,0x16B,0x16D,0x16F,0x171,0x173,0x175,0x177,0x17A,0x17C,0x17E,
	/* Latin Extended-B */			0x183,0x185,0x188,0x18C,0x192,0x199,0x1A1,0x1A3,0x1A8,0x1AD,0x1B0,0x1B4,0x1B6,0x1B9,0x1BD,0x1C6,0x1C9,0x1CC,0x1CE,0x1D0,0x1D2,0x1D4,0x1D6,0x1D8,0x1DA,0x1DC,0x1DD,0x1DF,0x1E1,0x1E3,0x1E5,0x1E7,0x1E9,0x1EB,0x1ED,0x1EF,0x1F3,0x1F5,0x1FB,0x1FD,0x1FF,0x201,0x203,0x205,0x207,0x209,0x20B,0x20D,0x20F,0x211,0x213,0x215,0x217,
	/* Greek, Coptic */				0x3B1,0x3B2,0x3B3,0x3B4,0x3B5,0x3B6,0x3B7,0x3B8,0x3B9,0x3BA,0x3BB,0x3BC,0x3BD,0x3BE,0x3BF,0x3C0,0x3C1,0x3C3,0x3C4,0x3C5,0x3C6,0x3C7,0x3C8,0x3C9,0x3CA,0x3CB,0x3CC,0x3CD,0x3CE,0x3E3,0x3E5,0x3E7,0x3E9,0x3EB,
	/* Cyrillic */					0x430,0x431,0x432,0x433,0x434,0x435,0x436,0x437,0x438,0x439,0x43A,0x43B,0x43C,0x43D,0x43E,0x43F,0x440,0x441,0x442,0x443,0x444,0x445,0x446,0x447,0x448,0x449,0x44A,0x44B,0x44C,0x44D,0x44E,0x44F,0x452,0x453,0x454,0x455,0x456,0x457,0x458,0x459,0x45A,0x45B,0x45C,0x45E,0x45F,0x461,0x463,0x465,0x467,0x469,0x46B,0x46D,0x46F,0x471,0x473,0x475,0x477,0x479,0x47B,0x47D,0x47F,0x481,0x491,0x493,0x495,0x497,0x499,0x49B,0x49D,0x49F,0x4A1,0x4A3,0x4A5,0x4A7,0x4A9,0x4AB,0x4AD,0x4AF,0x4B1,0x4B3,0x4B5,0x4B7,0x4B9,0x4BB,0x4BD,0x4BF,0x4C2,0x4C4,0x4C8,0x4D1,0x4D3,0x4D5,0x4D7,0x4D9,0x4DB,0x4DD,0x4DF,0x4E1,0x4E3,0x4E5,0x4E7,0x4E9,0x4EB,0x4ED,0x4EF,0x4F1,0x4F3,0x4F5,0x4F9,
	/* Armenian */					0x561,0x562,0x563,0x564,0x565,0x566,0x567,0x568,0x569,0x56A,0x56B,0x56C,0x56D,0x56E,0x56F,0x570,0x571,0x572,0x573,0x574,0x575,0x576,0x577,0x578,0x579,0x57A,0x57B,0x57C,0x57D,0x57E,0x57F,0x580,0x581,0x582,0x583,0x584,0x585,0x586,
	/* Latin Extended Additional */	0x1E01,0x1E03,0x1E05,0x1E07,0x1E09,0x1E0B,0x1E0D,0x1E0F,0x1E11,0x1E13,0x1E15,0x1E17,0x1E19,0x1E1B,0x1E1D,0x1E1F,0x1E21,0x1E23,0x1E25,0x1E27,0x1E29,0x1E2B,0x1E2D,0x1E2F,0x1E31,0x1E33,0x1E35,0x1E37,0x1E39,0x1E3B,0x1E3D,0x1E3F,0x1E41,0x1E43,0x1E45,0x1E47,0x1E49,0x1E4B,0x1E4D,0x1E4F,0x1E51,0x1E53,0x1E55,0x1E57,0x1E59,0x1E5B,0x1E5D,0x1E5F,0x1E61,0x1E63,0x1E65,0x1E67,0x1E69,0x1E6B,0x1E6D,0x1E6F,0x1E71,0x1E73,0x1E75,0x1E77,0x1E79,0x1E7B,0x1E7D,0x1E7F,0x1E81,0x1E83,0x1E85,0x1E87,0x1E89,0x1E8B,0x1E8D,0x1E8F,0x1E91,0x1E93,0x1E95,0x1E97,0x1E99,0x1E9B,0x1E9D,0x1E9F,0x1EA1,0x1EA3,0x1EA5,0x1EA7,0x1EA9,0x1EAB,0x1EAD,0x1EAF,0x1EB1,0x1EB3,0x1EB5,0x1EB7,0x1EB9,0x1EBB,0x1EBD,0x1EBF,0x1EC1,0x1EC3,0x1EC5,0x1EC7,0x1EC9,0x1ECB,0x1ECD,0x1ECF,0x1ED1,0x1ED3,0x1ED5,0x1ED7,0x1ED9,0x1EDB,0x1EDD,0x1EDF,0x1EE1,0x1EE3,0x1EE5,0x1EE7,0x1EE9,0x1EEB,0x1EED,0x1EEF,0x1EF1,0x1EF3,0x1EF5,0x1EF7,0x1EF9,
	/* Number forms */				0x2170,0x2171,0x2172,0x2173,0x2174,0x2175,0x2176,0x2177,0x2178,0x2179,0x217A,0x217B,0x217C,0x217D,0x217E,0x217F,
	/* Full-width */				0xFF41,0xFF42,0xFF43,0xFF44,0xFF45,0xFF46,0xFF47,0xFF48,0xFF49,0xFF4A,0xFF4B,0xFF4C,0xFF4D,0xFF4E,0xFF4F,0xFF50,0xFF51,0xFF52,0xFF53,0xFF54,0xFF55,0xFF56,0xFF57,0xFF58,0xFF59,0xFF5A
	};
	static const WCHAR upper[] = {	/* Upper case characters correspond to lower[] */
									0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0x178,
									0x100,0x102,0x104,0x106,0x108,0x10A,0x10C,0x10E,0x110,0x112,0x114,0x116,0x118,0x11A,0x11C,0x11E,0x120,0x122,0x124,0x126,0x128,0x12A,0x12C,0x12E,0x130,0x132,0x134,0x136,0x139,0x13B,0x13D,0x13F,0x141,0x143,0x145,0x147,0x14A,0x14C,0x14E,0x150,0x152,0x154,0x156,0x158,0x15A,0x15C,0x15E,0x160,0x162,0x164,0x166,0x168,0x16A,0x16C,0x16E,0x170,0x172,0x174,0x176,0x179,0x17B,0x17D,
									0x182,0x184,0x187,0x18B,0x191,0x198,0x1A0,0x1A2,0x1A7,0x1AC,0x1AF,0x1B3,0x1B5,0x1B8,0x1BC,0x1C4,0x1C7,0x1CA,0x1CD,0x1CF,0x1D1,0x1D3,0x1D5,0x1D7,0x1D9,0x1DB,0x18E,0x1DE,0x1E0,0x1E2,0x1E4,0x1E6,0x1E8,0x1EA,0x1EC,0x1EE,0x1F1,0x1F4,0x1FA,0x1FC,0x1FE,0x200,0x202,0x204,0x206,0x208,0x20A,0x20C,0x20E,0x210,0x212,0x214,0x216,
									0x391,0x392,0x393,0x394,0x395,0x396,0x397,0x398,0x399,0x39A,0x39B,0x39C,0x39D,0x39E,0x39F,0x3A0,0x3A1,0x3A3,0x3A4,0x3A5,0x3A6,0x3A7,0x3A8,0x3A9,0x3AA,0x3AB,0x38C,0x38E,0x38F,0x3E2,0x3E4,0x3E6,0x3E8,0x3EA,
									0x410,0x411,0x412,0x413,0x414,0x415,0x416,0x417,0x418,0x419,0x41A,0x41B,0x41C,0x41D,0x41E,0x41F,0x420,0x421,0x422,0x423,0x424,0x425,0x426,0x427,0x428,0x429,0x42A,0x42B,0x42C,0x42D,0x42E,0x42F,0x402,0x403,0x404,0x405,0x406,0x407,0x408,0x409,0x40A,0x40B,0x40C,0x40E,0x40F,0x460,0x462,0x464,0x466,0x468,0x46A,0x46C,0x46E,0x470,0x472,0x474,0x476,0x478,0x47A,0x47C,0x47E,0x480,0x490,0x492,0x494,0x496,0x498,0x49A,0x49C,0x49E,0x4A0,0x4A2,0x4A4,0x4A6,0x4A8,0x4AA,0x4AC,0x4AE,0x4B0,0x4B2,0x4B4,0x4B6,0x4B8,0x4BA,0x4BC,0x4BE,0x4C1,0x4C3,0x5C7,0x4D0,0x4D2,0x4D4,0x4D6,0x4D8,0x4DA,0x4DC,0x4DE,0x4E0,0x4E2,0x4E4,0x4E6,0x4E8,0x4EA,0x4EC,0x4EE,0x4F0,0x4F2,0x4F4,0x4F8,
									0x531,0x532,0x533,0x534,0x535,0x536,0x537,0x538,0x539,0x53A,0x53B,0x53C,0x53D,0x53E,0x53F,0x540,0x541,0x542,0x543,0x544,0x545,0x546,0x547,0x548,0x549,0x54A,0x54B,0x54C,0x54D,0x54E,0x54F,0x550,0x551,0x552,0x553,0x554,0x555,0x556,
									0x1E00,0x1E02,0x1E04,0x1E06,0x1E08,0x1E0A,0x1E0C,0x1E0E,0x1E10,0x1E12,0x1E14,0x1E16,0x1E18,0x1E1A,0x1E1C,0x1E1E,0x1E20,0x1E22,0x1E24,0x1E26,0x1E28,0x1E2A,0x1E2C,0x1E2E,0x1E30,0x1E32,0x1E34,0x1E36,0x1E38,0x1E3A,0x1E3C,0x1E3E,0x1E40,0x1E42,0x1E44,0x1E46,0x1E48,0x1E4A,0x1E4C,0x1E4E,0x1E50,0x1E52,0x1E54,0x1E56,0x1E58,0x1E5A,0x1E5C,0x1E5E,0x1E60,0x1E62,0x1E64,0x1E66,0x1E68,0x1E6A,0x1E6C,0x1E6E,0x1E70,0x1E72,0x1E74,0x1E76,0x1E78,0x1E7A,0x1E7C,0x1E7E,0x1E80,0x1E82,0x1E84,0x1E86,0x1E88,0x1E8A,0x1E8C,0x1E8E,0x1E90,0x1E92,0x1E94,0x1E96,0x1E98,0x1E9A,0x1E9C,0x1E9E,0x1EA0,0x1EA2,0x1EA4,0x1EA6,0x1EA8,0x1EAA,0x1EAC,0x1EAE,0x1EB0,0x1EB2,0x1EB4,0x1EB6,0x1EB8,0x1EBA,0x1EBC,0x1EBE,0x1EC0,0x1EC2,0x1EC4,0x1EC6,0x1EC8,0x1ECA,0x1ECC,0x1ECE,0x1ED0,0x1ED2,0x1ED4,0x1ED6,0x1ED8,0x1EDA,0x1EDC,0x1EDE,0x1EE0,0x1EE2,0x1EE4,0x1EE6,0x1EE8,0x1EEA,0x1EEC,0x1EEE,0x1EF0,0x1EF2,0x1EF4,0x1EF6,0x1EF8,
									0x2160,0x2161,0x2162,0x2163,0x2164,0x2165,0x2166,0x2167,0x2168,0x2169,0x216A,0x216B,0x216C,0x216D,0x216E,0x216F,
									0xFF21,0xFF22,0xFF23,0xFF24,0xFF25,0xFF26,0xFF27,0xFF28,0xFF29,0xFF2A,0xFF2B,0xFF2C,0xFF2D,0xFF2E,0xFF2F,0xFF30,0xFF31,0xFF32,0xFF33,0xFF34,0xFF35,0xFF36,0xFF37,0xFF38,0xFF39,0xFF3A
	};
	UINT i, n, hi, li;


	if (chr < 0x80) {	/* ASCII characters (acceleration) */
		if (chr >= 0x61 && chr <= 0x7A) chr -= 0x20;

	} else {			/* Non ASCII characters (table search) */
		n = 12; li = 0; hi = sizeof lower / sizeof lower[0];
		do {
			i = li + (hi - li) / 2;
			if (chr == lower[i]) break;
			if (chr > lower[i]) li = i; else hi = i;
		} while (--n);
		if (n) chr = upper[i];
	}

	return chr;
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
          int chr = 255;
          int benchRet = ff_wtoupper(chr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
