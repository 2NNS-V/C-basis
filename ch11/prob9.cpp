#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search(int *A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
}


int main() {
	int salary[10] = { 100 ,200 , 300 };
	printf("월급이 200만원인 사람의 인덱스=%d\n", search(salary, 10, 200));
}

#endif
