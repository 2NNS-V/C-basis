#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void get_dice_face() {
	int n;
	int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
	for (int i = 0; i < 100; i++) {
		n = rand() % 6 +1 ;
		if (n == 1)
			n1++;
		else if (n == 2)
			n2++;
		else if (n == 3)
			n3++;
		else if (n == 4)
			n4++;
		else if (n == 5)
			n5++;
		else if (n == 6)
			n6++;

		if (n1 + n2 + n3 + n4 + n5 + n6 >= 100)
			break;
	}

	printf("1->%d\n", n1);
	printf("2->%d\n", n2);
	printf("3->%d\n", n3);
	printf("4->%d\n", n4);
	printf("5->%d\n", n5);
	printf("6->%d\n", n6);


}

int main() {
	srand((unsigned)time(NULL));
	get_dice_face();

}