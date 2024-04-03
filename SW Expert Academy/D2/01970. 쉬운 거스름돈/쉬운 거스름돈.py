money = [50000, 10000, 5000, 1000, 500, 100, 50, 10]
for tc in range(int(input())):
    N = int(input())

    print("#%d"%(tc+1))

    for m in money:
        print(N//m, end=' ')
        N %= m
    print()
