a=[]
for i in range(9):
    a.append(int(input()))
a_sum=sum(a)
for i in range(len(a)):
    for k in range(i,len(a)):
        if a[i]+a[k]==a_sum-100:
            a[i]=0
            a[k]=0
            break
a_sorted=sorted(a)
for i in range(len(a)):
    if a_sorted[i]!=0:
        print(a_sorted[i])
