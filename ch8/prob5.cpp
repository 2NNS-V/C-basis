#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double round(double f) {
	return (int)(f + 0.5);
}

int main() {
	double n;
	scanf("%lf", &n);
	printf("�ݿø��� ���� %lf�Դϴ�.", round(n));
}
#endif