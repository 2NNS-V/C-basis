#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10][3] = { 0 };
	int num;
	for (int i = 1; i <= 10; i++) {
		arr[i-1][0] = i;
		arr[i-1][1] = i * i;
		arr[i-1][2] = i * i * i;
	}
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++) {
		if (arr[i][2] == num) {
			printf("%d�� ���������� %d", num, arr[i][0]);
		}
	}
}

#endif
