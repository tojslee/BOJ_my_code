def changing(a):
    for i in range(5):
        if i+1<5:
            if a[i]>a[i+1]:
                tmp=a[i]
                a[i]=a[i+1]
                a[i+1]=tmp
                for k in range(len(a)):
                    print(a[k], end=' ')
                print()
        else:
            break
a=list(map(int, input().split()))
tmp=0
while True:
    changing(a)
    if a[0]<a[1]<a[2]<a[3]<a[4]:
        break
