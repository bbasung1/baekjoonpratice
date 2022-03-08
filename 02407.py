import math
def cnt(a,c):
    b=0
    while(a>=c):
        b+=a//c
        a/=c
    return b
a,b=map(int,input().split())
a5=0
b5=0
prime=[]
for i in range(2,a+1,1):
    ok=1
    for j in range(2,int(math.sqrt(i))+1,1):
        if(i%j==0):
            ok=0
            break
    if(ok):
        prime.append(i)
res=1
for i in prime:
    a5=cnt(a,i)
    b5=cnt(b,i)
    b5+=cnt(a-b,i)
    res*=int(math.pow(i,a5-b5))
print(int(res))