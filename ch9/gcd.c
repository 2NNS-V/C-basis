#include <stdio.h>

int gcd(int x, int y) { // x > y
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main() {
	printf("%d ", gcd(30, 20));
}