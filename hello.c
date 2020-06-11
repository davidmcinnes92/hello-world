#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	
	char reply[50];
	
	printf("Is it your birth month?: ");
	// Get the user response
	fgets(reply, 50, stdin);
	if (strcmp("yes", reply))
		printf("Yes, it is your birth month! I love you! \n");
	else
		printf("But it is your birth month! I love you!\n");
}

// Takes two integers and adds them together simply
int add(int num1, int num2)
{
	return num1 + num2;
}

// Takes two integers and subtracts the second from the first
int subtract(int num1, int num2)
{	
	return num1 - num2;
}


