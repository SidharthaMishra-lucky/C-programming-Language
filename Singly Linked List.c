// C program for the all operations in
// the Singly Linked List
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Linked List Node
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;
// Function to traverse the linked list
void display()
{
	struct node* temp;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n", temp->info);
			temp = temp->link;
		}
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
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
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

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
void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

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
}

// Function to delete from the front
// of the linked list
void deleteFirst()
{
	struct node* temp;
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
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
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
		position = malloc(sizeof(struct node));
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
}

// Function to count the number of nodes in the linked list
int count() 
{
	struct node* temp;
	int count = 0;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) 
		{
			printf("Data = %d\n", temp->info);
			count++;
			temp = temp->link;
		}
		printf("Number of nodes in the list = %d\n", count);
	}
}

// Function to find the mean of the
// elements in the linked list
void mean()
{
	int a[10];
	int i;
	struct node* temp;

	// If LL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		temp = start;

		// Stores the sum and count of
		// element in the LL
		int sum = 0, count = 0;
		float m;

		// Traverse the LL
		while (temp != NULL) {

			// Update the sum
			sum = sum + temp->info;
			temp = temp->link;
			count++;
		}

		// Find the mean
		m = sum / count;

		// Print the mean value
		printf("\nMean is %f ", m);
	}
}
//calculate the standard deviation 
void calculate_standard_deviation() {
    struct node* temp;
    double sum = 0.0, mean, variance, standard_deviation = 0.0;
    int count = 0;

    // Calculate mean
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    } else {
        temp = start;
        while (temp != NULL) {
            sum += temp->info;
            count++;
            temp = temp->link;
        }
        mean = sum / count;
    }

    // Calculate variance
    temp = start;
    while (temp != NULL) {
        variance = variance+(temp->info - mean)*(temp->info - mean);
        temp = temp->link;
    }
    variance = variance/count;

    // Calculate standard deviation
    standard_deviation = sqrt(variance);

    printf("Standard deviation = %lf\n", standard_deviation);
}

// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\t1 For insertion at"
			" starting\n");
		printf("\t2 For insertion at"
			" end\n");
		printf("\t3 For insertion at "
			"kth position\n");
		printf("\t4 For deletion of "
			"first element\n");
		printf("\t5 For deletion of "
			"last element\n");
		printf("\t6 For deletion of "
			"element at kth position\n");
		printf("\t7 To count"
		" the elements\n");
		printf("\t8 To Display the  list\n");
        printf("\t9 To find mean of "
			"the elements\n");
		printf("\t10 Find the Standard deviation of all the elements \n");
		printf("\t11 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		
		case 1:
			insertAtFront();
			break;
		case 2:
			insertAtEnd();
			break;
		case 3:
			insertAtPosition();
			break;
		case 4:
			deleteFirst();
			break;
		case 5:
			deleteEnd();
			break;
		case 6:
			deletePosition();
			break;
		case 7:
			count(); 
			break;
		case 8:
			display();
			break;
		case 9:
			mean();
			break;
		case 10:
			calculate_standard_deviation();
			break;
		case 11:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}
