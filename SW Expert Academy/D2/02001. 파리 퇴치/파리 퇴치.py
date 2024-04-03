for tc in range(int(input())):
    N,M = map(int, input().split())
    flies = []
    for i in range(N):
        flies.append(list(map(int, input().split())))

    print("#%d"%(tc+1), end=' ')

    max_fly = 0
    for i in range(N-M+1):
        for j in range(N-M+1):
            sum_fly = 0
            for x in range(i, i+M):
                sum_fly += sum(flies[x][j:j+M])

            max_fly = max(sum_fly, max_fly)

    print(max_fly)
