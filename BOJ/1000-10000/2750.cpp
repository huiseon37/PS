//2750
#include <stdio.h>

void insertion(int num[], int n);

int main() {

	int n,i,j;
	int a[1000] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	insertion(a, n);

	for (j = 0; j < n; j++) {
		printf("%d\n", a[j]);
	}
}

void insertion(int num[], int n) {
	
	int i, j, pivot;
	for (i = 1; i < n; i++) {
		pivot = num[i];
		for (j = i - 1; j >= 0 && pivot < num[j]; j--) {
			num[j + 1] = num[j];
		}
		num[j + 1] = pivot;
	}
}
