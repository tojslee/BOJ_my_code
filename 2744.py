a=input()
b=[]
for i in range(len(a)):
    if 65<=ord(a[i])<=90:
        b.append(a[i].lower())
    else:
        b.append(a[i].upper())
print(''.join(b))
