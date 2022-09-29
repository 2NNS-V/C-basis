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
	printf("어디까지 계산할까요?");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("오일러 수는 %lf 입니다.", e);
}

#endif
