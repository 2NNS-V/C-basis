#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_digit(int x) {
	if (x < 10)
		printf("%d ", x);
	else {
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
	
}


int main() {
	int n;
	printf("정수를 입력하세요.");
	scanf("%d", &n);
	show_digit(n);
}