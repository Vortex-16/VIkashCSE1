st=input("Enter String:")

newSr=""
for i in st:
    if i not in newSr:
        newSr+=i
print(newSr)