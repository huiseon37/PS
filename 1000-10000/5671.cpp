//5671
#include <stdio.h>

int main() {

	int n,m,i;
	int a,b,c,d;
	int count;

	while (scanf("%d %d", &n, &m) != EOF) {
		count = 0;
		for (i = n; n <= m; n++) {

			i = n;

			if (i >= 1000) {
				a = i % 10;
				i /= 10;
				b = i % 10;
				i /= 10;
				c = i % 10;
				i /= 10;
				d = i % 10;
				i /= 10;
				if (a != b && a != c && a != d && b != c && b!=d && c!=d) count++;
			}
			else if (i >= 100) {
				a = i % 10;
				i /= 10;
				b = i % 10;
				i /= 10;
				c = i % 10;
				i /= 10;
				if (a != b && a != c && b != c) count++;
			}
			else if (i >= 10) {
				a = i % 10;
				i /= 10;
				b = i % 10;
				i /= 10;
				if (a != b ) count++;
			}
			else {
				count++;
			}
			
		}
		printf("%d \n", count);
	}

	return 0;
}
