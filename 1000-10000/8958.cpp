//8958
#include <stdio.h>
#include <string.h>

int main() {

	char arr[80];
	int n, sum = 0, score = 1, i = 0;
	int j;

	scanf("%d", &n);

	for (j = 0; j < n; j++) {
		scanf("%s", arr);

		sum = 0, score = 1, i = 0;

		while (i < strlen(arr)) {
			if (arr[i] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
