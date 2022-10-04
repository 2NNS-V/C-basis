#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
	int a[ROWS][COLS] = { {2,3,0}, {8,9,1}, {7,0,5} };
	int b[ROWS][COLS] = { {1,0,0 }, {1,0,0}, {1,0,0} };
	int c[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

#endif
