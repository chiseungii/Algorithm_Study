n = int(input())
square = [[0 for i in range(n)] for i in range(n)]

num = 1
for i in range(n):
    for j in range(n):
        square[j][i] = num
        num += 1

for s in square:
    for si in s:
        print(si, end=' ')
    print()
