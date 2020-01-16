now=[0,0,0,0,0]
for i in range(4):
    a,b=map(int, input().split())
    now[i+1]=now[i]+b-a
print(max(now))
