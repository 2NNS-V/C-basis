#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 0;

void get_int(int* px, int* py) {
	sum = *px + *py;
}


int main() {
	int a, b;
	printf("2�� �̻��� ������ �Է��Ͻÿ�.");
	scanf("%d %d", &a, &b);
	get_int(&a, &b);
	printf("������ ���� %d", sum);
}

#endif
