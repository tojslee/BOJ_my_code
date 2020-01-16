a=input()
while a!='*':
    flag=True
    for i in range(97, 123):
        if chr(i) not in a:
            flag=False
            break
    if flag:
        print("Y")
    else:
        print("N")
    a=input()
