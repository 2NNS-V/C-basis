
#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define e 0.000001

void calc_main() {
	printf("==================\n");
	printf("MENU\n");
	printf("==================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

int remainder(int a, int b) {
	return a % b;
}


int main() {
	int n, a, b;
	char ch;
	calc_main();
	while (1) {
		printf("원하는 메뉴를 선택하시오.(1-5)");
		scanf("%d", &n);
		printf("숫자 2개를 입력하시오.: ");
		scanf("%d %d", &a, &b);
		printf("연산 결과 :");
		if (n == 1)
			printf("%d\n", add(a, b));
		else if (n == 2)
			printf("%d\n", sub(a, b));
		else if (n == 3)
			printf("%d\n", multiply(a, b));
		else if (n == 4)
			printf("%d\n", div(a, b));
		else if (n == 5)
			printf("%d\n", remainder(a, b));
		else
			continue;
		printf("계속 하려면 y를 누르시오.\n");
		scanf(" %c", &ch);
		if (ch == 'y')
			continue;
		else
			break;
	}
}

#endif
