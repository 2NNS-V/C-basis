#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int key;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž���� ���� �Է��ϼ���.");
	scanf("%d", &key);

	for (int i = 0; i < SIZE; i++) {
		if (list[i] == key)
			printf("Ž���� �����Ͽ����ϴ�. �ε��� = %d", i);
	}

	return 0;
}
#endif
