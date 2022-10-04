#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void vector_add(double x[], double y[], double z[]) {
	for (int i = 0; i < 3; i++) {
		z[i]s = x[i] + y[i];
	}
	printf("º¤ÅÍÀÇ ÇÕ = [ ");
	for (int i = 0; i < 3; i++) {
		printf("%lf ", z[i]);
	}
	printf(" ]\n");
}

void vector_dot_prod(double x[], double y[]) {
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += x[i]*y[i];
	}
	printf("º¤ÅÍÀÇ ³»Àû=%lf ", sum);
}

int main() {
	double x[3] = { 1,2,3 }, y[3] = { 4,5,6 }, z[3] = { 0 };
	vector_add(x, y, z);
	vector_dot_prod(x, y);
}

#endif