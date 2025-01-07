//10828
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100];
int top = -1;

int push(int item);
int pop();
int empty();

int main() {

	int n,i,x;
	char str[10];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", &str);
		if (!strcmp(str, "push")) {
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", pop());
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", top + 1);
		}
		else if (!strcmp(str, "empty")) {
			if (top == -1) {
				printf("1\n");
			}
			else printf("0\n");
		}
		else if (!strcmp(str, "top")) {
			if (top == -1) printf("-1\n");
			else {
				printf("%d\n", stack[top]);
			}
		}
	}


	return 0;
}

int push(int item) {
	stack[++top] = item;
}

int pop() {
	if (top < 0) {
		return -1;
	}
	else return stack[top--];
}
