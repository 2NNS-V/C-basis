#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int get_response(char* prompt) {
	if (strcmp(prompt, "yes")==0 || strcmp(prompt, "ok") == 0)
		return 1;
	else if (strcmp(prompt, "no") == 1)
		return 0;
}

int main() {
	char ch[SIZE];
	printf("������ �Ͻðڽ��ϱ�?");
	scanf("%s", &ch);
	for (int i = 0; i < strlen(ch); i++) 
		ch[i] = tolower(ch[i]); // ��� ���ڸ� �ҹ��ڷ� �ٲپ� ��
	if ((get_response(ch)) == 1)
		printf("�������� �亯\n");
	else
		printf("�������� �亯");
}

#endif