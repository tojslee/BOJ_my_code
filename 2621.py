card=[[0 in range(9)] in range(4)]
for i in range(5):
    a=input().split()
    if a[0]=='R':
        a[0]=0
    elif a[0]=='Y':
        a[0]=1
    elif a[0]=='B':
        a[0]=1
    else: //G
        a[0]=4
    card[a[0]][int(a[1])]=1
