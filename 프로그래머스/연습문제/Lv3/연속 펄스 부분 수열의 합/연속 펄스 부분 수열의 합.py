def solution(sequence):
    DP = [[0 for i in range(len(sequence))] for i in range(2)]
    DP[0][0] = sequence[0]
    DP[1][0] = -sequence[0]

    for i in range(1, len(sequence)):
        DP[0][i] = max(DP[1][i-1]+sequence[i], sequence[i])
        DP[1][i] = max(DP[0][i-1]-sequence[i], -sequence[i])

    return max(max(DP[0]), max(DP[1]))
