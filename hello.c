#include <stdio.h>
#include <stdlib.h>

// Typedef for the node of the linked list
typedef struct node {
	int val;
	struct node* next;
} node_t;


int add(int num1, int num2);

int main()
{
	printf("%s", "Hello, world! \n");
	printf("%d \n", add(1, 2));
	printf("%d \n", rand());
	
	node_t *head = NULL;
	node_t *next = NULL;
	head = (node_t *) malloc(sizeof(node_t));
	next = (node_t *) malloc(sizeof(node_t));
	
	if (head == NULL) {
		return 1;
	}
	
	head->val = 1;
	head->next = next;
	
	head->val = 5;
	
	printf("%d \n", head->val);
	
	// Free the memory to prevent memory leaks
	free(head);	
	free(next);
}

// Takes two integers and adds them together simply
int add(int num1, int num2)
{
	return num1 + num2;
}