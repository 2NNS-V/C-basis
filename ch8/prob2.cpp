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
		printf("%c�� ���ĺ� �����Դϴ�.", c);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.");
}


#endif