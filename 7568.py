n = int(input())
people = []
nums = [1] * n
for i in range(0, n):
    a, b = map(int, input().split())
    people.append((a, b))

for i in range(0, n):
    for j in range(0, n):
        if people[i][0] < people[j][0] and people[i][1] < people[j][1]:
            nums[i] += 1

for i in range(0, n - 1):
    print(nums[i], end  = ' ')
print(nums[n-1])