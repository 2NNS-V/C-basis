#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char buf[200];
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�.:");
	gets_s(buf);
	if (!isupper(buf[0]))
		buf[0] = toupper(buf[0]);

	if (buf[strlen(buf)-1] != '.') {
		buf[strlen(buf)] = '.';
		buf[strlen(buf) + 1] = NULL;
	}
			
	printf("������ �ؽ�Ʈ:%s", buf);

}

#endif
