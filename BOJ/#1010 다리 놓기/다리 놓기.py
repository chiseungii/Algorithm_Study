for tc in range(int(input())):
    N,M = map(int, input().split())
    DP = [[0 for i in range(M+1)] for i in range(M+1)]

    DP[0][0] = 1
    for i in range(1, M+1):
        DP[i][0] = DP[i][i] = 1
        for j in range(1, i):
            DP[i][j] = DP[i-1][j-1]+DP[i-1][j]

    print(DP[M][N])
