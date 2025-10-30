## ⚙️ Sorting Algorithms

### 1️⃣ Bubble Sort

**Algorithm:**
1. Repeat (n-1) passes.
2. In each pass, compare adjacent elements.
3. Swap them if they are in the wrong order.
4. After each pass, the largest element moves to the end.

**Pseudocode:**
for i ← 0 to n-2
for j ← 0 to n-i-2
if arr[j] > arr[j+1]
swap(arr[j], arr[j+1])

cpp
Copy code

**C Program:**
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
2️⃣ Insertion Sort
Algorithm:

Start from the 2nd element.

Compare it with elements before it.

Shift larger elements one position ahead.

Insert the element at the correct place.

Pseudocode:

vbnet
Copy code
for i ← 1 to n-1
    key ← arr[i]
    j ← i - 1
    while j >= 0 and arr[j] > key
        arr[j+1] ← arr[j]
        j ← j - 1
    arr[j+1] ← key
C Program:

c
Copy code
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
3️⃣ Selection Sort
Algorithm:

Find the minimum element in the unsorted part.

Swap it with the first element of the unsorted part.

Repeat for all elements.

Pseudocode:

css
Copy code
for i ← 0 to n-2
    min_index ← i
    for j ← i+1 to n-1
        if arr[j] < arr[min_index]
            min_index ← j
    swap(arr[min_index], arr[i])
C Program:

c
Copy code
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
4️⃣ Merge Sort
Algorithm:

Divide the array into two halves.

Recursively sort both halves.

Merge the sorted halves into a single sorted array.

Pseudocode:

scss
Copy code
mergeSort(arr, l, r):
    if l < r:
        m ← (l + r) / 2
        mergeSort(arr, l, m)
        mergeSort(arr, m+1, r)
        merge(arr, l, m, r)
C Program:

c
Copy code
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