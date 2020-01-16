import copy
score=[]
for i in range(8):
    score.append(int(input()))
scores=copy.deepcopy(score)
# print(score)
score.sort()
score[0]=0
score[1]=0
score[2]=0
print(sum(score))
d=[]
for i in range(3,len(score)):
    for k in range(len(scores)):
        if score[i]==scores[k]:
            d.append(k)
d.sort()
for i in range(len(d)):
    print(d[i]+1, end=' ')
