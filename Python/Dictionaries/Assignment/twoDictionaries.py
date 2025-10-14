#write a python program which creates two dictionaries. One that stores conversion values from meter to centimeter
# and the other that store the reverse.
meter ={1,3,5,7,9}
centimeter={100,300,500,700,900}
dict1={}
dict2={}
for i in meter:
    dict1[i]=i*100
for j in centimeter:
    dict2[j]=j/100
print("Meter to Centimeter Conversion:",dict1)
print("Centimeter to Meter Conversion:",dict2)