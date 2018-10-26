#ifndef _STRUCTS_H_
#define _STRUCTS_H_

#include <PR/ultratypes.h>
#include <unk.h>

struct s80085320 {
/* 00 */    struct s80085320* next;
/* 04 */    struct s80085320* prev;
/* 08 */    UNK_TYPE* unk8;
/* 12 */    UNK_TYPE* unk12;
/* 16 */    UNK_TYPE unk16;
/* 20 */    UNK_TYPE unk20;
/* 24 */    UNK_TYPE* unk24;
};

struct s8008A6FC {
/* 00 */    UNK_TYPE unk0;
/* 04 */    UNK_TYPE unk4;
/* 08 */    UNK_TYPE unk8;
/* 12 */    UNK_TYPE unk12;
};

struct s80092920 {
/* 00 */    struct s80092920* unk0;
/* 04 */    u8 unk4;
/* 05 */    u8 unk5;
/* 06 */    u8 unk6;
/* 07 */    u8 unk7;
/* 08 */    u8 unk8;
/* 09 */    u8 unk9;
/* 10 */    u8 unk10; // pad?
/* 11 */    u8 unk11; // pad?
/* 12 */    UNK_TYPE unk12;
/* 16 */    UNK_TYPE unk16;
};

struct s800A5AC0 {
	/* 000 */ u8 pad0[28];
	/* 028 */ u16 unk28;
	/* 030 */ u8 pad1[116];
	/* 146 */ u16 unk146;
	/* 148 */ u8 pad2[34];
	/* 182 */ u8 unk182;
	/* 183 */ u8 pad4[5];
	/* 188 */ u16 unk188; // or char
	/* 190 */ u16 unk190;
	/* 192 */ u8 pad5[86];
	/* 278 */ u16 unk278;
	/* 280 */ u8 pad6[44];
	/* 324 */ void(*unk324)(struct s800A5AC0*, UNK_TYPE);
	/* 328 */ UNK_TYPE unk328;
};

typedef struct s800BF9A0_s {
	/* 000 */ u8 pad0[8];
	/* 008 */ UNK_TYPE unk8;
	/* 012 */ UNK_TYPE unk12;
	/* 016 */ UNK_TYPE unk16;
	/* 020 */ u8 pad1[10];
	/* 030 */ s8 unk30;
	/* 031 */ u8 pad2[1];
} s800BF9A0_s;

typedef struct s800CAAD0_s {
	/* 000 */ UNK_TYPE unk0;
	/* 004 */ UNK_TYPE unk4;
	/* 008 */ UNK_TYPE unk8;
	/* 012 */ u8 pad0[92];
	/* 104 */ UNK_TYPE unk104;
	/* 108 */ UNK_TYPE unk108;
	/* 112 */ UNK_TYPE unk112;
	/* 116 */ u16 unk116;
	/* 118 */ u16 unk118;
	/* 120 */ u16 unk120;
	/* 122 */ u8 pad1[2];
	/* 124 */ f32 unk124;
	/* 128 */ f32 unk128;
	/* 132 */ f32 unk132;
	/* 136 */ UNK_TYPE unk136;
	/* 140 */ UNK_TYPE unk140;
	/* 144 */ UNK_TYPE unk144;
	/* 148 */ u16 unk148;
	/* 150 */ u16 unk150;
	/* 152 */ u16 unk152;
	/* 154 */ u8 pad2[2];
	/* 156 */ f32 unk156;
	/* 160 */ f32 unk160;
	/* 164 */ f32 unk164;
} s800CAAD0;

// TODO everything past here should be placed in an appropiate libultra header

typedef long Mtx_t[4][4];

typedef union {
    /* 0 */ Mtx_t m;
    /* 0 */ long long force_structure_alignment;
} Mtx;


typedef struct {
    /* 0 */ int quot;
    /* 4 */ int rem;
} div_t;


typedef struct {
    /* 0 */ long quot;
    /* 4 */ long rem;
} ldiv_t;


typedef struct {
    /* 0 */ long long quot;
    /* 8 */ long long rem;
} lldiv_t;

typedef unsigned int size_t;

typedef double ldouble;

typedef struct {
    /* 0 */ union {
        /* 0 */ long long ll;
        /* 0 */ ldouble ld;
    } v;
    /* 8 */ unsigned char* s;
    /* 12 */ int n0;
    /* 16 */ int nz0;
    /* 20 */ int n1;
    /* 24 */ int nz1;
    /* 28 */ int n2;
    /* 32 */ int nz2;
    /* 36 */ int prec;
    /* 40 */ int width;
    /* 44 */ size_t nchar;
    /* 48 */ unsigned int flags;
    /* 52 */ unsigned char qual;
} _Pft;

#endif
