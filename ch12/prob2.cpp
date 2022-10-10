#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char arr[50];
	printf("공백 문자를 포함해 문자열을 입력하시오.");
	gets_s(arr, 50);
	for (int i = 0; i < 50; i++) {
		if (arr[i] != ' ')
			printf("%c", arr[i]);
	}
}

#endif