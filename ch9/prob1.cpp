#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char ch;
int x, y;

void add() {
	static int cnt = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.", cnt);
	printf("\n���� ���: %d\n", x+y);
	cnt++;
}

void subtract() {
	static int cnt = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.", cnt);
	printf("\n���� ���: %d\n", x -y);
	cnt++;

}

void multiply() {
	static int cnt = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.", cnt);
	printf("\n���� ���: %d\n", x* y);
	cnt++;

}

void division() {
	static int cnt = 1;
	printf("�������� �� %d�� ����Ǿ����ϴ�.", cnt);
	printf("\n���� ���: %d\n", x/ y);
	cnt++;

}

int main() {
	while (1) {
		printf("������ �Է��Ͻÿ�.:");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	
}