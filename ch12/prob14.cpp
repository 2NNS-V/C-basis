#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
	char s[SIZE], word[SIZE], ch[SIZE], *c[SIZE];
	char* token;
	int cnt = 0;
	printf("���ڿ��� �Է��ϼ���.");
	gets_s(s, SIZE);

	token = strtok(s, " ");
	for (int i = 0; token != NULL; i++) {
		c[i] = token;
		token = strtok(NULL, " ");
		cnt++;
	}

	printf("ã�� ���ڿ�:");
	gets_s(word, SIZE);

	printf("�ٲ� ���ڿ�:");
	gets_s(ch, SIZE);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(word, c[i]) == 0) // c�� word�� �ִ��� ã��
			c[i] = ch;
	}

	for (int i = 0; i < cnt; i++) {
		printf("%s ", c[i]);

	}
}

#endif
