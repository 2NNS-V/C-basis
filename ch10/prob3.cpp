#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] == b[i])
			return 1;
		else
			return 0;
	}		
}

int main() {
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++) 
		printf("%d ", a[i]);
	printf("\n");
	for (int i=0;i<SIZE;i++)
		printf("%d ", b[i]);
	printf("\n");

	if ((array_equal(a, b, SIZE) == 0))
		printf("2개의 배열은 다름");
	else
		printf("2개의 배열은 같음");


}


#endif
