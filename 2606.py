n=int(input())
k=int(input())
computer=[0 for i in range(n)]
line=[[] for i in range(k)]
for i in range(k):
    line[i]=list(map(int, input().split()))
computer[0]=1
for l in range(2):
    for i in range(k):
        if computer[line[i][0]-1]==1:
            computer[line[i][1]-1]=1

counter=0
for i in range(len(computer)):
    if computer[i]==1:
        counter+=1
print(counter-1)
