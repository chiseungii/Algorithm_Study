for tc in range(int(input())):
    N = int(input())
    nums = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    nums = sorted(nums)
    for n in nums: print(n, end=' ')
    print()
