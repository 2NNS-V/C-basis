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

int main() {
	char arr[50];
	char ch;
	printf("���ڿ��� �Է��Ͻÿ�.:");
	gets_s(arr, 50);
	printf("������ �� ���ڸ� �Է��Ͻÿ�.");
	scanf("%c", &ch);
	printf("%c�� ����:%d", ch, str_chr(arr, ch));
}

#endif
