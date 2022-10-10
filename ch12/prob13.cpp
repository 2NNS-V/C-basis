#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main() {
	char s[SIZE];
	int cnt = 0;

	printf("문자열을 입력하세요.");
	gets_s(s, SIZE);
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == ',' || s[i] == '.')
			cnt++;
	printf("%d개임", cnt);
}

#endif
