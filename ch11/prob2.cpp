#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}

int main() {
	int x, y, sum=0, diff=0;
	printf("���� �Է�:");
	scanf("%d %d", &x, &y);
	get_sum_diff(x, y, &sum, &diff);
	printf("���ҵ��� ��=%d\n", sum);
	printf("���ҵ��� ��=%d\n", diff);
}

#endif
