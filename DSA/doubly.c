#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node
typedef struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

// Head pointer
Node *head = NULL;

// Create a new node
Node* create_node(int value) {
	Node *newn = (Node*)malloc(sizeof(Node));
	if (!newn) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	newn->data = value;
	newn->prev = newn->next = NULL;
	return newn;
}

// Insert at beginning
void insert_first(int value) {
	Node *n = create_node(value);
	if (head == NULL) {
		head = n;
	} else {
		n->next = head;
		head->prev = n;
		head = n;
	}
	printf("Inserted %d at the beginning.\n", value);
}

// Insert at end
void insert_last(int value) {
	Node *n = create_node(value);
	if (head == NULL) {
		head = n;
	} else {
		Node *cur = head;
		while (cur->next) cur = cur->next;
		cur->next = n;
		n->prev = cur;
	}
	printf("Inserted %d at the end.\n", value);
}

// Delete first node
void delete_first() {
	if (head == NULL) {
		printf("List is empty. Nothing to delete.\n");
		return;
	}
	Node *tmp = head;
	int val = tmp->data;
	if (head->next == NULL) {
		head = NULL;
	} else {
		head = head->next;
		head->prev = NULL;
	}
	free(tmp);
	printf("Deleted %d from the beginning.\n", val);
}

// Delete last node
void delete_last() {
	if (head == NULL) {
		printf("List is empty. Nothing to delete.\n");
		return;
	}
	Node *cur = head;
	while (cur->next) cur = cur->next;
	int val = cur->data;
	if (cur->prev == NULL) { // only one node
		head = NULL;
	} else {
		cur->prev->next = NULL;
	}
	free(cur);
	printf("Deleted %d from the end.\n", val);
}

// Display list from head to tail
void display() {
	if (head == NULL) {
		printf("List is empty.\n");
		return;
	}
	printf("List (head -> tail): ");
	Node *cur = head;
	while (cur) {
		printf("%d", cur->data);
		if (cur->next) printf(" <-> ");
		cur = cur->next;
	}
	printf("\n");
}

// Free entire list
void free_list() {
	Node *cur = head;
	while (cur) {
		Node *next = cur->next;
		free(cur);
		cur = next;
	}
	head = NULL;
}

// Menu-driven program
int main() {
	int choice, value;
	while (1) {
		printf("\n--- Doubly Linked List Menu ---\n");
		printf("1. Insert at beginning\n");
		printf("2. Insert at end\n");
		printf("3. Delete from beginning\n");
		printf("4. Delete from end\n");
		printf("5. Display list\n");
		printf("6. Exit\n");
		printf("Enter choice: ");
		if (scanf("%d", &choice) != 1) {
			// clear invalid input
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			printf("Invalid input. Please enter a number.\n");
			continue;
		}

		switch (choice) {
			case 1:
				printf("Enter value to insert at beginning: ");
				if (scanf("%d", &value) == 1) insert_first(value);
				else { printf("Invalid input.\n"); while (getchar() != '\n'); }
				break;
			case 2:
				printf("Enter value to insert at end: ");
				if (scanf("%d", &value) == 1) insert_last(value);
				else { printf("Invalid input.\n"); while (getchar() != '\n'); }
				break;
			case 3:
				delete_first();
				break;
			case 4:
				delete_last();
				break;
			case 5:
				display();
				break;
			case 6:
				free_list();
				printf("Exiting...\n");
				return 0;
			default:
				printf("Invalid choice. Try again.\n");
		}
	}
	return 0;
}

