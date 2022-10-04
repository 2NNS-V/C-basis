#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5


int main() {
	int s[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j =0;j<COLS;j++) 
			s[i][j] = rand() % 100;
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);
		printf("\n");
	}

}
