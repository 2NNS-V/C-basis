#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	return rand() % 2;
}

int main() {
	int n;
	char input;

	srand((unsigned)time(NULL));
	while (1) {
		printf("��(1) / ��(0) ? :");
		scanf("%d", &n);
		if (b_rand() == n)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�?(y/n):");
		scanf(" %c", &input);

		if (input == 'y')
			continue;
		else
			break;
	}
	return 0;
}

#endif
