#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRODUCT 10

int main() {
	int arr[PRODUCT] = { 1,5,2,3,4,1,5,3,2,2 };
	int product_num;
	printf("=====================\n");
	printf("     1 2 3 4 5\n");
	printf("=====================\n");
	printf("상품번호를 입력하세요.");
	scanf("%d", &product_num);
	if (product_num > 10 || product_num < 0)
		printf("잘못 입력하셨습니다.");
	else 
		printf("상품 번호 %d의 위치는 %d입니다.", product_num, arr[product_num]);

}

#endif
