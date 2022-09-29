#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double cal_area(double radius) {
	return (radius * radius * PI);
}

int main() {
	double radius;
	scanf("%lf", &radius);
	printf("원의 면적은 %lf 입니다.", cal_area(radius));
	return 0;
}
#endif