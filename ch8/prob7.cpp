#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income) {
	if (income <= 1000)
		return 0.08 * income;
	else
		return (0.1 * (income - 1000) + 1000*0.08);
}

int main() {
	int income;
	scanf("%d", &income);
	printf("소득세는 %d입니다.", get_tax(income));
}
#endif