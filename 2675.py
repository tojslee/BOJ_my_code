a=int(input())
for i in range(a):
    b=list(map(str, input().split()))
    c=[]
    for e in range(len(b[1])):
        c.append(b[1][e])
    for w in range(len(b[1])):
        print(c[w]*int(b[0]), end='')
    print()
