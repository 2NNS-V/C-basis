#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scalar_mult(int a[][3], int scalar) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", scalar * a[i][j]);
		} 
		printf("\n");
	}
}

void transpose(int a[][3], int b[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = a[j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int a[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int b[][3] = { 0 };
	scalar_mult(a, 2);
	printf("\n");
	transpose(a, b);
	return 0;
}