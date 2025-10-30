#include <stdio.h>
#include <stdlib.h>

// Structure for singly linked list node
typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

// Create new node
Node* create_node(int value) {
    Node *newn = (Node*)malloc(sizeof(Node));
    if (!newn) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newn->data = value;
    newn->next = NULL;
    return newn;
}

// Insert at beginning
void insert_first(int value) {
    Node *newn = create_node(value);
    newn->next = head;
    head = newn;
    printf("Inserted %d at the beginning.\n", value);
}

// Insert at end
void insert_last(int value) {
    Node *newn = create_node(value);
    if (head == NULL)
        head = newn;
    else {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newn;
    }
    printf("Inserted %d at the end.\n", value);
}

// Delete from beginning
void delete_first() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node *temp = head;
    int val = temp->data;
    head = head->next;
    free(temp);
    printf("Deleted %d from the beginning.\n", val);
}

// Delete from end
void delete_last() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted %d from the end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    printf("Deleted %d from the end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Display the list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node *temp = head;
    printf("List elements: ");
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next) printf(" -> ");
        temp = temp->next;
    }
    printf("\n");
}

// Free all nodes
void free_list() {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function
int main() {
    int choice, value;
    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete from beginning\n");
        printf("4. Delete from end\n");
        printf("5. Display list\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_first(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_last(value);
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
