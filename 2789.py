a=input()
li=[]
for i in range(len(a)):
    if a[i] not in 'CAMBRIDGE':
        li.append(a[i])
print("".join(li))
