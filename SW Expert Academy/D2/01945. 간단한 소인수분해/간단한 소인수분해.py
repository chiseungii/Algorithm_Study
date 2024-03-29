for tc in range(int(input())):
    N = int(input())
    divisor = [2, 3, 5, 7, 11]

    print("#%d"%(tc+1), end=' ')
    for div in divisor:
        cnt = 0
        while N%div == 0:
            cnt += 1
            N //= div

        print(cnt, end=' ')
    print()
