def solution(n):
    cnt = 1
    for i in range(1, n):
        sum = i
        for j in range(i+1, n):
            sum += j
            if sum >= n: break

        if sum == n: cnt += 1

    return cnt
