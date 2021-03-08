//2941
#include <stdio.h>

int main() {

	char arr[101];
	int num=0,i;

	scanf("%s", &arr);

	for (i = 0; arr[i] != '\0';i++) {
		if (arr[i] == 'c') {
			if (arr[i + 1] == '-' || arr[i + 1] == '=') num--;
		}
		else if (arr[i] == 'd') {
			if (arr[i + 1] == '-') {
				num--;
			}
			else if (arr[i + 1] == 'z') {
				if (arr[i + 2] == '=') {
					num--;
				}
			}
		}
		else if (arr[i] == 'j') {
			if (i != 0) {
				if (arr[i - 1] == 'l' || arr[i - 1] == 'n') num--;
			}
		}
		else if (arr[i] == 's' || arr[i] == 'z') {
			if (arr[i + 1] == '=')  num--;
		}
		num++;
	}

	printf("%d", num);

	return 0;
}
