a=input()
result=0
for i in range(len(a)):
    if a[i]=='A':
        result=result+16**(len(a)-i-1)*10
    elif a[i]=='B':
        result=result+16**(len(a)-i-1)*11
    elif a[i]=='C':
        result=result+16**(len(a)-i-1)*12
    elif a[i]=='D':
        result=result+16**(len(a)-i-1)*13
    elif a[i]=='E':
        result=result+16**(len(a)-i-1)*14
    elif a[i]=='F':
        result=result+16**(len(a)-i-1)*15
    else:
        result=result+16**(len(a)-i-1)*int(a[i])
print(result)
