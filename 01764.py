from sys import stdout,stdin
a=set()
b=list(map(int,stdin.readline().split()))
for i in range(b[0]):
    a.add(stdin.readline())
d=set()
for i in range(b[1]):
    d.add(stdin.readline())
e=sorted(list(a&d))
stdout.write(str(len(e))+"\n")
for i in e:
    stdout.write(i)