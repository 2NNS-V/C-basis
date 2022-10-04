#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
	int freq[SIZE] = { 0 };
	for (int i = 0; i < 100; i++) {
		freq[rand() % 10]++;
	}
	int max = freq[0];
	for (int i = 0; i < SIZE; i++) {
		if (max < freq[i])
			max = freq[i];
	}
	printf("가장 많이 나온수 = %d", max);
}

#endif