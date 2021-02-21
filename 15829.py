a=int(input())
b=input()
sum=0
for i in range(a):
    c=int(ord(b[i])-96)
    sum+=c*(31**i)
print(sum%1234567891)
