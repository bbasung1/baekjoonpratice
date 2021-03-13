from sys import stdout,stdin
a=int(stdin.readline())
b=[]
for _ in range(a):
    c=list(map(int,stdin.readline().split()))
    b.append(c)
b=sorted(b,key=lambda x:(x[1],x[0]))
for x in b:
    stdout.write(str(x[0])+" "+str(x[1])+"\n")
    