#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cnt = 0;

int check(int pw) {
	int login;
	while (1) {
		printf("비밀번호 : ");
		scanf("%d", &login);
		if (pw != login) {
			cnt++;
		}
		if (cnt >= 3)
			break;
	}
	return 0;


}

int main() {
	int pw = 1234;
	if (check(pw) == 0 && cnt >= 3)
		printf("로그인 시도횟수 초과");
}