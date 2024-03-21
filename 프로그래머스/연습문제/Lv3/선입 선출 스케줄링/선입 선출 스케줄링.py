def solution(n, cores):
    if n <= len(cores): return n

    left,right = 0,max(cores)*n
    answer = 0

    while left <= right:
        mid = (left+right)//2

        cnt = len(cores)
        for core in cores:
            cnt += mid//core

        if cnt >= n:
            answer = mid
            right = mid-1
        else: left = mid+1

    n -= len(cores)
    for c in cores: n -= (answer-1)//c

    for i in range(len(cores)):
        if answer%cores[i] == 0: n -= 1
        if n == 0: return i+1
