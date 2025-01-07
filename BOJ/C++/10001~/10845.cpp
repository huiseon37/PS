//10845
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int queue[10000];
int front = -1;
int rear = -1;

int push(int item);
int pop();

int main() {

	int n, i, x;
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
			printf("%d\n", rear - front);
		}
		else if (!strcmp(str, "empty")) {
			if (front == rear) {
				printf("1\n");
			}
			else printf("0\n");
		}
		else if (!strcmp(str, "front")) {
			if (front == rear) printf("-1\n");
			else {
				printf("%d\n", queue[front + 1]);
			}
		}
		else if (!strcmp(str, "back")) {
			if (front == rear) printf("-1\n");
			else printf("%d\n", queue[rear]);
		}
	}

	return 0;
}

int push(int item) {
	queue[++rear] = item;
}

int pop() {
	if (front == rear) {
		return -1;
	}
	else {
		return queue[++front];
	}
}
