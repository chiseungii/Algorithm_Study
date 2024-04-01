for tc in range(int(input())):
    print("#%d"%(tc+1), end=' ')

    N = int(input())
    num = N
    count = [False for i in range(10)]
    while True:
        tmp = N
        while tmp > 0:
            count[tmp%10] = True
            tmp //= 10

        flag = True
        for i in range(10):
            if not count[i]:
                flag = False
                break

        if flag:
            print(N)
            break
        else: N += num
