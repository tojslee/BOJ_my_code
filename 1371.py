import sys
str=sys.stdin.readlines()
a=[0 for i in range(25)]

for i in range(len(a)):
    a[i]=a[i]+str.count(chr(i+97))

max=a[0]
c=0
for i in range(1,len(a)):
    if max<a[i]:
        max=a[i]
        c=i
print(chr(c+97))
