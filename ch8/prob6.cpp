#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n) {
	n = -n;
	return n;
}

int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	if (even(n) == 1)
		printf("even() 결과 : 짝수\n");
	else
		printf("even() 결과 : 홀수\n");

	printf("absolute() 결과 : %d\n", absolute(n));

	if (sign(n) == -1)
		printf("sign() 결과 : 음수\n");
	else
		printf("sign() 결과 : 양수\n");
}
#endif