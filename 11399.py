from sys import stdout,stdin
a=int(stdin.readline())
b=list(map(int,stdin.readline().split()))
b.sort()
sum=0
for i in b:
    sum+=i*a
    a-=1
stdout.write(str(sum)+"\n")