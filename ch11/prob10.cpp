#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_gcd(int x, int y) {
	if (y == 0)
		return x;
	return get_gcd(y, x % y);
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	*p_gcd = get_gcd(x,y);
	*p_lcm = (x * y) / *p_gcd;
}

int main() {
	int a, b, gcd, lcm;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d", &a, &b);
	get_gcd(a, b);
	get_lcm_gcd(a, b, &lcm, &gcd);
	printf("�ּҰ������ %d�Դϴ�.", lcm);
	printf("\n�ִ������� %d�Դϴ�.", gcd);
}

#endif

