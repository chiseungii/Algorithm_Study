for tc in range(int(input())):
    nums = [int(n) for n in input().split()]
    sum = 0
    for n in nums:
        if n%2 == 1:
            sum += n

    print("#%d %d"%(tc+1, sum))
