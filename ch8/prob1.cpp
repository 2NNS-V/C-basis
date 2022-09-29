#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double square(double n) {
	return n * n;
}

int main() {
	double n;
	scanf("%lf", &n);
	printf("정수 %lf의 제곱은 %lf입니다.", n, square(n));
}


#endif