#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main() {
	int data[ROWS][COLS] = { {12,56,32,16,98}, {99,56,34,41,3}, {65,3,87,78,21} };
	int i, j, sum;
	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 5; j++)
			sum += data[i][j];
		printf("%d행의 합계: %d\n", i, sum);
	}

	for (j = 0; j < 5; j++) {
		sum = 0;
		for (i = 0; i < 3; i++)
			sum += data[i][j];
		printf("%d열의 합계: %d\n", j, sum);
	}
	return 0;
}



#endif
