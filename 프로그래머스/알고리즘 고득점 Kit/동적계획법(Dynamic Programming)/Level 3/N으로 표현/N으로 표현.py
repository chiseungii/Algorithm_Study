def solution(N, number):
    if N == number: return 1

    nums = [set() for i in range(9)]
    nums[1].add(N)

    for i in range(2, 9):
        tmp = 0
        for j in range(i):
            tmp = tmp*10+N
        if tmp == number: return i
        else: nums[i].add(tmp)

        for j in range(1, i//2+1):
            for n_1 in nums[j]:
                k = i-j
                for n_2 in nums[k]:
                    nums[i].add(n_1+n_2)
                    nums[i].add(n_1*n_2)
                    if n_1 != n_2: nums[i].add(abs(n_1-n_2))
                    if n_1 >= n_2: nums[i].add(n_1//n_2)
                    else: nums[i].add(n_2//n_1)

        if number in nums[i]: return i

    return -1
