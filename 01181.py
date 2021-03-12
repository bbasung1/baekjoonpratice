from sys import stdin,stdout
a=int(stdin.readline())
c=[]
for _ in range(a):
    b=stdin.readline()
    c.append(b)
c=sorted(list(set(c)),key=lambda x:(len(x),x))
#print(c)
for k in c:
    stdout.write(k)