#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void calc(char *s, int a, int b) {
	if (strcmp(s, "add") == 0)
		printf("%d", a + b);
	else if (strcmp(s, "mul") == 0)
		printf("%d", a * b);
	else if (strcmp(s, "sub") == 0)
		printf("%d", a - b);
	else if (strcmp(s, "div") == 0)
		printf("%d", a / b);
}

int main() {
	char s[SIZE];
	int a, b;
	printf("연산을 입력하시오.");
	scanf("%s %d %d", &s,&a, &b);
	calc(s, a, b);
}

#endif
