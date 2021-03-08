//2953
#include <stdio.h>

int main() {

	int max=0,i,sum,n;
	int a,b,c,d;

	for (i = 0; i < 5; i++) {

		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum = a + b + c + d;

		if (max < sum) {
			max = sum;
			n = i + 1;
		}
	}
	printf("%d %d", n, max);
	return 0;
}
