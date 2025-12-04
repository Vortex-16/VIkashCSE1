`## 🧱 **Stack Implementation Using Array (Menu Driven Program)**

---

### ⚙️ **Algorithm**

**Step 1:** Start
**Step 2:** Initialize an empty stack with maximum size `MAX` and set `top = -1`.
**Step 3:** Display a menu with the following options:
  1. Push
  2. Pop
  3. Peek
  4. Display
  5. Exit
**Step 4:** Read the user's choice.
**Step 5:** Perform operations based on the choice:

#### **Case 1: Push Operation**

* **Step 5.1:** If `top == MAX - 1`, display “Stack Overflow”.
* **Step 5.2:** Else, increment `top` and insert the element at `stack[top]`.
* **Step 5.3:** Display a message that the element has been pushed.

#### **Case 2: Pop Operation**

* **Step 5.4:** If `top == -1`, display “Stack Underflow”.
* **Step 5.5:** Else, print the element at `stack[top]` and decrement `top`.

#### **Case 3: Peek Operation**

* **Step 5.6:** If `top == -1`, display “Stack is empty”.
* **Step 5.7:** Else, display the element at `stack[top]`.

#### **Case 4: Display Operation**

* **Step 5.8:** If `top == -1`, display “Stack is empty”.
* **Step 5.9:** Else, display elements from `stack[top]` to `stack[0]`.

#### **Case 5: Exit**

* **Step 5.10:** Terminate the program.

**Step 6:** Repeat steps 3–5 until the user chooses Exit.
**Step 7:** Stop.

---

### 💻 **Pseudocode**

```
Algorithm Stack_Operations
Begin
    Initialize stack[MAX], top ← -1
    Repeat
        Display menu:
            1. Push
            2. Pop
            3. Peek
            4. Display
            5. Exit
        Read choice

        switch(choice)
            Case 1:
                if top = MAX - 1 then
                    Print "Stack Overflow"
                else
                    Read data
                    top ← top + 1
                    stack[top] ← data
                    Print "Pushed data onto stack"
            Case 2:
                if top = -1 then
                    Print "Stack Underflow"
                else
                    Print "Popped element: ", stack[top]
                    top ← top - 1
            Case 3:
                if top = -1 then
                    Print "Stack is empty"
                else
                    Print "Top element: ", stack[top]
            Case 4:
                if top = -1 then
                    Print "Stack is empty"
                else
                    for i ← top down to 0 do
                        Print stack[i]
            Case 5:
                Print "Exiting..."
                Exit loop
            Default:
                Print "Invalid choice"
    Until choice = 5
End
```

---

### 🧮 **C Program**

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 5   // maximum size of stack

int stack[MAX];
int top = -1;

// Push element
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", data);
        return;
    }
    stack[++top] = data;
    printf("Pushed %d onto stack.\n", data);
}

// Pop element
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }
    printf("Popped %d from stack.\n", stack[top--]);
}

// Peek element
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element = %d\n", stack[top]);
    }
}

// Display stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top -> bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Menu-driven program
int main() {
    int choice, data;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
```

---

### 🖥️ **Sample Output**

```
--- Stack Menu ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 1
Enter data: 10
Pushed 10 onto stack.

--- Stack Menu ---
Enter choice: 1
Enter data: 20
Pushed 20 onto stack.

--- Stack Menu ---
Enter choice: 4
Stack elements (top -> bottom): 20 10

--- Stack Menu ---
Enter choice: 3
Top element = 20

--- Stack Menu ---
Enter choice: 2
Popped 20 from stack.

--- Stack Menu ---
Enter choice: 4
Stack elements (top -> bottom): 10

--- Stack Menu ---
Enter choice: 5
Exiting...
```

---

