---

## ⚙️ **Sorting Algorithms (Step-by-Step Explanation)**

---

### **1️⃣ Bubble Sort**

Algorithm:

Step 1: Start
Step 2: Read the array and its size n.
Step 3: Set i = 0.
Step 4: Repeat steps 5–8 while i < n - 1.
Step 5: Set j = 0.
Step 6: Repeat steps 7–8 while j < n - i - 1.
Step 7: If arr[j] > arr[j + 1], then swap arr[j] and arr[j + 1].
Step 8: Increment j by 1.
Step 9: Increment i by 1.
Step 10: Display the sorted array.
Step 11: Stop.

#### **Pseudocode:**

```
for i ← 0 to n-2
    for j ← 0 to n-i-2
        if arr[j] > arr[j+1]
            swap(arr[j], arr[j+1])
```

#### **C Program:**

```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
```

---

### **2️⃣ Insertion Sort**

Algorithm:

Step 1: Start
Step 2: Read the array and its size n.
Step 3: Set i = 1.
Step 4: Repeat steps 5–9 while i < n.
Step 5: Set key = arr[i] and j = i - 1.
Step 6: While j >= 0 and arr[j] > key, do:
  (a) Move arr[j] to position arr[j + 1].
  (b) Decrement j by 1.
Step 7: Insert key at position arr[j + 1].
Step 8: Increment i by 1.
Step 9: Display the sorted array.
Step 10: Stop.

#### **Pseudocode:**

```
for i ← 1 to n-1
    key ← arr[i]
    j ← i - 1
    while j >= 0 and arr[j] > key
        arr[j+1] ← arr[j]
        j ← j - 1
    arr[j+1] ← key
```

#### **C Program:**

```c
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

---

### **3️⃣ Selection Sort**

Algorithm:

Step 1: Start
Step 2: Read the array and its size n.
Step 3: Set i = 0.
Step 4: Repeat steps 5–9 while i < n - 1.
Step 5: Set min_index = i.
Step 6: For each j from i + 1 to n - 1,
  If arr[j] < arr[min_index], then set min_index = j.
Step 7: Swap arr[i] and arr[min_index].
Step 8: Increment i by 1.
Step 9: Display the sorted array.
Step 10: Stop.

#### **Pseudocode:**

```
for i ← 0 to n-2
    min_index ← i
    for j ← i+1 to n-1
        if arr[j] < arr[min_index]
            min_index ← j
    swap(arr[min_index], arr[i])
```

#### **C Program:**

```c
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
```

---

### **4️⃣ Merge Sort**

Algorithm:

Step 1: Start
Step 2: Read the array and its size n.
Step 3: Call function mergeSort(arr, left, right) where left = 0 and right = n - 1.
Step 4: In mergeSort(arr, l, r) function:
  (a) If l < r, then:
    i. Find the middle point m = (l + r) / 2.
    ii. Recursively call mergeSort(arr, l, m).
    iii. Recursively call mergeSort(arr, m + 1, r).
    iv. Call merge(arr, l, m, r) to combine both halves.
Step 5: In merge(arr, l, m, r) function:
  (a) Create two temporary arrays — left subarray and right subarray.
  (b) Compare elements of both subarrays and copy the smaller element into the main array.
  (c) Copy any remaining elements.
Step 6: Display the sorted array.
Step 7: Stop.

#### **Pseudocode:**

```
mergeSort(arr, l, r):
    if l < r:
        m ← (l + r) / 2
        mergeSort(arr, l, m)
        mergeSort(arr, m+1, r)
        merge(arr, l, m, r)
```

#### **C Program:**

```c
#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
```

---

### **🧠 Summary Table**

| Algorithm      | Best Case  | Worst Case | Stable | In-place | Type             |
| -------------- | ---------- | ---------- | ------ | -------- | ---------------- |
| Bubble Sort    | O(n)       | O(n²)      | ✅ Yes  | ✅ Yes    | Comparison       |
| Insertion Sort | O(n)       | O(n²)      | ✅ Yes  | ✅ Yes    | Comparison       |
| Selection Sort | O(n²)      | O(n²)      | ❌ No   | ✅ Yes    | Comparison       |
| Merge Sort     | O(n log n) | O(n log n) | ✅ Yes  | ❌ No     | Divide & Conquer |

---