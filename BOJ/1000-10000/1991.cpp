//1991
#include <stdio.h>

typedef struct tree_node *tree_node_ptr;

struct tree_node {
	
	char data;
	tree_node_ptr left;
	tree_node_ptr right;

};

tree_node_ptr tree[100];
void post(tree_node_ptr ptr);
void pre(tree_node_ptr ptr);
void in(tree_node_ptr ptr);
tree_node_ptr make_node(char data);

int main() {

	int n,i,j,c;
	char t1, t2, t3;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {

		tree[i] = make_node(65+i);
	
	}
	
	for (i = 0; i < n; i++) {

		scanf(" %c %c %c", &t1, &t2, &t3);

		c = t1 - 'A';

		for (j = 0; j < n; j++) {

			if (t2 == tree[j]->data) {
				tree[c]->left = tree[j];
			}
			if (t3 == tree[j]->data) {
				tree[c]->right = tree[j];
			}

		}
	}

	pre(tree[0]);
	printf("\n");
	in(tree[0]);
	printf("\n");
	post(tree[0]);
	printf("\n");

	return 0;
}

void post(tree_node_ptr ptr) {

	if (ptr) {
		post(ptr->left);
		post(ptr->right);
		printf("%c", ptr->data);
	}
}

void pre(tree_node_ptr ptr) {

	if (ptr) {
		printf("%c", ptr->data);
		pre(ptr->left);
		pre(ptr->right);
	}
}

void in(tree_node_ptr ptr) {

	if (ptr) {
		in(ptr->left);
		printf("%c", ptr->data);
		in(ptr->right);
	}
}
tree_node_ptr make_node(char data) {

	tree_node_ptr temp;
	temp = (tree_node_ptr)malloc(sizeof(struct tree_node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;

}
