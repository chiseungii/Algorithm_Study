N = int(input())

if N == 3: print(1)
elif N == 4: print(-1)
else:
    DP = [0 for i in range(N+1)]
    DP[1] = DP[2] = DP[4] = -1
    DP[3] = 1

    for i in range(5, N+1):
        three = DP[i-3]
        if three != -1: three += 1

        five = DP[i-5]
        if five != -1: five += 1

        if three==-1 and five==-1: DP[i] = -1
        elif three == -1: DP[i] = five
        elif five == -1: DP[i] = three
        else: DP[i] = min(three, five)

    print(DP[N])
