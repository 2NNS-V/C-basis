
#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
	int tmp, least;
	for (int i = 0; i < SIZE - 1; i++) {
		least = i;
		for (int j = i+1; j < SIZE; j++) {
			if (list[j] < list[least])
				least = j; // 더 작은 값
		}
		tmp = list[i]; // 임시 배열에 저장
		list[i] = list[least]; 
		list[least] = tmp;
	}

	for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
}

#endif
