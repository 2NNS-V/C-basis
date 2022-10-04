#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int key;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색할 값을 입력하세요.");
	scanf("%d", &key);

	for (int i = 0; i < SIZE; i++) {
		if (list[i] == key)
			printf("탐색을 성공하였습니다. 인덱스 = %d", i);
	}

	return 0;
}
#endif
