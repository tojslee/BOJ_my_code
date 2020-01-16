def cycle(x):
    if 1<=x<=9:
        a=x
    else:
        a=(x//10)+(x%10)

    return int(str(x%10)+str(a%10))

N=int(input())
b=cycle(N)
counter=1
while b!=N:
    b=cycle(b)
    counter=counter+1
print(counter)
# N=int(input())
# b=[]
# b.insert(0,cycle(N))
# while b[0]!=N:
#     b.insert(0,cycle(b[0]))
# print(b)
