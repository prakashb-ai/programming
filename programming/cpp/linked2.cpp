
//2A: write a meny driven program to implement SINGLY LINKED LIST and the various operations like 
//insertbegin,delete begin ,insert end, delete end,traversal;

#include <stdio.h>
#include<stdlib.h>
// single linked list
typedef struct node {
	int info;
	struct node* link;
}s_list;
s_list* start = NULL;

// in single linked list insert at front
void insert_begin()
{
	int data;
	s_list* temp;
	temp = (s_list*)malloc(sizeof(s_list));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	// Pointer of temp will be
	// assigned to start
	temp->link = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insert_end()
{
	int data;
	s_list *temp, *head;
	temp = (s_list*)malloc(sizeof(s_list));

	// Enter the number
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);

	// Changes links
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}
// it is the delete begin of the element  in the linked list
void delete_begin()
{
	s_list* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}

// Function to delete from the end
// of the linked list
void delete_End()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->link != NULL) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = NULL;
	}
}
// it is the traversal of the single linked list
void traversal()
{
	s_list* temp;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n",
				temp->info);
			temp = temp->link;
		}
	}
}


int main()
{
	int choice;
	while (1) {
          printf("1. to be insert begin\n");
          printf("2. to be delete begin \n");
          printf("3.  to be insert end\n");
          printf("4. to be delete end\n");
          printf("5. traversal\n");
          printf("\n");
          printf("\n enter the choice of the operations:-");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
        	insert_begin();

			break;
		case 2:
        	delete_begin();

			break;
		case 3:
			insert_end();
			break;
		case 4:
			delete_End();
			break;
		case 5:
             traversal();

  			break;
		case 6:
            	exit(1);
			break;
				default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}