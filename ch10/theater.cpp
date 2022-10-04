#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ch;
	int seats[SIZE] = { 0 };
	int num;
	
	while (1) {
		printf("좌석을 입력하시겠습니까?(y/n)");
		scanf(" %c", &ch);

		if (ch == 'n')
			break;

		printf("--------------------\n");
		for (int i = 0; i < SIZE; i++)
			printf("%d ", i+1);
		printf("\n");
		printf("--------------------\n");
		for (int i = 0; i < SIZE; i++)
			printf("%d ", seats[i]);
		printf("\n");
		printf("몇 번째 좌석을 입력하시겠습니까?");
		scanf("%d", &num);
		if (seats[num - 1] == 0) {
			seats[num - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 자리 입니다.\n");
				
		}
	}

#endif

