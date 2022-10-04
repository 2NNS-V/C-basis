#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5

int sum(int a[YEARS][PRODUCTS]) {
	int total = 0;
	for (int i = 0; i < YEARS; i++) 
		for (int j = 0; j < PRODUCTS; j++) 
			total += a[i][j];
	return total;
}


int main() {
	int sales[YEARS][PRODUCTS] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int total_sale;

	total_sale = sum(sales);
	printf("총 매출은 %d입니다.", total_sale);

}

#endif
