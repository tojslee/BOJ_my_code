import sys
a, b=map(int, sys.stdin.readline().split())
if(a>b):
    a, b=b, a
print((a+b)*(b-a+1)/2)
