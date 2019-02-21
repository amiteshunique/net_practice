#include <stdio.h>
#include <stdlib.h>
#include "node.h"
/*
struct node {
	int val;
	struct node *left, *right;
};
*/
extern struct node; 
extern struct node* create_node(int val);
extern int bfs(struct node*);
/*
struct node* create_node(int val) {
	struct node * new_node;
	new_node = (struct node*) malloc(sizeof(struct node));
	new_node->val = val;
	new_node->left = new_node->right = NULL;

	return new_node;
}
*/
int create_tree(struct node** node) {
	/*
	*node = create_node(10);
	(*node)->left = create_node(5);
	(*node)->right = create_node(20);
	*/
	
	struct node *root;
	*node = create_node(10);
	root = *node;
	root->left = create_node(5);
	root->right = create_node(20);
	
	root->left->left  = create_node(3);
	root->left->right = create_node(8);

	root->right->left = create_node(15);
	root->right->right = create_node(25);
	
	return 0;
}

int bfs (struct node* root) {
        //printf("bfs called\n");
        if (root == NULL)
                return -1;
        printf("%d ",root->val);
        bfs(root->left);
        bfs(root->right);
        return 0;
}

int main() {
	//create a tree: 11.50
	struct node* root;
	create_tree(&root);

	printf("Create tree done.%d \n", root->val);
	bfs(root);
}


















