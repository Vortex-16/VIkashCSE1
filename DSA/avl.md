# 🧮 AVL Tree

An **AVL Tree** (Adelson-Velsky and Landis Tree) is a type of **self-balancing binary search tree**. In an AVL tree, the heights of the two child subtrees of any node differ by at most one — ensuring **O(log n)** time complexity for insertion, deletion, and search.

---

## 📘 Features

* ✅ Self-balancing binary search tree
* ✅ Insertion with automatic rebalancing
* ✅ Deletion with automatic rebalancing
* ✅ Search for elements efficiently
* ✅ Supports tree traversals (Inorder, Preorder, Postorder)
* ✅ Height and balance factor calculation

---

## ⚙️ How It Works

1. **Insertion**

   * Insert the node as in a regular BST.
   * Update heights and balance factors.
   * Perform rotations (`LL`, `RR`, `LR`, `RL`) to maintain balance.

2. **Deletion**

   * Remove the node as in a BST.
   * Rebalance the tree if needed using rotations.

3. **Search**

   * Follows the same logic as a standard BST search.

---

## 🔄 Rotations

| Case             | Condition                                 | Rotation Type         |
| ---------------- | ----------------------------------------- | --------------------- |
| Left-Left (LL)   | Insertion in left subtree of left child   | Right Rotation        |
| Right-Right (RR) | Insertion in right subtree of right child | Left Rotation         |
| Left-Right (LR)  | Insertion in right subtree of left child  | Left + Right Rotation |
| Right-Left (RL)  | Insertion in left subtree of right child  | Right + Left Rotation |

---

## 🧠 Time Complexity

| Operation | Average  | Worst    |
| --------- | -------- | -------- |
| Search    | O(log n) | O(log n) |
| Insertion | O(log n) | O(log n) |
| Deletion  | O(log n) | O(log n) |

---

## 💻 Example (Python)

```python
class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None
        self.height = 1

class AVLTree:
    # Insert, delete, rotate, etc.
    pass

if __name__ == "__main__":
    tree = AVLTree()
    root = None
    for val in [10, 20, 30, 40, 50, 25]:
        root = tree.insert(root, val)
```

---

## 🧩 Applications

* Databases and indexing
* Memory management
* Network routing tables
* File systems

---
