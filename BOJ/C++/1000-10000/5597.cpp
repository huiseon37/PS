//5597
#include <stdio.h>

int main() {

	int i,n;
	int num[30] = { 0 };

	for (i = 0; i < 28; i++) {
		scanf("%d", &n);
		num[n-1] = 1;
	}



	for (i = 0; i < 30; i++) {
		if (num[i] ==0) {
			printf("%d\n", i+1);
		}
	}

	return 0;
}
