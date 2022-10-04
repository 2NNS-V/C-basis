#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void get_random() {
	static int inited = 0;
	if (inited == 0) {
		srand((unsigned)time(NULL));
		printf("초기화 실행\n");
		inited = 1;
	}
	else
		printf("%d\n", rand());
		

}

int main() {
	get_random();
	get_random();
	get_random();
	get_random();

}