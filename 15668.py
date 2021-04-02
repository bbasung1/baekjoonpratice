from sys import stdin,stdout
a=[0]*2000000
b=int(input())
for _ in range(b):
    c=int(stdin.readline())
    if(c<=0):
        a[1000000-c]+=1
    else:
        a[c]+=1
for n,_ in enumerate(a):
    for j in range(a[n]):
        if(n>999999):
            stdout.write(str(1000000-n)+"\n")
        else:
            stdout.write(str(n)+"\n")

