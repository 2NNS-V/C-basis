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
	printf("���ڿ��� �Է��Ͻÿ�.");
	gets_s(c, 100);
	str_upper(c);
	printf("��ȯ�� ���ڿ�:%s", c);
}

#endif
