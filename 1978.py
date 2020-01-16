a=[1 for i in range(1001)]
a[0]=0
a[1]=0
for j in range(2, 1001):
    if (a[j]):
        b=j*2
        while b<=1000:
            a[b]=0
            b=b+j
n=int(input())
sa=input()
a_split=sa.split(" ")
counter=0
for i in range(len(a_split)):
    if a[int(a_split[i])]:
        counter=counter+1
print(counter)
