n,m = map(int, input().split())

num,dir = 1,1
for i in range(n):
    if dir == 1:
        for j in range(m):
            print(num, end=' ')
            num += 1
        print()
        dir = -dir
    else:
        for j in range(num+m-1, num-1, -1):
            print(j, end=' ')
        print()
        num += m
        dir = -dir
