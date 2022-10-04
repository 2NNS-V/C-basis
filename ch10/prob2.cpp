#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
	int arr[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++) 
		arr[i] = rand();
	int min = arr[0];
	int max = arr[9];

	for (int i = 0; i < SIZE; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	
	for (int i = 0; i < SIZE; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);
}


#endif
