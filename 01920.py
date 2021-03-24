from sys import stdin,stdout
from bisect import bisect
a=int(stdin.readline())
b=list(map(int,stdin.readline().split()))
b.sort()
c=int(stdin.readline())
d=list(map(int,stdin.readline().split()))
for i in d:
    stdout.write(str(bisect(b,i))+"\n")