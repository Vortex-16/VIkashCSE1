## 🔗 **DOUBLY LINKED LIST IMPLEMENTATION (Menu-Driven Program)**

---

### ⚙️ **Algorithm**

**Step 1:** Start
**Step 2:** Initialize the head pointer `head = NULL`.
**Step 3:** Display the following menu:
  1. Insert at beginning
  2. Insert at end
  3. Delete from beginning
  4. Delete from end
  5. Display list
  6. Exit
**Step 4:** Read user’s choice.
**Step 5:** Perform the operation based on the choice:

---

#### **Case 1: Insert at Beginning**

**Step 5.1:** Read the value to be inserted.
**Step 5.2:** Create a new node using `malloc()`.
**Step 5.3:** Set `newnode->data = value`, `newnode->prev = NULL`.
**Step 5.4:** If `head == NULL`, set `head = newnode`.
**Step 5.5:** Else, set `newnode->next = head` and `head->prev = newnode`, then update `head = newnode`.
**Step 5.6:** Print “Inserted successfully at the beginning.”

---

#### **Case 2: Insert at End**

**Step 5.7:** Read the value to be inserted.
**Step 5.8:** Create a new node using `malloc()`.
**Step 5.9:** If `head == NULL`, set `head = newnode`.
**Step 5.10:** Else, traverse the list until the last node (where `next == NULL`).
**Step 5.11:** Set `last->next = newnode` and `newnode->prev = last`.
**Step 5.12:** Print “Inserted successfully at the end.”

---

#### **Case 3: Delete from Beginning**

**Step 5.13:** If `head == NULL`, print “List is empty.”
**Step 5.14:** Else, store `temp = head`.
**Step 5.15:** If `head->next == NULL`, set `head = NULL`.
**Step 5.16:** Else, set `head = head->next` and `head->prev = NULL`.
**Step 5.17:** Free `temp`.
**Step 5.18:** Print the deleted element.

---

#### **Case 4: Delete from End**

**Step 5.19:** If `head == NULL`, print “List is empty.”
**Step 5.20:** Else, traverse to the last node.
**Step 5.21:** If it is the only node (`head->next == NULL`), set `head = NULL`.
**Step 5.22:** Else, set `last->prev->next = NULL`.
**Step 5.23:** Free the last node.
**Step 5.24:** Print the deleted element.

---

#### **Case 5: Display List**

**Step 5.25:** If `head == NULL`, print “List is empty.”
**Step 5.26:** Else, start from `head` and traverse using `next` pointers, printing each `data`.

---

#### **Case 6: Exit**

**Step 5.27:** Free all nodes and terminate the program.

---

**Step 6:** Repeat steps 3–5 until the user chooses Exit.
**Step 7:** Stop.

---

### 💻 **Pseudocode**

```
Algorithm Doubly_Linked_List
Begin
    Initialize head ← NULL
    Repeat
        Display menu:
            1. Insert at beginning
            2. Insert at end
            3. Delete from beginning
            4. Delete from end
            5. Display list
            6. Exit
        Read choice

        switch(choice)
            Case 1:
                Read value
                Create new node with data = value
                if head = NULL then
                    head ← new node
                else
                    new node.next ← head
                    head.prev ← new node
                    head ← new node
                Print "Inserted at beginning"

            Case 2:
                Read value
                Create new node with data = value
                if head = NULL then
                    head ← new node
                else
                    temp ← head
                    while temp.next ≠ NULL do
                        temp ← temp.next
                    temp.next ← new node
                    new node.prev ← temp
                Print "Inserted at end"

            Case 3:
                if head = NULL then
                    Print "List is empty"
                else if head.next = NULL then
                    Free head
                    head ← NULL
                else
                    temp ← head
                    head ← head.next
                    head.prev ← NULL
                    Free temp
                Print "Deleted first node"

            Case 4:
                if head = NULL then
                    Print "List is empty"
                else
                    temp ← head
                    while temp.next ≠ NULL do
                        temp ← temp.next
                    if temp.prev = NULL then
                        head ← NULL
                    else
                        temp.prev.next ← NULL
                    Free temp
                Print "Deleted last node"

            Case 5:
                if head = NULL then
                    Print "List is empty"
                else
                    temp ← head
                    while temp ≠ NULL do
                        Print temp.data
                        temp ← temp.next

            Case 6:
                Free all nodes
                Print "Exiting..."
                Exit loop

            Default:
                Print "Invalid choice"
    Until choice = 6
End
```

---

### 🧠 **C Program (Doubly Linked List)**

*(Your provided code — kept intact and neatly formatted)*

```c
#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node
typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

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
    if (head == NULL)
        head = n;
    else {
        n->next = head;
        head->prev = n;
        head = n;
    }
    printf("Inserted %d at the beginning.\n", value);
}

// Insert at end
void insert_last(int value) {
    Node *n = create_node(value);
    if (head == NULL)
        head = n;
    else {
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
    if (head->next == NULL)
        head = NULL;
    else {
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
    if (cur->prev == NULL)
        head = NULL;
    else
        cur->prev->next = NULL;
    free(cur);
    printf("Deleted %d from the end.\n", val);
}

// Display list
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

// Free list
void free_list() {
    Node *cur = head;
    while (cur) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    head = NULL;
}

// Menu-driven main program
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
            int c; while ((c = getchar()) != '\n' && c != EOF);
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
```

---

### 🖥️ **Sample Output**

```
--- Doubly Linked List Menu ---
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display list
6. Exit
Enter choice: 1
Enter value to insert at beginning: 10
Inserted 10 at the beginning.

Enter choice: 2
Enter value to insert at end: 20
Inserted 20 at the end.

Enter choice: 2
Enter value to insert at end: 30
Inserted 30 at the end.

Enter choice: 5
List (head -> tail): 10 <-> 20 <-> 30

Enter choice: 3
Deleted 10 from the beginning.

Enter choice: 4
Deleted 30 from the end.

Enter choice: 5
List (head -> tail): 20

Enter choice: 6
Exiting...
```

---

✅ **Summary Table**

| Operation                 | Description                         |
| ------------------------- | ----------------------------------- |
| **Insert at Beginning**   | Adds a node before the current head |
| **Insert at End**         | Adds a node after the current tail  |
| **Delete from Beginning** | Removes the first node              |
| **Delete from End**       | Removes the last node               |
| **Display**               | Shows all elements from head → tail |
| **Exit**                  | Frees memory and terminates program |

---