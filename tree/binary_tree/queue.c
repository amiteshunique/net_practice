#include<stdio.h>
#include<stdlib.h>
struct list_node {
	void *ptr;
	struct list_node* next;
}
int add_list(struct list_node** head, void *object) {
	struct list_node *curr;
	if (head == NULL) {
		*head = (struct list_node*) malloc(sizeof(struct list_node));
	}
	curr = *head;
	while ( curr->next != NULL ) 
		curr = curr->next;
	curr->next = (struct list_node*) malloc(sizeof(struct list_node));

	curr = curr->next;
	curr->ptr = object;
	curr->next = NULL;
}
