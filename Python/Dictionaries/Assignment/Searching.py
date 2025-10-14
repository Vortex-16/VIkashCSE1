#Searching by Linear Or Binary Search
#input by user dictionary and key to be searched
dict = {'a': 100, 'b': 200, 'c': 300}
key = 'd'
#Choose the method
#Linear Search
def linearSearch(dict, key):
    for k in dict.keys():
        if k == key:
            return True
    return False
#Binary Search
def binarySearch(dict, key):
    keys = sorted(dict.keys())
    low = 0
    high = len(keys) - 1
    while low <= high:
        mid = (low + high) // 2
        if keys[mid] == key:
            return True
        elif keys[mid] < key:
            low = mid + 1
        else:
            high = mid - 1
    return False

method = input("Enter 'L' for Linear Search or 'B' for Binary Search: ").upper()
if method == 'L':
    found = linearSearch(dict, key)
elif method == 'B':
    found = binarySearch(dict, key)
else:
    print("Invalid method selected.")
    found = False