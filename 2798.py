n, m = map(int, input().split())
card_list = list(map(int, input().split())) #list length : n
max = -1
for i1 in range(0, n-2):
    first = card_list[i1]
    for i2 in range(i1 + 1, n-1):
        second = card_list[i2]
        for i3 in range(i2 + 1, n):
            third = card_list[i3]
            sum = first + second + third
            if max < sum <= m:
                max = sum
print(max)