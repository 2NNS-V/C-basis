#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

void array_print(int *A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
}

int main() {
	int a[10] = { 1,2,3 };
	int b[10] = { 0 };

	array_copy(a, b, 10);
	printf("A[] = ");
	array_print(a, 10);
	printf("\n");
	printf("B[] = ");
	array_print(b, 10);
	return 0;
}

#endif
