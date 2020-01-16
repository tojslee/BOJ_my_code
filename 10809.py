s=input()
a=[]
for i in range(97,123):
    if chr(i) not in s:
        a.append(-1)
    else:
        a.append(s.index(chr(i)))
for n in range(len(a)):
    print(a[n], end=' ')
