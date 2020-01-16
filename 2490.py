for i in range(3):
    a=input().split()
    d=0
    for k in range(len(a)):
        if int(a[k])==0:
            d=d+1
    if d==0:
        print('E')
    elif d==1:
        print('A')
    elif d==2:
        print('B')
    elif d==3:
        print('C')
    elif d==4:
        print('D')
