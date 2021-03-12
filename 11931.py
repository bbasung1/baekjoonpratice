from sys import stdin,stdout
a=int(stdin.readline())
b=[]
for _ in range(a):
    c=int(stdin.readline())
    b.append(c)
b=sorted(b)
for k in b[::-1]:
    stdout.write(str(k))
    stdout.write("\n")