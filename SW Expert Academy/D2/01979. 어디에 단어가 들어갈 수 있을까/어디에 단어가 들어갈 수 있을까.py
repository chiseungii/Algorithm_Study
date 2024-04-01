for tc in range(int(input())):
    N,K = map(int, input().split())
    puzzle = []
    for i in range(N):
        puzzle.append(list(map(int, input().split())))

    print("#%d"%(tc+1), end=' ')

    cnt = 0
    for i in range(N):
        for j in range(N):
            if puzzle[i][j] == 1:
                horizon = 0
                if j==0 or puzzle[i][j-1]==0:
                    for k in range(j, N):
                        if puzzle[i][k] == 1: horizon += 1
                        else: break

                vertical = 0
                if i==0 or puzzle[i-1][j]==0:
                    for k in range(i, N):
                        if puzzle[k][j] == 1: vertical += 1
                        else: break

                if horizon == K: cnt += 1
                if vertical == K: cnt += 1

    print(cnt)
