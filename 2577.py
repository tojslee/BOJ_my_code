a=int(input())
b=int(input())
c=int(input())
res=a*b*c
re=str(res)
list=[0 for i in range(10)]
for i in range(len(re)):
    list[int(re[i])]+=1
for i in range(len(list)):
    print(list[i])
