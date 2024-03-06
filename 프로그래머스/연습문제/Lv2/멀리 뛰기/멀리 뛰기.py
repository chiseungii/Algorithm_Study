def solution(n):
    MOD = 1234567
    DP = [1, 2]

    for i in range(2, n):
        DP.append((DP[i-1]+DP[i-2])%MOD)

    return DP[n-1]
