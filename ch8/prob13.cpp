#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}


int main() {
	int n, m;
	printf("첫번째 정수:");
	scanf("%d", &n);
	printf("두번째 정수:");
	scanf("%d", &m);
	if (is_multiple(n, m) == 1)
		printf("%d는 %d의 배수입니다.", n, m);
	else
		printf("배수아님");
}

#endif
