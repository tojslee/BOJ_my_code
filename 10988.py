import copy
a=list(input())
b=copy.deepcopy(a)
a.reverse()
if a==b:
    print(1)
else:
    print(0)
