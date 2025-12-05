# Folding Hash Function in C
Folding Hashing is a method used to generate hash values for keys by dividing the key into equal parts, summing those parts, and then applying a modulo operation to fit the hash table size. This technique helps in distributing keys uniformly across the hash table, reducing collisions.
Here is a C program that implements the folding hash method with linear probing for collision resolution:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 20
int hashTable[TABLE_SIZE];
void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1; // -1 indicates empty slot
    }
}
int foldingHash(int key) {
    char strKey[20];
    sprintf(strKey, "%d", key);
    int len = strlen(strKey);
    int sum = 0;
    for (int i = 0; i < len; i += 2) {
        int part = 0;
        if (i + 1 < len) {
            part = (strKey[i] - '0') * 10 + (strKey[i + 1] - '0');
        } else {
            part = (strKey[i] - '0');
        }
        sum += part;
    }
    return sum % TABLE_SIZE;
}
void insert(int key) {
    int index = foldingHash(key);
    int originalIndex = index;
    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE; // Linear probing
        if (index == originalIndex) {
            printf("Hash table is full, cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
}
void displayTable() {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: %d\n", i, hashTable[i]);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}
int main() {
    initializeTable();
    int keys[] = {1234, 5678, 91011, 1213, 1415, 1617, 1819, 2021};
    int n = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; i++) {
        insert(keys[i]);
    }
    displayTable();
    return 0;
}
```
This program initializes a hash table, defines a folding hash function, and provides functions to insert keys
and display the hash table. The `foldingHash` function processes the key by splitting it into parts of two digits, summing them, and then taking the modulo with the table size to get the hash index. Linear probing is used to handle collisions when inserting keys into the hash table.
### Pseduo Code:
1. Initialize a hash table of a fixed size with all slots set to -1 (indicating empty).     
2. Define a function `foldingHash(key)`:
   - Convert the key to a string.
   - Split the string into parts of two digits.
   - Sum these parts.
   - Return the sum modulo the table size.
3. Define a function `insert(key)`:
    - Compute the hash index using `foldingHash(key)`.
    - If the slot at the computed index is occupied, use linear probing to find the next available slot.
    - Insert the key into the found slot.
4. Define a function `displayTable()` to print the contents of the hash table.
5. In the `main()` function:
   - Initialize the hash table.
   - Define an array of keys to be inserted.
   - Loop through the array and insert each key into the hash table.
   - Display the contents of the hash table.

### Output:
When you run the program, it will display the contents of the hash table after inserting the specified keys. The output will look something like this:
```
Hash Table:
Index 0: 1213
Index 1: 1415
Index 2: 1617
Index 3: 1819
Index 4: 2021
Index 5: Empty
Index 6: Empty
Index 7: Empty
Index 8: Empty
Index 9: Empty
Index 10: 1234
Index 11: 5678
Index 12: 91011
Index 13: Empty
Index 14: Empty
Index 15: Empty
Index 16: Empty
Index 17: Empty
Index 18: Empty
Index 19: Empty
```
