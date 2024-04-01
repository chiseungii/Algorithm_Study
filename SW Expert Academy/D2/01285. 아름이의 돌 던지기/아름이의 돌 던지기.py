for tc in range(int(input())):
    N = int(input())
    pos = list(map(int, input().split()))
    for i in range(N):
        if pos[i] < 0: pos[i] *= -1

    print("#%d"%(tc+1), end=' ')

    pos = sorted(pos)
    print("%d %d"%(pos[0], pos.count(pos[0])))
