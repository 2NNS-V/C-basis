#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main() {
	int index = 0;
	char dic[WORDS][2][30] ={
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"}
	};
	char word[30];

	printf("단어를 입력하시오.: ");
	scanf("%c", word);
	for (int i = 0; i < WORDS; i++) {
		if (strcmp(dic[index][0], word) == 0)
			printf("%c: %c \n", word, dic[index][1]);
		index++;
	}
	printf("사전에 없습니다.");
}


#endif
