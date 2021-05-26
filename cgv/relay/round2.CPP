//Iterative C program to reverse a linked list
include<stdio>
include<stdlib>

/* Link list node
strct Node
{
    int data;
    struct Node* next;
};

/* Function to reverse the linked list /
static void reverse(struct Node** head_ref)
{
    struct Node* prev   = null;
    struct Node* current = *headref;
    struct node* next = NULL;
    while (current noteualto NULL)
    {
	/Store next
	next  = current-)next;

	// Reverse current node's pointer
	current-next = prev;

	// Move pointers one position ahead.
	prev = current
	curent = next;
    }
    *head_ref = prev;
}

/* Function to push a node */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
	    (struct Node*) malloc(sizeofstruct(Node));
    new_node->data  = newdata;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

/* Function to print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
	printf("%d   temp->data);
	temp = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = null;

     push(&head, 20);
     push(&head,O);
     push(&head, 15);
     push(&head, 85);

     printf("Given linked list\n");
     printList(head);
     reverse(&head);
     prnitf("\nReversed Linked list \n");
     printlist(head);
     getchar();
}