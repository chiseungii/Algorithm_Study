computers = [
    [0],
    [1],
    [2, 4, 8, 6],
    [3, 9, 7, 1],
    [4, 6],
    [5],
    [6],
    [7, 9, 3, 1],
    [8, 4, 2, 6],
    [9, 1]
]

for tc in range(int(input())):
    a,b = map(int, input().split())

    a %= 10
    b %= len(computers[a])
    b = computers[a][b-1]

    if b == 0: print(10)
    else: print(b)
