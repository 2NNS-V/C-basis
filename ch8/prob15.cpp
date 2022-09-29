#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	for (int i = 2; i < n; i++) {
			if (n % i == 0) // 소수 아님
				return 0;
	}
	return 1; // 소수
}


int main() {
	int n;
	for (int i = 2; i <= 100; i++) {
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	printf("\n");
}

#endif
