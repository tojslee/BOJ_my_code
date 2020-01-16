a=list(map(int, input().split()))
a.sort()
b=input()
for i in range(len(b)):
    if b[i]=='A':
        print(a[0], end=' ')
    elif b[i]=='B':
        print(a[1], end=' ')
    else:
        print(a[2], end=' ')
