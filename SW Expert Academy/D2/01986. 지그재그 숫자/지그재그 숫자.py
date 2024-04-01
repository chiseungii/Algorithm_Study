for tc in range(int(input())):
    print("#%d"%(tc+1), end=' ')

    sum = 0
    for i in range(1, int(input())+1):
        if i%2 == 1: sum += i
        else: sum -= i

    print(sum)
