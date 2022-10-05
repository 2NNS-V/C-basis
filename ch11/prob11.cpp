#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

void print_array(int* A, int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", A[i]);
}

void merge(int *A, int *B, int *C, int size) {
	int j = 0, k = 0;
	for (int i = 0; i < size*2; i++) {
		if (k < size && j < size) {
			if (A[j] <= B[k]) {
				C[i] = A[j];
				j++;
			}
			else {
				C[i] = B[k];
				k++;
			}
		}
		else {
			if (j == size) {
				C[i] = B[k];
				k++;
			}
			else {
				C[i] = A[j];
				j++;
			}

		}
		
	}
}

int main() {
	int A[SIZE] = { 2,5,7,8 };
	int B[SIZE] = {1, 3, 4, 6};
	int C[SIZE*2] = { 0 };
	merge(A, B, C, SIZE);
	printf("A[] = ");
	print_array(A, SIZE);
	printf("\nB[] = ");
	print_array(B, SIZE);	
	printf("\nC[] = ");
	print_array(C, SIZE*2);

}
#endif
