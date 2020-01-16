a=input()
while a!='END':
    for i in range(len(a)):
        print(a[len(a)-i-1], end='')
    print()
    a=input()
