#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6


int main() {
	int freq[SIZE] = { 0, };
	for (int i = 0; i < 10000; i++) {
		int face;
		face = rand() % 6;
		freq[face]++;
	}
	
	printf("=================\n");
	printf("  면      빈도   \n");
	printf("=================\n");


	for (int i = 0; i < SIZE; i++) {
		printf("%d %d\n", i+1, freq[i]);
	}
}