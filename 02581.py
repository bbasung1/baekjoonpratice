from sys import stdin,stdout
a=int(stdin.readline())
b=int(stdin.readline())
c=-1
sum=0
for i in range(a,b+1):
    prime=True
    if(i==1):
        continue
    for j in range(2,int(i**1/2)+1):
        if(i%j==0):
            prime=False
            break
    if(prime):
        #print(i)
        if(c==-1):
            c=i
        sum+=i
if(c==-1):
    stdout.write(str(c)+"\n")
else:
    stdout.write(str(sum)+"\n"+str(c))

