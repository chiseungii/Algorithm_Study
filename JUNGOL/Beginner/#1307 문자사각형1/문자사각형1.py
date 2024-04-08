n = int(input())
square = [[0 for i in range(n)] for i in range(n)]

c = ord('A')
for i in range(n-1, -1, -1):
    for j in range(n-1, -1, -1):
        square[j][i] = c
        c += 1
        if c > ord('Z'): c = ord('A')

for s in square:
    for si in s:
        print(chr(si), end=' ')
    print()
