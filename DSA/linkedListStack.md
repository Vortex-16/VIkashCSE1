# 🧱 Stack Using Linked List (C Program)

A **stack** follows the **LIFO (Last In, First Out)** principle.
Using a **linked list**, we can dynamically allocate memory for stack operations.

---

## 🧩 **Algorithm (Step-wise)**

### Step 1: Initialization

* Define a `Node` structure containing `data` and a pointer `next`.
* Initialize a pointer `top = NULL`.

---

### Step 2: Push (Insert element)

1. Create a new node.
2. Assign data to the new node.
3. Set `newNode->next = top`.
4. Update `top = newNode`.
5. Print that the element is pushed.

---

### Step 3: Pop (Remove element)

1. If `top == NULL`, print “Stack is empty”.
2. Otherwise:

   * Store `top` in a temporary pointer.
   * Print the popped value.
   * Update `top = top->next`.
   * Free the memory of the popped node.

---

### Step 4: Display (Show elements)

1. If `top == NULL`, print “Stack is empty”.
2. Otherwise:

   * Traverse from `top` to `NULL`.
   * Print each node’s data.

---

## 💻 **C Program: Stack Using Linked List**

```c
#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // Top of the stack

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed to stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack.\n", top->data);
    top = top->next;
    free(temp);
}

// Function to display the stack
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements (Top to Bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    int choice, value;

    printf("Stack using Linked List\n");

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
```

---

## 🔢 **Pseudocode**

```
START
  INITIALIZE top = NULL

  FUNCTION push(value):
    CREATE new node
    SET newNode.data = value
    SET newNode.next = top
    SET top = newNode
    PRINT value pushed to stack

  FUNCTION pop():
    IF top == NULL THEN
      PRINT "Stack is empty"
    ELSE
      temp = top
      PRINT temp.data popped from stack
      SET top = top.next
      FREE temp
    END IF

  FUNCTION display():
    IF top == NULL THEN
      PRINT "Stack is empty"
    ELSE
      SET temp = top
      PRINT "Stack elements:"
      WHILE temp != NULL DO
        PRINT temp.data
        SET temp = temp.next
      END WHILE
    END IF

  MAIN:
    REPEAT
      DISPLAY menu (1.Push, 2.Pop, 3.Display, 4.Exit)
      READ choice
      SWITCH choice:
        CASE 1: READ value; CALL push(value)
        CASE 2: CALL pop()
        CASE 3: CALL display()
        CASE 4: EXIT
        DEFAULT: PRINT "Invalid choice"
      END SWITCH
    UNTIL choice == 4
END
```

---

## 🧾 **Sample Output**

```sh
Stack using Linked List

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 10
10 pushed to stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 20
20 pushed to stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 30
30 pushed to stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements (Top to Bottom): 30 20 10 

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
30 popped from stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements (Top to Bottom): 20 10 

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
Exiting program.
```

---
