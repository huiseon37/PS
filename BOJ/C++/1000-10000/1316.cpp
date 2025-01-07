//1316
#include <stdio.h>
#include <stdlib.h>

char word[100] = { 0 };
int groupword();

int main() {

	int n = 0, count = 0;
	int i;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", &word);
		if (groupword())
			count++;
	}

	printf("%d", count);

	return 0;
}

int groupword() {

	int a[26] = { 0 };
	int i;

	a[word[0] - 97] = 1;

	for (i = 1; word[i] != '\0'; i++) {
		if (word[i] == word[i - 1]) {
			continue;
		}
		else if(a[word[i] - 97] == 1) {
			return 0;		
		}
		else {
			a[word[i] - 97] = 1;
		}
	}

	return 1;
}
