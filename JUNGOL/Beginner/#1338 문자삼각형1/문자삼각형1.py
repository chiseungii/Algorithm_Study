N = int(input())
tri = [[0 for i in range(N)] for i in range(N)]

c = ord('A')
for i in range(N):
    for j in range(1, N-i+1):
        tri[i+j-1][N-j] = c
        c += 1
        if c > ord('Z'): c = ord('A')

for t in tri:
    for ti in t:
        print(chr(ti), end=' ')
    print()
