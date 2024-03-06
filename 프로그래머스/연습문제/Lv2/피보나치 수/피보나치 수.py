def solution(n):
    MOD = 1234567
    DP = [0 for i in range(n+1)]
    DP[1] = 1

    for i in range(2, n+1):
        DP[i] = (DP[i-1]+DP[i-2])%MOD

    return DP[n]
