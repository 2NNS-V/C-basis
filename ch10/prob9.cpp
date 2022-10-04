#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 10
#define TESTS 3

int main() {
	int scores[STUDENTS][TESTS];
	int max=0, min=0;
	for (int i = 0; i < TESTS; i++) {
		for (int j = 0; j < STUDENTS; j++) 
			scores[j][i] = rand() % 100+1;
	}

	for (int i = 0; i < TESTS; i++) {
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j][i] > scores[max][i])
				max = j;
			else if (scores[j][i] > scores[min][i])
				min = j;
		}
		
		printf("시험 #%d의 최대점수=%d\n", i, scores[max][i]);
		printf("시험 #%d의 최저점수=%d\n", i, scores[min][i]);
	}

	
}

#endif
