#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ch;
	int seats[SIZE] = { 0 };
	int num;
	
	while (1) {
		printf("�¼��� �Է��Ͻðڽ��ϱ�?(y/n)");
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
		printf("�� ��° �¼��� �Է��Ͻðڽ��ϱ�?");
		scanf("%d", &num);
		if (seats[num - 1] == 0) {
			seats[num - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ� �Դϴ�.\n");
				
		}
	}

#endif

