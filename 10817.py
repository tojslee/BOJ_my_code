A, B, C = map(int, input().split())
D=0
if A>=B:
    D=A
    if C>=D:
        print(D)
    elif C>=B:
        print(C)
    else:
        print(B)
else:
    D=B
    if C>=D:
        print(D)
    elif C>=A:
        print(C)
    else:
        print(A)
