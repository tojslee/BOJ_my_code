a=input()
c=0
d=0
for i in range(97,123):
    if a.count(chr(i))>c:
        c=i
for m in range(97,123):
    if a.count(chr(m))==c and m!=c:
        d=4
    else:
        d=3
if d==4:
    print("?")
else:
    print(chr(c))
