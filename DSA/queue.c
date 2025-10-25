#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to dequeue.\n");
    } else {
        printf("%d dequeued from queue.\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
