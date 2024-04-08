n = int(input())

dir = 1
for i in range(n):
    if dir == 1:
        for j in range(1, n+1):
            print(j, end=' ')
        print()
    else:
        for j in range(n, -1, -1):
            print(j, end=' ')
        print()
    dir = -dir
