#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int y;
	scanf("%d", &y);
	if (is_year(y) == 0)
		printf("%d���� 366���Դϴ�.", y);
	else
		printf("%d���� 365���Դϴ�.", y);

}
#endif