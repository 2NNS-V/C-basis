#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(int x) {
	if (x / 10 == 0)
		return 1;
	else
		return 1 + count(x / 10);
}

int main() {
	int n;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d", &n);
	printf("%d", count(n));
}