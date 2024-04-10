def main():
    n = int(input())
    snail = [[0 for i in range(n)] for i in range(n)]

    for i in range(n):
        snail[0][i] = n-i
    num = n+1

    dir=0; cnt=(n-1)*2+1
    x,y = 0,0
    while cnt > 1:
        if dir == 0:
            for i in range(cnt//2):
                x += 1
                snail[x][y] = num
                num += 1
            dir = (dir+1)%4
        elif dir == 3:
            for i in range(cnt//2):
                y -= 1
                snail[x][y] = num
                num += 1
            dir = (dir+1)%4
        elif dir == 2:
            for i in range(cnt//2):
                x -= 1
                snail[x][y] = num
                num += 1
            dir = (dir+1)%4
        else:
            for i in range(cnt//2):
                y += 1
                snail[x][y] = num
                num += 1
            dir = (dir+1)%4

        cnt -= 1

    for sn in snail:
        for s in sn: print(s, end=' ')
        print()

main()
