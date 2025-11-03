---

## 🚀 **Algorithm: Queue Using Linked List**

### Step-wise Algorithm:

1. **Initialization**:

   * Initialize `front` and `rear` pointers to `NULL`.

2. **Enqueue (Insert element)**:

   * Create a new node.
   * Set the `data` of the node to the input value.
   * Set the `next` pointer of the node to `NULL`.
   * If the queue is empty (i.e., `rear == NULL`), set both `front` and `rear` to the new node.
   * Otherwise, set the `next` pointer of the current `rear` node to the new node, then update `rear` to the new node.

3. **Dequeue (Remove element)**:

   * If the queue is empty (`front == NULL`), print an error message.
   * Otherwise, print the data of the front node.
   * Move the `front` pointer to the next node.
   * If the queue becomes empty (i.e., `front == NULL`), also set `rear = NULL`.
   * Free the memory of the dequeued node.

4. **Display**:

   * If the queue is empty, print "Queue is empty".
   * Otherwise, traverse from `front` to `rear`, printing the data of each node.

---

## 📜 **Pseudocode:**

```
START
  INITIALIZE front and rear to NULL
  
  FUNCTION Enqueue(value):
    CREATE new node
    SET new node's data to value
    SET new node's next to NULL
    
    IF rear IS NULL THEN
      SET front and rear to new node
    ELSE
      SET rear's next to new node
      UPDATE rear to new node
    END IF
    
    PRINT value enqueued to queue
  
  FUNCTION Dequeue():
    IF front IS NULL THEN
      PRINT "Queue is empty"
    ELSE
      STORE front in temporary variable
      PRINT value dequeued from queue
      UPDATE front to front's next
      IF front IS NULL THEN
        SET rear to NULL
      END IF
      FREE temporary variable
    END IF
  
  FUNCTION Display():
    IF front IS NULL THEN
      PRINT "Queue is empty"
    ELSE
      SET current node to front
      WHILE current IS NOT NULL:
        PRINT current's data
        UPDATE current to current's next
      END WHILE
    END IF

  MAIN:
    WHILE TRUE:
      PRINT menu options (1. Enqueue, 2. Dequeue, 3. Display, 4. Exit)
      GET user input for choice
      SWITCH on choice:
        CASE 1: CALL Enqueue(value)
        CASE 2: CALL Dequeue()
        CASE 3: CALL Display()
        CASE 4: EXIT the program
        DEFAULT: PRINT "Invalid choice"
      END SWITCH
END
```

---

## 📊 **Sample Output:**

```sh
Queue using Linked List

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 10
10 enqueued to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 20
20 enqueued to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 30
30 enqueued to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Queue elements: 10 20 30 

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
10 dequeued from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Queue elements: 20 30 

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 4
Exiting program.
```

---
