#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


char c[200];
int ispalindrome(char s[]) {
	int i = strlen(s) - 1;
	for (int j = 0; j<strlen(s); j++) {
		c[j] = s[i];
		i--;
	}

	for (int k = 0; k < strlen(s); k++) {
		if (s[k] != c[k])
			return 1;
	}
	return 0;
}

int main() {
	char s[200];
	printf("���ڿ��� �Է��Ͻÿ�.");
	gets_s(s, 200);

	if (ispalindrome(s) == 1)
		printf("ȸ���� �ƴմϴ�.");
	else 
		printf("ȸ���Դϴ�.");
}

#endif
