def main():
    n = int(input())
    snail = [[0 for i in range(n)] for i in range(n)]

    cnt,dir = n,0
    x,y,num = -1,0,0
    while cnt > 0:
        if dir == 0:
            for i in range(cnt):
                x += 1
                snail[x][y] = num
                num = (num+1)%10
        elif dir == 1:
            for i in range(cnt):
                y += 1
                snail[x][y] = num
                num = (num+1)%10
        else:
            for i in range(cnt):
                x,y = x-1,y-1
                snail[x][y] = num
                num = (num+1)%10

        dir = (dir+1)%3
        cnt -= 1

    for i in range(n):
        print(' '*(n-i-1), end='')
        for j in range(i+1): print(snail[i][j], end=' ')
        print()

main()
