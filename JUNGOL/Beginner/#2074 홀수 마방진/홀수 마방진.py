def main():
    n = int(input())
    square = [[0 for i in range(n)] for i in range(n)]

    num = 1
    x,y = 0,n//2

    while num <= n*n:
        square[x][y] = num

        if num%n == 0: x += 1
        else: x,y = x-1,y-1

        if x < 0: x += n
        elif x >= n: x -= n
        if y < 0: y += n
        elif y >= n: y -= n

        num += 1

    for sq in square:
        for s in sq: print(s, end=' ')
        print()

main()
