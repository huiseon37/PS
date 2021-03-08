//11721
#include <stdio.h>
#include <string.h>

int main() {

	int i;
	char str[100];

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if (i != 0 &&i % 10 == 0) printf("\n");
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
