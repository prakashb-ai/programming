#include <stdio.h>
#include<stdlib.h>
// Linked List Node
typedef struct node {
	int info;
	struct node* link;
}list;
list* start = NULL;

// Function to traverse the linked list
void display()
{
	list* temp;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n",
				temp->info);
			temp = temp->link;
		}
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	list* temp;
	temp = (list*)malloc(sizeof(list));
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
void insertAtEnd()
{
	int data;
	list *temp, *head;
	temp = (list*)malloc(sizeof(list));

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

// Function to insert at any specified
// position in the linked list
/*void insertAtPosition()
{
	list *temp, *newnode;
	int pos, data, i = 1;
	newnode = (list*)malloc(sizeof(list));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d,%d", &pos, &data);

	// Change Links
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}*/

// Function to delete from the front
// of the linked list
void deleteFirst()
{
	list* temp;
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
void deleteEnd()
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

// Function to delete from any specified
// position from the linked list
/*void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;

	// If LL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		printf("\nEnter index : ");

		// Position to be deleted
		scanf("%d", &pos);
		position = (node *)malloc(sizeof(struct node));
		temp = start;

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		// Change Links
		position = temp->link;
		temp->link = position->link;

		// Free memory
		free(position);
	}
}*/
void sort()
{
	list* current = start;
	list* index = NULL;
	int temp;

	// If LL is empty
	if (start == NULL) {
		return;
	}

	// Else
	else {

		// Traverse the LL
		while (current != NULL) {
			index = current->link;

			// Traverse the LL nestedly
			// and find the minimum
			// element
			while (index != NULL) {

				// Swap with it the value
				// at current
				if (current->info > index->info) {
					temp = current->info;
					current->info = index->info;
					index->info = temp;
				}
				index = index->link;
			}

			// Update the current
			current = current->link;
		}
	}
}

// Function to reverse the linked list
/*void reverseLL()
{
	list *t1, *t2, *temp;
	t1 = t2 = NULL;

	// If LL is empty
	if (start == NULL)
		printf("List is empty\n");

	// Else
	else {

		// Traverse the LL
		while (start != NULL) {

			// reversing of points
			t2 = start->link;
			start->link = t1;
			t1 = start;
			start = t2;
		}
		start = t1;

		// New head Node
		temp = start;

		printf("Reversed linked "
			"list is : ");

		// Print the LL
		while (temp != NULL) {
			printf("%d ", temp->info);
			temp = temp->link;
		}
	}
}*/

// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");
		printf("\t10 To sort element\n");
		printf("\t11 To reverse the "
			"linked list\n");
		printf("\t12 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			display();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;
		case 10:
			sort();
			break;
		case 11:
			reverseLL();
			break;
		case 12:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}