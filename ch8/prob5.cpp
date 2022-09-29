#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double round(double f) {
	return (int)(f + 0.5);
}

int main() {
	double n;
	scanf("%lf", &n);
	printf("반올림한 값은 %lf입니다.", round(n));
}
#endif