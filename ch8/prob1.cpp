#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double square(double n) {
	return n * n;
}

int main() {
	double n;
	scanf("%lf", &n);
	printf("���� %lf�� ������ %lf�Դϴ�.", n, square(n));
}


#endif