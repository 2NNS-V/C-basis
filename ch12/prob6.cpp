#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void str_upper(char* s) {
	for (int i = 0; i<strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
}

int main() {
	char c[100];
	printf("문자열을 입력하시오.");
	gets_s(c, 100);
	str_upper(c);
	printf("변환된 문자열:%s", c);
}

#endif
