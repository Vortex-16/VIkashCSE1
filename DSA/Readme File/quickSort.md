# Quick Sort

# 📘 Quick Sort Algorithm in C

This program implements **Quick Sort**, a highly efficient divide-and-conquer sorting algorithm.
It uses the **Lomuto Partition Scheme** by selecting the last element as the pivot.


## 🧠 Algorithm

### **Quick Sort Steps**

1. Select a pivot (last element in this code)
2. Rearrange elements such that:

   * Elements **smaller** than pivot go to the **left**
   * Elements **greater** than pivot go to the **right**
3. Recursively apply Quick Sort to the left and right subarrays

---

## 📝 Pseudo Code

```
FUNCTION quickSort(arr, low, high):
    IF low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)
```

### **Partition Logic**

```
FUNCTION partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    
    FOR j = low TO high - 1:
        IF arr[j] < pivot:
            i = i + 1
            swap(arr[i], arr[j])
    
    swap(arr[i+1], arr[high])
    RETURN i + 1
```

---

## ▶️ How to Run

```bash
gcc quicksort.c -o quicksort
./quicksort
```

---

## 📌 Example Input/Output

### **Input:**

```
Enter number of elements: 6
Enter 6 elements: 10 7 8 9 1 5
```

### **Output:**

```
Sorted array:
1 5 7 8 9 10
```

---

## 🔧 Features

* Uses recursion for divide and conquer
* Uses partitioning to place pivot in correct sorted position
* Efficient average-case performance: **O(n log n)**
* Simple menu-less implementation (auto-sorts input array)

---

## 📈 Time Complexity

| Case    | Complexity                               |
| ------- | ---------------------------------------- |
| Best    | O(n log n)                               |
| Average | O(n log n)                               |
| Worst   | O(n²) (when array already nearly sorted) |

---