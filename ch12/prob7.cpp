#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int get_response(char* prompt) {
	if (strcmp(prompt, "yes")==0 || strcmp(prompt, "ok") == 0)
		return 1;
	else if (strcmp(prompt, "no") == 1)
		return 0;
}

int main() {
	char ch[SIZE];
	printf("게임을 하시겠습니까?");
	scanf("%s", &ch);
	for (int i = 0; i < strlen(ch); i++) 
		ch[i] = tolower(ch[i]); // 모든 문자를 소문자로 바꾸어 줌
	if ((get_response(ch)) == 1)
		printf("긍정적인 답변\n");
	else
		printf("부정적인 답변");
}

#endif