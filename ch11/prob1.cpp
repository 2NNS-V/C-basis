﻿
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0x12345678;
	unsigned char* xp = (char*)&x; // x의 주솟값을 char형으로 변환

	printf("바이트 순서:%x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	return 0;
}
