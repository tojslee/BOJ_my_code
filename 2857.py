a=[]
for i in range(5):
    a.append(input())
counter=0
for i in range(len(a)):
    if "FBI" in a[i]:
        print(i+1, end=' ')
        counter+=1
if counter==0:
    print('HE GOT AWAY!')
