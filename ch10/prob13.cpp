#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int binary[32] = { 0 };
	int n, cnt=0;
	printf("10진수:");
	scanf("%d", &n);
	for (int i = 0; i < 32 && n>0; i++) {
		binary[i] = n % 2;
		n /= 2;
		cnt++;
	}
	printf("2진수:");
	for (int i = cnt - 1; i > 0; i--) {
		printf("%d", binary[i]);
	}
}

#endif
