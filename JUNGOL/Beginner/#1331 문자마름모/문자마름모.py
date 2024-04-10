def main():
    n = int(input())
    square = [[' ' for i in range(n*2-1)] for i in range(n*2-1)]

    c = 'A'
    for i in range(n-1, 0, -1):
        x,y = n-i-1,n-1

        square[x][y] = c
        c = chr((ord(c)+1-ord('A'))%26 + ord('A'))

        for j in range(i):
            x,y = x+1,y-1
            square[x][y] = c
            c = chr((ord(c)+1-ord('A'))%26 + ord('A'))

        for j in range(i):
            x,y = x+1,y+1
            square[x][y] = c
            c = chr((ord(c)+1-ord('A'))%26 + ord('A'))

        for j in range(i):
            x,y = x-1,y+1
            square[x][y] = c
            c = chr((ord(c)+1-ord('A'))%26 + ord('A'))

        for j in range(i-1):
            x,y = x-1,y-1
            square[x][y] = c
            c = chr((ord(c)+1-ord('A'))%26 + ord('A'))

    square[n-1][n-1] = c

    for sq in square:
        for s in sq: print(s, end=' ')
        print()

main()
