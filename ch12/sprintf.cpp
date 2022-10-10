#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char filename[100];
	char s[100];

	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image"); // filename에 "image" 복사
		sprintf(s, "%d", i); // s에 변수 i의 값을 문자열로 변환해 저장
		strcat(filename, s); // filename에 s 추가
		strcat(filename, ".jpg"); // filename에 ".jpg" 추가
		printf("%s \n", filename);
	}
}


#endif
