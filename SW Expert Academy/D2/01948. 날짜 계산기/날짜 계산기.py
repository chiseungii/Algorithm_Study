for tc in range(int(input())):
    days = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    plus = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]
    sum = 0
    for i in range(days[0], days[2]):
        sum += plus[i-1]
    sum += (days[3]-days[1]+1)

    print(sum)
