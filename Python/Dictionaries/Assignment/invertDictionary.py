#write a pyhton program to invert a dictionary, i.e. it makes key of of one dictionary value of another and vice versa.
d={1:'a',2:'b',3:'c'}
d1={}
for k,v in d.items():
    d1[v]=k
print("The inverted dictionary is:",d1)

'''
Explanation:
This code takes a dictionary 'd' with integer keys and string values, 
and creates a new dictionary 'd1' where the keys and values are swapped. 
It iterates through each key-value pair in the original dictionary using the items() method, 
and assigns the value as the key and the key as the value in the new dictionary. 
Finally, it prints the inverted dictionary.
'''