#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void encrypt(char cipher[], int shift);

int main() {
	char arr[50];
	int shift = 3;

	printf("���ڿ��� �Է��Ͻÿ�.:");
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
	printf("��ȣȭ�� ���ڿ� : %s", cipher);
}

#endif
