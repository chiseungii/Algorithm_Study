def solution(m, n, puddles):
    MOD = 1000000007

    DP = [[0 for i in range(m)] for i in range(n)]
    DP[0][0] = 1

    for p0, p1 in puddles:
        DP[p1-1][p0-1] = -1

    for i in range(1, m):
        if DP[0][i] == -1: DP[0][i] = 0
        else: DP[0][i] = DP[0][i-1]

    for i in range(1, n):
        if DP[i][0] == -1: DP[i][0] = 0
        else: DP[i][0] = DP[i-1][0]

    for i in range(1, n):
        for j in range(1, m):
            if DP[i][j] == -1: DP[i][j] = 0
            else: DP[i][j] = (DP[i-1][j]+DP[i][j-1])%MOD

    return DP[n-1][m-1]
