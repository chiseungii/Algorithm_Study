def main():
    n,m = map(int, input().split())
    pas = [[0 for i in range(n)] for i in range(n)]

    pas[0][0] = 1
    for i in range(1, n):
        pas[i][0] = pas[i][i] = 1
        for j in range(1, i):
            pas[i][j] = pas[i-1][j]+pas[i-1][j-1]

    if m == 1:
        for i in range(n):
            for j in range(i+1): print(pas[i][j], end=' ')
            print()
    elif m == 2:
        for i in range(n-1, -1, -1):
            print(' '*(n-i-1), end='')
            for j in range(i+1): print(pas[i][j], end=' ')
            print()
    else:
        for i in range(n):
            for j in range(i+1): print(pas[n-j-1][n-i-1], end=' ')
            print()

main()
