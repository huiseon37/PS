//2675
#include <stdio.h>

int main() {

	int n,i,j,k;
	int r;
	char arr[20];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%d %s", &r, &arr);

		for (j = 0; arr[j] != '\0'; j++) {
			for (k = 0; k < r; k++) {
				printf("%c",arr[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
