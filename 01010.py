from math import comb
a=int(input())
for i in range(a):
    b,c=input().split()
    print(comb(int(c),int(b)))