N,M = map(int, input().split())
matrix = [[0 for i in range(M)] for i in range(N)]

for i in range(2):
    for j in range(N):
        v = list(map(int, input().split()))
        for k in range(M):
            matrix[j][k] += v[k]

for mat in matrix:
    for m in mat: print(m, end=' ')
    print()
