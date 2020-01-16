N=int(input())
a=input()
b=[]
sum=0
for i in range(len(a)):
    b.append((int(a)//(10**i))%10)
for n in range(len(a)):
    sum=sum+b[n]
print(sum)


N=int(input())
a=input()
sum=0
for i in range(N):
    sum=sum+a[i]
print(sum)
