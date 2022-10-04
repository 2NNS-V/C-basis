
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int x) {
	if (x <= 1)
		return 1;
	else
		return 1.0 / x + recursive(x - 1);
}

int main() {
	int n;
	printf("정수를 입력하시오.");
	scanf("%d", &n);
	printf("%lf", recursive(n));
}