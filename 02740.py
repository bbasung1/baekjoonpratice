from sys import stdin,stdout
n, m = map(int, stdin.readline().split()) # taking number of rows and column
arr1 = [list(map(int, stdin.readline().split())) for _ in range(n)]
j,k = map(int, stdin.readline().split()) # taking number of rows and column
arr2 = [list(map(int, stdin.readline().split())) for _ in range(j)]
arr3=[[0 for _ in range(len(arr2[0]))] for _ in range(len(arr1))]
for i in range(n):
    for p in range(k):
        for b in range(m):
            arr3[i][p]+=arr1[i][b]*arr2[b][p]
for i in arr3:
    for j in i:
        stdout.write(str(j)+" ")
    stdout.write("\n")
