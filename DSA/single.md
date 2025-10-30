## 🔗 **SINGLY LINKED LIST IMPLEMENTATION (Menu-Driven Program)**

---

### ⚙️ **Algorithm**

**Step 1:** Start
**Step 2:** Initialize the head pointer `head = NULL`.
**Step 3:** Display the menu:
  1. Insert at beginning
  2. Insert at end
  3. Delete from beginning
  4. Delete from end
  5. Display list
  6. Exit
**Step 4:** Read user’s choice.
**Step 5:** Perform operation according to choice:

---

#### **Case 1: Insert at Beginning**

**Step 5.1:** Read `value` to insert.
**Step 5.2:** Create new node using `malloc()`.
**Step 5.3:** Set `newnode->data = value`.
**Step 5.4:** Set `newnode->next = head`.
**Step 5.5:** Set `head = newnode`.
**Step 5.6:** Print “Inserted successfully at beginning.”

---

#### **Case 2: Insert at End**

**Step 5.7:** Read `value` to insert.
**Step 5.8:** Create new node using `malloc()` and set `newnode->data = value`, `newnode->next = NULL`.
**Step 5.9:** If `head == NULL`, set `head = newnode`.
**Step 5.10:** Else, traverse to the last node (`temp->next == NULL`) and set `temp->next = newnode`.
**Step 5.11:** Print “Inserted successfully at end.”

---

#### **Case 3: Delete from Beginning**

**Step 5.12:** If `head == NULL`, print “List is empty.”
**Step 5.13:** Else, store `temp = head`.
**Step 5.14:** Set `head = head->next`.
**Step 5.15:** Free `temp`.
**Step 5.16:** Print deleted value.

---

#### **Case 4: Delete from End**

**Step 5.17:** If `head == NULL`, print “List is empty.”
**Step 5.18:** If `head->next == NULL`, free `head` and set `head = NULL`.
**Step 5.19:** Else, traverse to the second last node (`temp->next->next == NULL`).
**Step 5.20:** Store value of `temp->next->data`, free `temp->next`, and set `temp->next = NULL`.
**Step 5.21:** Print deleted value.

---

#### **Case 5: Display**

**Step 5.22:** If `head == NULL`, print “List is empty.”
**Step 5.23:** Else, traverse from `head` and print all elements using `next` pointer.

---

#### **Case 6: Exit**

**Step 5.24:** Free all nodes and terminate the program.

---

**Step 6:** Repeat steps 3–5 until user selects Exit.
**Step 7:** Stop.

---

### 💻 **Pseudocode**

```
Algorithm Singly_Linked_List
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
                new ← new node
                new.data ← value
                new.next ← head
                head ← new
                Print "Inserted at beginning"

            Case 2:
                Read value
                new ← new node
                new.data ← value
                new.next ← NULL
                if head = NULL then
                    head ← new
                else
                    temp ← head
                    while temp.next ≠ NULL do
                        temp ← temp.next
                    temp.next ← new
                Print "Inserted at end"

            Case 3:
                if head = NULL then
                    Print "List is empty"
                else
                    temp ← head
                    head ← head.next
                    Free temp
                    Print "Deleted first node"

            Case 4:
                if head = NULL then
                    Print "List is empty"
                else if head.next = NULL then
                    Free head
                    head ← NULL
                else
                    temp ← head
                    while temp.next.next ≠ NULL do
                        temp ← temp.next
                    Free temp.next
                    temp.next ← NULL
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

### 🧠 **C Program (Singly Linked List)**

```c
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
```

---

### 🖥️ **Sample Output**

```
--- Singly Linked List Menu ---
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display list
6. Exit
Enter choice: 1
Enter value: 10
Inserted 10 at the beginning.

Enter choice: 2
Enter value: 20
Inserted 20 at the end.

Enter choice: 2
Enter value: 30
Inserted 30 at the end.

Enter choice: 5
List elements: 10 -> 20 -> 30

Enter choice: 3
Deleted 10 from the beginning.

Enter choice: 4
Deleted 30 from the end.

Enter choice: 5
List elements: 20

Enter choice: 6
Exiting...
```

---

✅ **Summary Table**

| Operation                 | Description                     |
| ------------------------- | ------------------------------- |
| **Insert at Beginning**   | Adds node before head           |
| **Insert at End**         | Adds node after last element    |
| **Delete from Beginning** | Removes first node              |
| **Delete from End**       | Removes last node               |
| **Display**               | Shows elements from head → tail |
| **Exit**                  | Frees memory and stops program  |

---
