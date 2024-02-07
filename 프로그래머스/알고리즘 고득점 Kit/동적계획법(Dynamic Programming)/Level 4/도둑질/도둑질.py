def solution(money):
    size = len(money)
    DP = [[0 for i in range(size)] for i in range(2)]

    DP[0][0] = money[0]
    DP[1][0] = 0
    for i in range(1, size):
        DP[0][i] = DP[1][i-1]+money[i]
        DP[1][i] = max(DP[0][i-1], DP[1][i-1])
    max_money = DP[1][-1]

    DP[0][-1] = money[-1]
    DP[1][-1] = 0
    for i in range(size-2, -1, -1):
        DP[0][i] = DP[1][i+1]+money[i]
        DP[1][i] = max(DP[0][i+1], DP[1][i+1])
    max_money = max(max_money, DP[1][0])

    return max_money
