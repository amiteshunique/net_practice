#include <stdio.h>
struct node {
	int val;
	struct node *left, *right;
};

struct node* create_node(int val) {
	struct node * new_node;
	new_node = (struct node*) malloc(sizeof(struct node));
	new_node->val = val;
	new_node->left = new_node->right = NULL;

	return new_node;
}

int main() {
	//create a tree: 11.50
	struct node* root;
	root = create_node(10);
	root->left = create_node(5);
	root->right = create_node(20);

	root->left->left  = create_node(3);
	root->left->right = create_node(8);

	root->right->left = create_node(15);
	root->right->right = create_node(25);

}
