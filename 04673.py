from sys import stdin,stdout
def d(a):
    b=a
    for k in str(a):
        b+=int(k)
    return b
c=set()
for i in range(10000):
    c.add(d(i))
for i in range(1,10000):
    if(i not in c):
        stdout.write(str(i)+"\n")

    