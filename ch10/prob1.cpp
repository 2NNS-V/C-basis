#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int days[12] = { 31, 29, 31,30,31,30,31,31,30,31,31,31 };
	for (int i = 0; i < 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i] );
	}
}

#endif
