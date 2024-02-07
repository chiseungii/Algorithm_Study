def solution(triangle):
    DP = [[0 for i in range(len(triangle))] for i in range(len(triangle))]
    DP[0][0] = triangle[0][0]

    for i in range(1, len(triangle)):
        DP[i][0] = DP[i-1][0]+triangle[i][0]
        DP[i][i] = DP[i-1][i-1]+triangle[i][i]

        for j in range(1, i):
            a = DP[i-1][j]+triangle[i][j]
            b = DP[i-1][j-1]+triangle[i][j]
            DP[i][j] = max(a, b)

    return max(DP[len(triangle)-1])
