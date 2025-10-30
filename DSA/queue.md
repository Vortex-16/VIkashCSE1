## 🧮 **QUEUE IMPLEMENTATION USING ARRAY (MENU DRIVEN PROGRAM)**

---

### ⚙️ **Algorithm**

**Step 1:** Start
**Step 2:** Initialize an empty queue with size `SIZE`, and set `front = -1`, `rear = -1`.
**Step 3:** Display menu options:
  1. Enqueue
  2. Dequeue
  3. Peek
  4. Display
  5. Exit
**Step 4:** Read the user’s choice.
**Step 5:** Perform operations based on the choice:

---

#### **Case 1: Enqueue Operation**

**Step 5.1:** If `rear == SIZE - 1`, print “Queue Overflow”.
**Step 5.2:** Else if `front == -1`, set `front = 0`.
**Step 5.3:** Increment `rear` by 1 and insert the new element at `queue[rear]`.
**Step 5.4:** Print that the element was successfully enqueued.

---

#### **Case 2: Dequeue Operation**

**Step 5.5:** If `front == -1` or `front > rear`, print “Queue Underflow”.
**Step 5.6:** Else print the element being dequeued (at `queue[front]`).
**Step 5.7:** Increment `front` by 1.
**Step 5.8:** If `front > rear`, set both `front` and `rear` to `-1` (queue becomes empty).

---

#### **Case 3: Peek Operation**

**Step 5.9:** If `front == -1`, print “Queue is empty”.
**Step 5.10:** Else, print the element at `queue[front]` (the frontmost element).

---

#### **Case 4: Display Operation**

**Step 5.11:** If `front == -1`, print “Queue is empty”.
**Step 5.12:** Else, print all elements from `queue[front]` to `queue[rear]`.

---

#### **Case 5: Exit**

**Step 5.13:** Print “Exiting…” and stop execution.

---

**Step 6:** Repeat steps 3–5 until the user selects Exit.
**Step 7:** Stop.

---

### 💻 **Pseudocode**

```
Algorithm Queue_Operations
Begin
    Initialize queue[SIZE], front ← -1, rear ← -1
    Repeat
        Display menu:
            1. Enqueue
            2. Dequeue
            3. Peek
            4. Display
            5. Exit
        Read choice

        switch(choice)
            Case 1:
                if rear = SIZE - 1 then
                    Print "Queue Overflow"
                else
                    if front = -1 then
                        front ← 0
                    rear ← rear + 1
                    Read value
                    queue[rear] ← value
                    Print value, " enqueued to queue"
            Case 2:
                if front = -1 or front > rear then
                    Print "Queue Underflow"
                else
                    Print queue[front], " dequeued from queue"
                    front ← front + 1
                    if front > rear then
                        front ← rear ← -1
            Case 3:
                if front = -1 then
                    Print "Queue is empty"
                else
                    Print "Front element: ", queue[front]
            Case 4:
                if front = -1 then
                    Print "Queue is empty"
                else
                    for i ← front to rear do
                        Print queue[i]
            Case 5:
                Print "Exiting..."
                Exit loop
            Default:
                Print "Invalid choice! Try again"
    Until choice = 5
End
```

---

### 💾 **C Program**

```c
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
        printf("Queue elements (front → rear): ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
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
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
```

---

### 🖥️ **Sample Output**

```
--- Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Display
5. Exit
Enter your choice: 2
Queue Underflow! Nothing to dequeue.

--- Queue Menu ---
Enter your choice: 1
Enter value to enqueue: 10
10 enqueued to queue.

--- Queue Menu ---
Enter your choice: 1
Enter value to enqueue: 20
20 enqueued to queue.

--- Queue Menu ---
Enter your choice: 1
Enter value to enqueue: 30
30 enqueued to queue.

--- Queue Menu ---
Enter your choice: 4
Queue elements (front → rear): 10 20 30 

--- Queue Menu ---
Enter your choice: 3
Front element is: 10

--- Queue Menu ---
Enter your choice: 2
10 dequeued from queue.

--- Queue Menu ---
Enter your choice: 4
Queue elements (front → rear): 20 30 

--- Queue Menu ---
Enter your choice: 5
Exiting...
```

---

✅ **Summary Table**

| Operation   | Condition for Error             | Action Taken    |
| ----------- | ------------------------------- | --------------- |
| **Enqueue** | `rear == SIZE - 1`              | Queue Overflow  |
| **Dequeue** | `front == -1` or `front > rear` | Queue Underflow |
| **Peek**    | `front == -1`                   | Queue is Empty  |
| **Display** | `front == -1`                   | Queue is Empty  |

---
