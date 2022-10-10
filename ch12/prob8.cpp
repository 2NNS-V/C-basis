#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char ch[100];
	char* token;
	int cnt = 0;

	printf("문자열을 입력하시오.");
	gets_s(ch, 100);
	token = strtok(ch, " ");
	while (token != NULL) {
		cnt++;
		token = strtok(NULL, " ");
	}
	
	printf("단어의 수는 %d입니다.", cnt);
}

#endif
