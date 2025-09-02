value=[]
print("Enter 10 integers ")
#taking 10 inputs
for i in range (10):
    newValue=int(input((i+1)))
    value+=[newValue]
    #Creating histogram
print("\nCreating a hsitogram from values")
print("%s%15s%19s"%("Element ","Value ","Histogram"))
for i in range(len(value)):
    print("%7d%15s%11s"%(i,value[i] , "*"*value[i]))
