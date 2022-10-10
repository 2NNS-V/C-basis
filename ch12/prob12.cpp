#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

void upper_to_lower(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
}

int main() {
	char s[SIZE], *word[SIZE];
	char *token;
	int cnt = 0;

	printf("성과 이름을 대문자로 입력하시오.");
	gets_s(s, SIZE);
	upper_to_lower(s);

	token = strtok(s, " ");
	for (int i = 0; token != NULL; i++) {
		word[i] = token;
		token = strtok(NULL, " ");
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		printf("%s ", word[cnt-1-i]);
	}
}


#endif
