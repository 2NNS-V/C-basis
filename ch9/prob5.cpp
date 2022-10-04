#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	if (n == 0)
		return 0;
	else
		return n + sum(n - 1);
		
}

int main() {
	int n;
	printf("정수를 입력하시오. : ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합=%d", n, sum(n));
}