#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised) {
	if (power_raised == 0)
		return 1;
	else
		return base * power(base, power_raised-1);
}

int main() {
	int x, y;
	printf("�ؼ� : ");
	scanf("%d", &x);
	printf("���� : ");
	scanf("%d", &y);
	printf("%d^%d=%d", x, y,power(x, y));
}