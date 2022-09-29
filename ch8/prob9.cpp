#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	int i = rand() % 2;
	return i;
}

int main() {
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("%d ", b_rand());
	}
}
#endif