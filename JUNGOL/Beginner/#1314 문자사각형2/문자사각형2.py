n = int(input())
square = [[0 for i in range(n)] for i in range(n)]

dir,c = 1,ord('A')
for i in range(n):
    if dir == 1:
        for j in range(n):
            square[j][i] = c
            c += 1
            if c > ord('Z'): c = ord('A')
    else:
        for j in range(n-1, -1, -1):
            square[j][i] = c
            c += 1
            if c > ord('Z'): c = ord('A')

    dir = -dir

for s in square:
    for si in s:
        print(chr(si), end=' ')
    print()
