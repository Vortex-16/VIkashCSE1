## 📌 Algorithm

### **1. BST Construction**

1. Start
2. Input number of nodes
3. For each node:

   * Read data
   * If tree is empty, create root
   * Else compare data and insert into left or right subtree
4. Repeat until all nodes are inserted

### **2. Inorder Traversal**

1. Traverse left subtree
2. Visit root
3. Traverse right subtree

### **3. Preorder Traversal**

1. Visit root
2. Traverse left subtree
3. Traverse right subtree

### **4. Postorder Traversal**

1. Traverse left subtree
2. Traverse right subtree
3. Visit root

---

## 📝 Pseudo Code

```
INORDER(root):
    IF root == NULL RETURN
    INORDER(root.left)
    PRINT root.data
    INORDER(root.right)

PREORDER(root):
    IF root == NULL RETURN
    PRINT root.data
    PREORDER(root.left)
    PREORDER(root.right)

POSTORDER(root):
    IF root == NULL RETURN
    POSTORDER(root.left)
    POSTORDER(root.right)
    PRINT root.data
```

---

## ▶️ How to Run

```bash
gcc bst.c -o bst
./bst
```

---

## 📌 Sample Menu

```
Tree Traversal Menu:
1. Inorder Traversal
2. Preorder Traversal
3. Postorder Traversal
4. Exit
```

---

## ✔️ Output Example

If input nodes are: **10 5 15 3 7**

* **Inorder:** 3 5 7 10 15
* **Preorder:** 10 5 3 7 15
* **Postorder:** 3 7 5 15 10

---