m=int(input())
n=int(input())
a=[1 for i in range(n+1)]
a[0]=0
a[1]=0
for j in range(2, n+1):
    if a[j]:
        b=j*2
        while b<=n:
            a[b]=0
            b=b+j
sum=0
c=0
for r in range(m, n+1):
    if a[r]==1:
        c=c+1
if c==0:
    print(-1)
else:
    for k in range(m, n+1):
        if a[k]:
            sum=sum+int(k)
    print(sum)
    for k in range(m, n+1):
        if a[k]:
            print(k)
            break
