n=int(input())
arr=[[0 for i in range(n)]for j in range(n)]
for k in range(n):
    a=input()
    for l in range(len(a)):
        if a[l]=='X':
            arr[k][l]=1
counter=0
width=0
hight=0
for i in range(n):
    if counter>=2:
        width+=1
    counter=0
    for j in range(n):
        if arr[i][j]==0:
            counter+=1
        else:
            if counter>=2:
                width+=1
            counter=0
if counter>=2:
    width+=1
counter=0
for k in range(n):
    if counter>=2:
        hight+=1
    counter=0
    for l in range(n):
        if arr[l][k]==0:
            counter+=1
        else:
            if counter>=2:
                hight+=1
            counter=0
if counter>=2:
    hight+=1
print(width, hight)
