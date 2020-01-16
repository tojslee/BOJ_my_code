s=input()
number=[]
for i in range(26):
    number.append(s.count(chr(i+97)))
for i in range(26):
    print(number[i], end=' ')
