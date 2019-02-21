#include <stdio.h>
#include <stdlib.h>
extern struct node;
int bfs (struct node* root) {
	printf("bfs called in bfs.c\n");
	if (!root)
		return -1;
	printf("%d ",root->val);

	bfs(root->left);
	bfs(root->right);
	return 0;
}
