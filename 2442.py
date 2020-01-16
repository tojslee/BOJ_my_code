n=int(input())
for i in range(0,n):
    print(" "*(n-1-i), end='')
    print("*"*(2*i+1), end='')
    print(" "*(n-1-i))
