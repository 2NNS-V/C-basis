#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
	int prices[SIZE] = { 0 };
	int min; 
	srand((unsigned)time(NULL));
	for (int i=0;i< SIZE;i++)
		prices[i] = rand() % 100+1; // 0~100 난수 rand()%100
	printf("---------------------\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d  ", i+1);
	printf("\n");
	printf("---------------------\n");
	for (int i = 0; i < SIZE; i++)
		printf("%-3d ", prices[i]);
	printf("\n\n");
	min = prices[0];
	for (int i = 1; i < SIZE; i++) {
		if (prices[i] < min)
			min = prices[i];
	}
	printf("최솟값은 %d\n", min);
	return 0;
}
#endif
