
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_digit_sum(int x) {
	if (x / 10 == 0)
		return x;
	else
		return (x % 10) + get_digit_sum(x/10);
}

int main() {
	int n;
	printf("������ �Է��Ͻÿ�.: ");
	scanf("%d", &n);
	printf("�ڸ����� �� : %d", get_digit_sum(n));
}