n=int(input())
asdf=[]
for i in range(n):
    asdf.append(list(input()))
    for k in range(len(asdf[0])):
        if asdf[0][len(asdf[0])-k-1]=='(':
            for s in range(len(asdf[0])-k-1, len(asdf[0])):
                if asdf[0][s]==')':
                    del(asdf[0][s])
                else:
                    break

    if(len(asdf[0]))==0:
        print("YES")
    else:
        print("NO")
    asdf=[]
