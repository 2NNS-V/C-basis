#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void array_fill(int* A, int size) {
	for (int i = 0; i < size; i++) {
		A[i] = rand();
	}
}

int main() {
	int a[10] = { 0 };
	array_fill(a, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	

}

#endif
