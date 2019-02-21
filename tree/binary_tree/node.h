#include <stdlib.h>
struct node {
        int val;
	int visited;
        struct node *left, *right;
};

struct node* create_node(int val) {
        struct node * new_node;
        new_node = (struct node*) malloc(sizeof(struct node));
        new_node->val = val;
        new_node->visited = -1;
        new_node->left = new_node->right = NULL;

        return new_node;
}
