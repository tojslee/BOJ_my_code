def solve(a: list):
    res = 0
    for i in range (0, len(a)):
        res += a[i]
    return res

print(solve([1, 2, 3, 4, 5]))