def solution(matrix_sizes):
    length = len(matrix_sizes)
    DP = [[0 for i in range(length)] for i in range(length)]

    for n in range(1, length):
        for i in range(length-n):
            for j in range(i, i+n):
                tmp = DP[i][j]+DP[j+1][i+n]
                tmp += matrix_sizes[i][0]*matrix_sizes[j][1]*matrix_sizes[i+n][1]

                if DP[i][i+n]==0 or tmp<DP[i][i+n]:
                    DP[i][i+n] = tmp

    return DP[0][-1]
