#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 0;

void get_int(int* px, int* py) {
	sum = *px + *py;
}


int main() {
	int a, b;
	printf("2개 이상의 정수를 입력하시오.");
	scanf("%d %d", &a, &b);
	get_int(&a, &b);
	printf("정수의 합은 %d", sum);
}

#endif
