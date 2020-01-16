n = int(input())
max = 0
for i in range(1, n):
    number = i
    sum = i
    while number != 0:
        sum += number % 10
        number = number // 10
    if sum == n:
        max = i
        break
print(max)