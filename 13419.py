def gcd(a, b):
    while (b!=0):
        temp=a%b
        a=b
        b=temp
    return abs(a)

def lcm(a, b):
    gcd_value=gcd(a, b)
    if(gcd_value==0): return 0
    return abs((a*b)/gcd)

n=int(input())
for i in range(n):
    a=input()
    if len(a)==1:
        print(a)
        print(a)
    elif len(a)%2==0:
        for j in range(int(len(a)/2)):
            print(a[2*j], end='')
        print()
        for k in range(int(len(a)/2)):
            print(a[2*k+1], end='')
        print()
    else:
        for j in range(-int(len(a)/2), int(len(a)/2)+1):
            print(a[2*j-1], end='')
        print()
        for k in range(-int(len(a)/2), int(len(a)/2)+1):
            print(a[2*k], end='')
        print()
