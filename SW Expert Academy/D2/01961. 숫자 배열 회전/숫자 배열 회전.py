for tc in range(int(input())):
    N = int(input())
    nums = []
    for i in range(N):
        nums.append(list(map(int, input().split())))

    print("#%d"%(tc+1))

    for i in range(N):
        for j in range(N): print(nums[N-j-1][i], end='')
        print(end=' ')

        for j in range(N): print(nums[N-i-1][N-j-1], end='')
        print(end=' ')

        for j in range(N): print(nums[j][N-i-1], end='')
        print()
