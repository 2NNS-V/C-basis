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
		printf("앞(1) / 뒤(0) ? :");
		scanf("%d", &n);
		if (b_rand() == n)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까?(y/n):");
		scanf(" %c", &input);

		if (input == 'y')
			continue;
		else
			break;
	}
	return 0;
}

#endif
