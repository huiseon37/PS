//1026
#include <stdio.h>

void bubble(int num[], int n);

int main() {

	int n,i,sum=0;
	int a[50], b[50], c[50];
	
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		c[i] = b[i];
	}

	bubble(a, n);
	bubble(c, n);

	for (i = 0; i < n; i++) {
		sum += a[i] * c[n - i - 1];
	}

	printf("%d", sum);

	return 0;
}

void bubble(int num[], int p) {

	int i, j, swap, temp;

	for (i = 0; i < p - 1; i++) {
		swap = 0;
		for (j = 0; j < p - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				swap = 1;
			}
		}
		if (swap == 0) break;
	}
}
