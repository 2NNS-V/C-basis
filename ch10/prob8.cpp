#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	int arr[10] = { 0 };
	int sum = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("�����͸� �Է��Ͻÿ�.%d\n", arr[i]=rand() % 100);
		sum += arr[i];
	}
	 double mean = sum / 10;

	printf("��հ��� %lf\n", mean);
	sum = 0;
	for (int i = 0; i < 10; i++)
		sum += (arr[i] - mean) * (arr[i] - mean);
	double v = sqrt(sum / 10);
	printf("ǥ���������� %lf\n", v);

}

#endif
