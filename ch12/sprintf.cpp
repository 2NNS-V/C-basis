#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char filename[100];
	char s[100];

	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image"); // filename�� "image" ����
		sprintf(s, "%d", i); // s�� ���� i�� ���� ���ڿ��� ��ȯ�� ����
		strcat(filename, s); // filename�� s �߰�
		strcat(filename, ".jpg"); // filename�� ".jpg" �߰�
		printf("%s \n", filename);
	}
}


#endif
