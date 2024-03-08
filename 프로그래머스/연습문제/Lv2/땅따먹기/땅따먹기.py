def solution(land):
    DP = [[0 for i in range(len(land[0]))] for i in range(len(land))]
    for i in range(len(land[0])):
        DP[0][i] = land[0][i]

    for i in range(1, len(land)):
        for j in range(len(land[0])):
            max_n = 0
            for k in range(len(land[0])):
                if j == k: continue
                else: max_n = max(DP[i-1][k], max_n)
            DP[i][j] = max_n+land[i][j]

    return max(DP[-1])
