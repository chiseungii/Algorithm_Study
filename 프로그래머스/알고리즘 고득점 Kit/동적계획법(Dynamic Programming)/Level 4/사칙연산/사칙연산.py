def solution(arr):
    nums = [int(i) for i in arr if i.isdigit()]
    ops = [i for i in arr if not i.isdigit()]

    min_DP = [[0 for i in range(len(nums))] for i in range(len(nums))]
    max_DP = [[0 for i in range(len(nums))] for i in range(len(nums))]
    for i in range(len(nums)):
        min_DP[i][i] = max_DP[i][i] = nums[i]

    for i in range(1, len(nums)):
        for j in range(len(nums)-i):
            max_num=-1010001; min_num=1010001
            for k in range(j, j+i):
                if ops[k] == '+':
                    tmp_1 = max_DP[j][k]+max_DP[k+1][j+i]
                    tmp_2 = min_DP[j][k]+min_DP[k+1][j+i]
                else:
                    tmp_1 = max_DP[j][k]-min_DP[k+1][j+i]
                    tmp_2 = min_DP[j][k]-max_DP[k+1][j+i]

                max_num = max(tmp_1, max_num)
                min_num = min(tmp_2, min_num)

            max_DP[j][j+i] = max_num
            min_DP[j][j+i] = min_num

    return max_DP[0][len(nums)-1]
