N,K = map(int, input().split())
DP = [[0 for i in range(N+1)] for i in range(N+1)]

DP[0][0] = 1
for i in range(1, N+1):
    DP[i][0] = DP[i][i] = 1
    for j in range(1, N):
        DP[i][j] = DP[i-1][j-1]+DP[i-1][j]

print(DP[N][K])
