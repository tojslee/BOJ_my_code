def b(n):
    global dp
    if n==0: return 1
    if n==1: return 1
    if dp[n]!=-1: return dp[n]
    dp[n]=dp[n-1]+dp[n-2]
    return dp[n]

dp = [-1 for i in range(1000)]
n=int(input())
print(b(n))
