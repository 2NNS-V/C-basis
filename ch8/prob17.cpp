#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define e 0.000001

double f_abs(double x) {
	return (x<0 ? -x:x);
}

double f_min(double x, double y) {
	return (x > y ? y : x);
}

double f_equal(double x, double y) {
	double n = f_abs(x - y) / f_min(f_abs(x), f_abs(y));
	if (n < e)
		return 1;
	return 0;
}

int main() {
	double a, b;
	printf("실수를 입력하시오:");
	scanf("%lf", &a);
	printf("실수를 입력하시오:");
	scanf("%lf", &b);

	if (f_equal(a, b) == 1)
		printf("두 실수는 서로 같다.");
	else
		printf("두 실수는 서로 다르다.");
}

#endif
