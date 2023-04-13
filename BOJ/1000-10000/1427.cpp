//1427
#include <stdio.h>

void merge(int num[], int left, int mid, int right);
void mergesort(int num[], int left, int right);

int main() {

	int n[10],p,j,k=0;

	scanf("%d", &p);
	
	while (p > 0) {
		n[k] = p % 10;
		p /= 10;
		k++;
	}

	mergesort(n, 0, k-1);

	for (j = k-1; j >= 0; j--) {
		printf("%d", n[j]);
	}

	return 0;
}

void mergesort(int num[], int left, int right) {
	
	int mid;

	if (right > left) {
		mid = (right + left) / 2;
		mergesort(num, left, mid);
		mergesort(num, mid + 1, right);
		merge(num, left, mid + 1, right);
	}

}

void merge(int num[], int left, int mid, int right) {

	int i, left_end, num_items, tmp_pos;
	int temp[100];

	left_end = mid - 1;
	tmp_pos = left;
	num_items = right - left + 1;

	while ((left <= left_end) && (mid <= right)) {
		if (num[left] <= num[mid]) {
			temp[tmp_pos] = num[left];
			tmp_pos = tmp_pos + 1;
			left = left + 1;
		}
		else {
			temp[tmp_pos] = num[mid];
			tmp_pos = tmp_pos + 1;
			mid = mid + 1;
		}
	}
	while (left <= left_end) {
		temp[tmp_pos] = num[left];
		left = left + 1;
		tmp_pos = tmp_pos + 1;
	}
	while (mid <= right) {
		temp[tmp_pos] = num[mid];
		mid = mid + 1;
		tmp_pos = tmp_pos + 1;
	}
	for (i = 0; i < num_items; i++) {
		num[right] = temp[right];
		right = right - 1;
	}
}
