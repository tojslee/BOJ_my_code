m, n=map(int, input().split())
a=[1 for i in range(n+1)]
a[0]=0
a[1]=0
for j in range(2, n+1):
    if (a[j]):
        b=j*2
        while b<=n:
            a[b]=0
            b=b+j
for k in range(m, n+1):
    if a[k]:
        print(k)
