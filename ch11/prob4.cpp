#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_print(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf(" }");
}

int main() {
	int a[10]={ 1,2,3,4,5 };
	array_print(a, 10);
}

#endif