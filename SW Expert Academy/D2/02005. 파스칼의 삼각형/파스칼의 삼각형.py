for tc in range(int(input())):
    N = int(input())
    nums = [[0 for i in range(N)] for i in range(N)]

    print("#%d"%(tc+1))

    nums[0][0] = 1
    for i in range(1, N):
        nums[i][0] = nums[i][i] = 1
        for j in range(1, i):
            nums[i][j] = nums[i-1][j-1]+nums[i-1][j]

    for i in range(N):
        for j in range(i+1):
            print(nums[i][j], end=' ')
        print()
