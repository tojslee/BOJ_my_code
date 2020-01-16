ask_code=[(65,66,67),(68,69,70),(71,72,73),(74,75,76),(77,78,79),(80,81,82,83),(84,85,86),(87,88,89,90)]
dial=input()
res=0
for i in range(len(dial)):
    for k in range(len(ask_code)):
        for n in range(len(ask_code[k])):
            if ord(dial[i])==ask_code[k][n]:
                res=res+k+3
print(res)
