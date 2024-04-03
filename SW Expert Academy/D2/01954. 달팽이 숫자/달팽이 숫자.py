for tc in range(int(input())):
    N = int(input())

    print("#%d"%(tc+1))

    snail = [[0 for i in range(N)] for i in range(N)]

    i,j = 0,-1
    for k in range(N):
        j += 1
        snail[0][j] = k+1

    dir,num = 0,N+1
    for n in range(N*2-1, 1, -1):
        if dir == 0:
            for k in range(n//2):
                i += 1
                snail[i][j] = num
                num += 1
        elif dir == 1:
            for k in range(n//2):
                j -= 1
                snail[i][j] = num
                num += 1
        elif dir == 2:
            for k in range(n//2):
                i -= 1
                snail[i][j] = num
                num += 1
        else:
            for k in range(n//2):
                j += 1
                snail[i][j] = num
                num += 1

        dir = (dir+1)%4

    for s in snail:
        for si in s:
            print(si, end=' ')
        print()
