#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}


int main() {
	int n, m;
	printf("ù��° ����:");
	scanf("%d", &n);
	printf("�ι�° ����:");
	scanf("%d", &m);
	if (is_multiple(n, m) == 1)
		printf("%d�� %d�� ����Դϴ�.", n, m);
	else
		printf("����ƴ�");
}

#endif
