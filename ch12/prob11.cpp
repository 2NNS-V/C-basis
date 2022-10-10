#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
	char s[SIZE], *c[SIZE];
	char *token;
	int cnt = 0;

	printf("문자열을 입력하시오.");
	gets_s(s, SIZE);
	token = strtok(s, " ");	
	for (int i = 0; token != NULL; i++) {
		c[i] = token;
		token = strtok(NULL, " ");
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		printf("%s ", c[cnt-i-1]);
	}
	
	
}

#endif
