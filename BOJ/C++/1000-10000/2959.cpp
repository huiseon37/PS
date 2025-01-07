//2959
#include <stdio.h>

void quick(int num[], int left, int right);

int main() {

	int t[4];
	int i;

	for (i = 0; i < 4; i++) {
		scanf("%d", &t[i]);
	}

	quick(t, 0, 3);

	printf("%d", t[0] * t[2]);


	return 0;
}

void quick(int num[], int left, int right) {

	int pivot, i, j, temp;

	if (left < right) {
		i = left;
		j = right + 1;
		pivot = num[left];

		do {
			do { i++; } while (num[i] < pivot);
			do { j--; } while (num[j] > pivot);
			if (i < j) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		} while (i < j);

		temp = num[left];
		num[left] = num[j];
		num[j] = temp;

		quick(num, left, j - 1);
		quick(num, j + 1, right);
	}
}
