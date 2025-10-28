🔹 1. LINEAR SEARCH
🧮 Algorithm: Linear Search

Step 1: Start
Step 2: Input the array size n
Step 3: Input n elements into the array arr[]
Step 4: Input the element to be searched (key)
Step 5: Set a flag variable found = 0
Step 6: Repeat for each element i = 0 to n - 1
  If arr[i] == key, then
   Print “Element found at position i + 1”
   Set found = 1
   Stop the loop
Step 7: If found == 0, print “Element not found”
Step 8: Stop

💻 Pseudo Code: Linear Search

Algorithm LinearSearch(arr, n, key)
    found ← false
    for i ← 0 to n - 1 do
        if arr[i] = key then
            print "Element found at position", i + 1
            found ← true
            break
        end if
    end for
    if found = false then
        print "Element not found"
    end if
End Algorithm



🔹 2. BINARY SEARCH
🧮 Algorithm: Binary Search

Step 1: Start
Step 2: Input number of elements n
Step 3: Input sorted array elements arr[]
Step 4: Input the element to be searched (key)
Step 5: Initialize low = 0, high = n - 1
Step 6: Repeat while low <= high
  Compute mid = (low + high) / 2
  If arr[mid] == key, print “Element found at position mid + 1” and stop
  If arr[mid] < key, set low = mid + 1
  Else set high = mid - 1
Step 7: If element not found, print “Element not found”
Step 8: Stop

💻 Pseudo Code: Binary Search

Algorithm BinarySearch(arr, n, key)
    low ← 0
    high ← n - 1
    while low ≤ high do
        mid ← (low + high) / 2
        if arr[mid] = key then
            print "Element found at position", mid + 1
            return
        else if arr[mid] < key then
            low ← mid + 1
        else
            high ← mid - 1
        end if
    end while
    print "Element not found"
End Algorithm
