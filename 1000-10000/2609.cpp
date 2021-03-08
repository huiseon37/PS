//2609
#include <stdio.h>

int gcd(int x, int y);

int main(void) {

	int a, b, num1,num2;

	scanf("%d %d", &a, &b);
	num1 = gcd(a, b);
	num2 = a*b / num1;
	printf("%d\n%d\n", num1, num2);

	return 0;
}

int gcd(int x, int y) {

	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x%y);
	}
}
