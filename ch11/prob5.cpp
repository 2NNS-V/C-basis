#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		grades[i] = (grades[i] * 100) / 4.3;
		scores[i] = grades[i];
	}
		
}

int main() {
	double grades[10] = { 1.5,2.3,2.8,3.9,4.0,4.2,2.9,3.0,3.6,4.2 };
	double scores[10] = { 0 };
	
	for (int i = 0; i < 10; i++) {
		printf("%f ", grades[i]);
	}

	convert(grades, scores, 10);
	for (int i = 0; i < 10; i++) {
		printf("%f ", scores[i]);
	}
}

#endif
