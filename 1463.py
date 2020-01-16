N=int(input())
def a(n):
    global dp
    if n==1: return 0
    if n==2 or n==3: return 1
    if dp[n] !=-1: return dp[n]
    
