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
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d", &n);
	printf("1���� %d������ ��=%d", n, sum(n));
}