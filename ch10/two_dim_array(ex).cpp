#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 5


int main() {
	int arr[ROWS][COLS] = { {87, 98, 80,76,3}, {99,89,90,90,0}, {65,68,50,49,0} };
	
	for (int i = 0; i < ROWS; i++) {
		double score = 0.3 * arr[i][0] + 0.4 * arr[i][1] + 0.2 * arr[i][2] + 0.1 * arr[i][3] - arr[i][4];
		printf("학생 %d 점수 : %lf\n", i+1, score);
	}
}
#endif
