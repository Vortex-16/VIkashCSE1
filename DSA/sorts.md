🔹 1. Bubble Sort
🧮 Algorithm: Bubble Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array elements arr[0...n-1]
Step 4: Repeat for i = 0 to n - 2
  Repeat for j = 0 to n - i - 2
   If arr[j] > arr[j + 1], then
    Swap arr[j] and arr[j + 1]
Step 5: End loops
Step 6: Print sorted array
Step 7: Stop

💻 Pseudo Code: Bubble Sort
Algorithm BubbleSort(arr, n)
    for i ← 0 to n - 2 do
        for j ← 0 to n - i - 2 do
            if arr[j] > arr[j + 1] then
                swap(arr[j], arr[j + 1])
            end if
        end for
    end for
End Algorithm



🔹 2. Insertion Sort

🧮 Algorithm: Insertion Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array arr[0...n-1]
Step 4: Repeat for i = 1 to n - 1
  key = arr[i]
  j = i - 1
  While j >= 0 and arr[j] > key
   arr[j + 1] = arr[j]
   j = j - 1
  arr[j + 1] = key
Step 5: Print sorted array
Step 6: Stop

💻 Pseudo Code: Insertion Sort
Algorithm InsertionSort(arr, n)
    for i ← 1 to n - 1 do
        key ← arr[i]
        j ← i - 1
        while j ≥ 0 and arr[j] > key do
            arr[j + 1] ← arr[j]
            j ← j - 1
        end while
        arr[j + 1] ← key
    end for
End Algorithm




🔹 3. Selection Sort

🧮 Algorithm: Selection Sort

Step 1: Start
Step 2: Input number of elements n
Step 3: Input array arr[0...n-1]
Step 4: Repeat for i = 0 to n - 2
  Set min = i
  Repeat for j = i + 1 to n - 1
   If arr[j] < arr[min], set min = j
  Swap arr[min] and arr[i]
Step 5: Print sorted array
Step 6: Stop

💻 Pseudo Code: Selection Sort

Algorithm SelectionSort(arr, n)
    for i ← 0 to n - 2 do
        min ← i
        for j ← i + 1 to n - 1 do
            if arr[j] < arr[min] then
                min ← j
            end if
        end for
        swap(arr[i], arr[min])
    end for
End Algorithm



🔹 4. Merge Sort

🧮 Algorithm: Merge Sort

Step 1: Start
Step 2: If array has one element, return
Step 3: Divide array into two halves:
  Left half → arr[l...mid]
  Right half → arr[mid+1...r]
Step 4: Recursively call MergeSort on both halves
Step 5: Merge both halves into a sorted array
Step 6: Stop




💻 Pseudo Code: Merge Sort

Algorithm MergeSort(arr, l, r)
    if l < r then
        m ← (l + r) / 2
        MergeSort(arr, l, m)
        MergeSort(arr, m + 1, r)
        Merge(arr, l, m, r)
    end if
End Algorithm

Algorithm Merge(arr, l, m, r)
    n1 ← m - l + 1
    n2 ← r - m
    create arrays L[1..n1], R[1..n2]

    for i ← 0 to n1 - 1 do
        L[i] ← arr[l + i]
    for j ← 0 to n2 - 1 do
        R[j] ← arr[m + 1 + j]

    i ← 0, j ← 0, k ← l
    while i < n1 and j < n2 do
        if L[i] ≤ R[j] then
            arr[k] ← L[i]
            i ← i + 1
        else
            arr[k] ← R[j]
            j ← j + 1
        end if
        k ← k + 1
    end while

    while i < n1 do
        arr[k] ← L[i]
        i ← i + 1
        k ← k + 1
    end while

    while j < n2 do
        arr[k] ← R[j]
        j ← j + 1
        k ← k + 1
    end while
End Algorithm







🔸 Comparison Summary

| Sorting Algorithm  | Best Case  | Worst Case | Stable | Method Type      |
| ------------------ | ---------- | ---------- | ------ | ---------------- |
| **Bubble Sort**    | O(n)       | O(n²)      | ✅ Yes  | Exchanging       |
| **Insertion Sort** | O(n)       | O(n²)      | ✅ Yes  | Insertion        |
| **Selection Sort** | O(n²)      | O(n²)      | ❌ No   | Selection        |
| **Merge Sort**     | O(n log n) | O(n log n) | ✅ Yes  | Divide & Conquer |
