#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main() {
	int index = 0;
	char dic[WORDS][2][30] ={
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"}
	};
	char word[30];

	printf("�ܾ �Է��Ͻÿ�.: ");
	scanf("%c", word);
	for (int i = 0; i < WORDS; i++) {
		if (strcmp(dic[index][0], word) == 0)
			printf("%c: %c \n", word, dic[index][1]);
		index++;
	}
	printf("������ �����ϴ�.");
}


#endif
