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
	printf("��ǰ��ȣ�� �Է��ϼ���.");
	scanf("%d", &product_num);
	if (product_num > 10 || product_num < 0)
		printf("�߸� �Է��ϼ̽��ϴ�.");
	else 
		printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.", product_num, arr[product_num]);

}

#endif
