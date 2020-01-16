a=int(input())
for i in range(a):
    b=list(map(int, input().split()))
    if ((b[0]-b[1])**2+(b[3]-b[4])**2)**(1/2)==0 and b[2]==b[5]:
        print('-1')
    elif ((b[0]-b[1])**2+(b[3]-b[4])**2)**(1/2)==0 and b[2]!=b[5]:
        print('0')
    elif ((b[0]-b[1])**2+(b[3]-b[4])**2)**(1/2)<b[2]+b[5]:
        print("2")
    elif ((b[0]-b[1])**2+(b[3]-b[4])**2)**(1/2)==b[2]+b[5]:
        print('1')
    else:
        print('0')
