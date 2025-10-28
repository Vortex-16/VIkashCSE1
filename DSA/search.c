#include <stdio.h>
#include <stdlib.h>

// ----------- Linear Search -----------
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;  // return index if found
    }
    return -1; // not found
}

// ----------- Binary Search -----------
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // not found
}

// ----------- Display Array -----------
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// ----------- Main Function -----------
int main() {
    int n, choice, key, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements (for binary search, enter sorted elements):\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = linearSearch(arr, n, key);
                if (result != -1)
                    printf("Element found at position %d (index %d)\n", result + 1, result);
                else
                    printf("Element not found!\n");
                break;

            case 2:
                printf("Enter element to search (array must be sorted): ");
                scanf("%d", &key);
                result = binarySearch(arr, n, key);
                if (result != -1)
                    printf("Element found at position %d (index %d)\n", result + 1, result);
                else
                    printf("Element not found!\n");
                break;

            case 3:
                printf("Array elements:\n");
                display(arr, n);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

/*
Enter number of elements: 6
Enter elements:
2 5 7 9 11 15

Menu:
1. Linear Search
2. Binary Search
3. Display Array
4. Exit
Enter your choice: 2
Enter element to search (array must be sorted): 9
Element found at position 4 (index 3)

*/