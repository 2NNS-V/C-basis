#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int check_alpha(char ch) {
	if (ch >= 'a' && ch <= 'z')
		return 1;
	else
		return 0;
}

int main() {
	char c;
	scanf("%c", &c);
	if (check_alpha(c) == 1)
		printf("%c는 알파벳 문자입니다.", c);
	else
		printf("%c는 알파벳 문자가 아닙니다.");
}


#endif