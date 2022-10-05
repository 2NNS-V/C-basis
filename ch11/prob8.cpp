#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

void array_print(int* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
}


int main() {
	int salary[10] = { 1,2,3 };
	printf("A[] = ");
	array_print(salary, 10);
	printf("\n월급의 합=%d", array_sum(salary, 10));
}


#endif
