//1157
#include <stdio.h>
#include <string.h>

int main() {

	char arr[1000001];
	int count[26] = { 0 };
	int max = 0, same = 0, i=0;

	scanf("%s", &arr);

	while (arr[i]) {

		if (arr[i] > 90) {
			arr[i] = arr[i] - 32;
		}
		count[arr[i] - 65]++;
		i++;

	}
	i = 1;

	while (i < 26) {

		if (count[max] < count[i]) {
			max = i;
			same = 0;
		}
		else if (count[max] == count[i]) {
			same = 1;
		}
		i++;
	}

	if (same) {
		printf("?");
	}
	else {
		printf("%c", max + 65);
	}


	return 0;
}
