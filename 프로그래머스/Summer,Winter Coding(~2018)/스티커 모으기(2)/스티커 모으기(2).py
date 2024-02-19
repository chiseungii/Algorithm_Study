def solution(sticker):
    if len(sticker) == 1: return sticker[0]

    DP = [[0 for i in range(len(sticker))] for i in range(2)]
    DP[0][0] = sticker[0]
    for i in range(1, len(sticker)-1):
        DP[0][i] = DP[1][i-1]+sticker[i]
        DP[1][i] = max(DP[0][i-1], DP[1][i-1])

    answer = max(DP[0][-2], DP[1][-2])

    for i in range(len(sticker)):
        DP[0][i] = DP[1][i] = 0
    DP[0][-1] = sticker[-1]
    for i in range(len(sticker)-2, 0, -1):
        DP[0][i] = DP[1][i+1]+sticker[i]
        DP[1][i] = max(DP[0][i+1], DP[1][i+1])

    return max(answer, DP[0][1], DP[1][1])
