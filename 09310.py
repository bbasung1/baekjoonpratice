while(True):
    a=int(input())
    if(a==0):
        break
    b,c,d=map(int,input().split())
    if(2*c==b+d):
        print((a*((2*b)+((d-c)*(a-1))))//2)
    elif(c**2==b*d):
        print(b*((((d//c)**a)-1)//((d//c)-1)))

