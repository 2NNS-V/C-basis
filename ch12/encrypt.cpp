#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main() {
	char arr[50];
	int shift = 3;

	printf("문자열을 입력하시오.:");
	gets_s(arr, 50);
	encrypt(arr, shift);
}


void encrypt(char cipher[], int shift) {
	int i = 0;
	while (cipher[i] != NULL) {
		if (cipher[i] >= 'A' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("암호화된 문자열 : %s", cipher);
}

#endif
