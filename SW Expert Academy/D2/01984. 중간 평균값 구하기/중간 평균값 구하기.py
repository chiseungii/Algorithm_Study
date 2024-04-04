for tc in range(int(input())):
    nums = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    nums = sorted(nums)
    print(int(sum(nums[1:-1])/8+0.5))
