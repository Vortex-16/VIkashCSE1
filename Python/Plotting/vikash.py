'''
Write your name using ploting library matplotlib in Python.
Vikash 
'''
import matplotlib.pyplot as plt
x=[1,2,3]
y=[8,6,9]
plt.plot(x,y,label='V')
x=[1,2,3,5,1,6,7]
y=[2,4,1,2,4,5,7]
plt.plot(x,y,label='i')
x=[1,2,3,4,5]
y=[5,3,6,2,7]
plt.plot(x,y,label='k')
x=[1,2,3,4]
y=[7,6,5,8]
plt.plot(x,y,label='a')
x=[1,2,3,4,5,6]
y=[1,3,2,4,3,5]
plt.plot(x,y,label='s')
x=[1,2,3,4,5]
y=[9,7,8,6,10]
plt.plot(x,y,label='h')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.show()
