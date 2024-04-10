def main():
    n = int(input())
    square = [[0 for i in range(n)] for i in range(n)]

    square[0][0] = 1
    num,dir = 2,1

    for i in range(1, n):
        if dir == 1:
            for j in range(i+1):
                square[i-j][j] = num
                num += 1
        else:
            for j in range(i+1):
                square[j][i-j] = num
                num += 1

        dir = -dir

    for i in range(1, n-1):
        if dir == 1:
            for j in range(n-i):
                square[n-j-1][i+j] = num
                num += 1
        else:
            for j in range(n-i):
                square[i+j][n-1-j] = num
                num += 1
            
        dir = -dir

    square[n-1][n-1] = num

    for sq in square:
        for s in sq: print(s, end=' ')
        print()

main()
