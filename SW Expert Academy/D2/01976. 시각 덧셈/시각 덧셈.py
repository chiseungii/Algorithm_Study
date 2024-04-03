for tc in range(int(input())):
    t = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    t[1] += t[3]
    if t[1] >= 60:
        t[1] -= 60
        t[0] += 1

    t[0] += t[2]
    if t[0] > 12: t[0] -= 12

    print("%d %d"%(t[0], t[1]))
