//11729
#include <stdio.h>

int hanoi(int n, int a, int b);

int main(void) {

	int num,count=1,i;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		count *= 2;
	}
	printf("%d\n", count - 1);
	hanoi(num, 1, 3);

	return 0;
}

int hanoi(int n,int a, int b) {
	int c;

	if (n == 1) {
		printf("%d %d\n", a, b);
	}
	else {
		c = 6 - a - b;
		hanoi(n - 1, a, c);
		printf("%d %d\n", a, b);
		hanoi(n - 1, c, b);

	}
}
