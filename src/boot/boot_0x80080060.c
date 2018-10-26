#include <ultra64.h>
#include <global.h>

UNK_RET func_80080060(void) {
	func_80085320(&D_80099500, &D_80099AF0, &D_80099EF0, 0, -1, &D_80098190);
	D_80000318 = func_8008D350();
	func_800818F4();
	func_8008A6FC();
	func_8008EDE0();
	D_80096B40 = func_80092920();
	func_80085320(&D_80099AD0, &D_800996D0, &D_80099AD0_, 0, 256, &D_80098198);
	osCreateThread(&D_80099520, 1, (void(*)(void*))func_80080514, 0, &D_80099AD0, 12);
	func_800957B0(&D_80099520);
}

void func_80080150(UNK_PTR a0, UNK_PTR a1) {
	if (a0 < a1) {
		func_80089630(a0, (u32)a1 - (u32)a0);
	}
}

void func_80080180(UNK_TYPE* a0, UNK_TYPE a1, UNK_TYPE a2) {
	for (; a1 != 0; a1 -= 4) {
		*a0++ = a2;
	}
}

UNK_RET func_8008019C(void) {
	func_80080180(&D_80000500, 0x25800, 0x00010001);
	func_800805E0(0);
	func_8008FE60(&D_80000500);
	func_8008AE70(0);
}

UNK_RET func_800801EC(void) {
	func_80080150((void*)0x80000400, &D_80000500);
	func_80080150(&D_80025D00, (int*)func_80080060);
	func_80080150(&D_80208EA0, (UNK_PTR)(0x80000000 + D_80000318));
}

UNK_RET func_80080250(void) {
	UNK_PTR v0;
	UNK_PTR v1;
	UNK_PTR t7;
	UNK_TYPE sp88;
	UNK_TYPE sp84;
	UNK_TYPE sp80;
	UNK_TYPE sp76;
	UNK_TYPE sp72;
	UNK_TYPE sp68;
	UNK_TYPE sp64;
	UNK_TYPE sp60;
	UNK_TYPE sp56;
	UNK_TYPE sp52;
	UNK_TYPE sp48;
	UNK_TYPE sp44;
	UNK_PTR sp40;
	
	func_8008F240(&sp48, &sp44, 1);
	
	v1 = &D_00B3C000;
	t7 = &D_00C7A4E0;
	sp40 = D_80096B50;
	*(int*)sp40 = 0;
	
	func_80080C04(&sp72, (UNK_FUN_ARG)func_800A5AC0, v1, (u32)t7 - (u32)v1, 0, &sp48, 0);
	func_8008019C();
	func_800801EC();
	func_80087ED0(&sp48, 0, 1);
	
	D_80096B50 = sp40;
	
	func_80080150(&D_801E3FA0, &D_80208EA0);
}

UNK_RET func_80080300(UNK_TYPE a0) {
	func_80085320(&D_8009A670, &D_8009A170, &D_8009A670_, 0, 256, &D_800981A0);
	func_80081754(&D_80099EF0, &D_8009A670, 18, 1);
	func_80080D0C();
	func_80080250();
	func_80174BF0(a0);
	func_80080E00();
}

void func_8008038C(void) {
	u32 i;
	func_800952A0(254);
	
	D_80096B2C = 66;
	D_80096B30 = 1.0;
	D_80096B34 = 1.0;
	
	switch (osTvType) {
		case 1:
		D_8009B290 = 2;
		for (i = 0; i < 20; i++) {
			D_800980E0[i] = D_8009B240[i];
		}
		D_80096B34 = D_800981B0;
		break;
		case 2:
		D_8009B290 = 30;
		for (i = 0; i < 20; i++) {
			D_80098010[i] = D_8009B240[i];
		}
		D_80096B34 = D_800981B0;
		break;
		case 0:
		D_8009B290 = 44;
		for (i = 0; i < 20; i++) {
			D_80097FC0[i] = D_8009B240[i];
		}
		break;
	}
	
	D_80096B20 = 1;
}

void func_80080514(UNK_TYPE a0) {
	func_8008038C();
	func_8008C020(150, &D_8009B228, &D_8009B160, 50);
	func_80085320(&D_8009B140, &D_8009A840, &D_8009B140_, 0, 1024, &D_800981A8);
	func_80089E40(&D_8009A690, 3, func_80080300, a0, &D_8009B140, 12);
	func_800957B0(&D_8009A690);
	func_8008FC00(0, 0);
	
	while(1);
}
