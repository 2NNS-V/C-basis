#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_add(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

void array_print(int* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
}

int main() {
	int a[10] = { 1,2,3 };
	int b[10] = { 0 };
	int c[10] = { 0 };
	array_add(a, b, c, 10);
	printf("A[] = ");
	array_print(a, 10);
	printf("\nB[] = ");
	array_print(b, 10);
	printf("\nC[] = ");
	array_print(c, 10);
}



#endif
