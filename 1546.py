N=int(input())
a=list(map(int, input().split()))
M=max(a)
av=0
for i in range(N):
    av=av+(a[i]/M*100)
print(format(av/N, '.2f'))
