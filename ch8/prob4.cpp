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
		printf("%d년은 366일입니다.", y);
	else
		printf("%d년은 365일입니다.", y);

}
#endif