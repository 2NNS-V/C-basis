﻿#if 0
#include <stdio.h>
#include <ctype.h>

int count_word(const char *s) {
	int wc = 0, waiting = 1;
	for (int i = 0; s[i] != NULL; i++) {
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	}
	return wc;
	
}

int main() {
	int wc = count_word("the C book");
	printf("단어의 개수:%d \n", wc);
	return 0;
}
#endif
