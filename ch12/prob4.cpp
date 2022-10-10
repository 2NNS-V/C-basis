#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int str_chr(char* s, int c) {
	int cnt = 0;
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == c)
			cnt++;
	}
	return cnt;
}

void word_print(char *s) {
	for (int i = 'a'; i < 'z'; i++) {
		printf("%c: %d", i, str_chr(s, i));
		printf("\n");
	}
	
}

int main() {
	char ch[50];
	printf("문자열을 입력하시오.");
	gets_s(ch, 50);
	word_print(ch);
	

}

#endif
