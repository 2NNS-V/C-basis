#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char ch;
int x, y;

void add() {
	static int cnt = 1;
	printf("덧셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", x+y);
	cnt++;
}

void subtract() {
	static int cnt = 1;
	printf("뺄셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", x -y);
	cnt++;

}

void multiply() {
	static int cnt = 1;
	printf("곱셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", x* y);
	cnt++;

}

void division() {
	static int cnt = 1;
	printf("나눗셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", x/ y);
	cnt++;

}

int main() {
	while (1) {
		printf("연산을 입력하시오.:");
		scanf("%d%c%d", &x, &ch, &y);
		if (ch == '+')
			add();
		else if (ch == '-')
			subtract();
		else if (ch == '*')
			multiply();
		else if (ch == '/')
			division();
		else
			printf("잘못 입력하셨습니다.\n");
	}
	
}