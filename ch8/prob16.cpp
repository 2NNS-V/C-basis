#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int factorial(int n) {
	int result =1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n;
	double e = 1.0;
	printf("������ ����ұ��?");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("���Ϸ� ���� %lf �Դϴ�.", e);
}

#endif
