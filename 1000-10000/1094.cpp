//1094
#include <stdio.h>

int main() {

	int s = 64, n, count = 0;

	scanf("%d", &n);

	while (n > 0) {

		if (s > n) {
			s /= 2;
		}
		else {
			count++;
			n -= s;
		}
	}
	
	printf("%d", count);

}
