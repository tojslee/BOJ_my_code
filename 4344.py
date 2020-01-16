def avg(x):
    return (sum(x)-x[0])/x[0]
C=int(input())
b=0
for i in range(C):
    a=list(map(int, input().split()))
    for r in range(1,len(a)):
        if avg(a)<a[r]:
            b=b+1
    print(format(b/a[0]*100, '.3f')+"%")
    b=0
