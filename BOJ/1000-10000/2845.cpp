//2845
#include <stdio.h>

int main() {

	int l, p, num,i;
	int arr;

	scanf("%d", &l);
	scanf("%d", &p);

	num = l*p;

	for (i = 0; i < 5; i++) {

		scanf("%d", &arr);
		printf("%d ", arr - num);
	}
	return 0;
}
