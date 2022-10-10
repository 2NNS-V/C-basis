#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int ch;
	while (1) {
		printf("문자를 입력하시오.");
		
		ch = getchar();
		getchar();
		if (islower(ch))
			putchar(toupper(ch));
		if (isupper(ch))
			putchar(tolower(ch));
		if (!isalpha(ch))
			printf("wrong");
		if (ch == '.')
			break;
		printf("\n");
	}
}

#endif
