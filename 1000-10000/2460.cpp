//2460
#include <stdio.h>

int main() {

	int i,a,b,sum=0,max = 0;

	for (i = 0; i < 10; i++) {

		scanf("%d", &a);
		scanf("%d", &b);
		sum = sum - a + b;
		
		if (max < sum) {
			max = sum;
		}
	}

	printf("%d", max);

	return 0;
}
