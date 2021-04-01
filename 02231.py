from math import log10
from sys import stdin,stdout
a=int(stdin.readline())
b=int(log10(a))+1
for i in range(a-(9*b),a+1):
    if(i==a or a<10):
        print(0)
        break
    c=i
    for j in str(i):
        c+=int(j)
    if(a==c):
        print(i)
        break

    