#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int ch;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�.");
		
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
