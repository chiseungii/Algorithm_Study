def solution(n, money):
    DP = [0 for i in range(n+1)]
    DP[0] = 1

    money = sorted(money)
    for m in money:
        for i in range(m, n+1):
            DP[i] += DP[i-m]

    return DP[n]
