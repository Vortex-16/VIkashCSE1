#Write a Python program to get a slice from a tuple.

tuplex=(2,3,4,5,6,7,8,6,1)
slice=tuplex[2:5]
print(slice)

slice=tuplex[5:]
print(slice)

slice=tuplex[:4]
print(slice)

slice=tuplex[:]
print(slice)

slice=tuplex[-5:-2]
print(slice)

tuplex=tuple("HELLO WORLD")
print(tuplex)

slice=tuplex[2:9:2]
print(slice)
slice=tuplex[::3]
print(slice)

slice=tuplex[9:2:-4]
print(slice)

slice=tuplex[::-1]
print(slice)