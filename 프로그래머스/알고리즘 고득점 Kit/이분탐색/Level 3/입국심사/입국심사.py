def solution(n, times):
    right = max(times)*n
    left = 0

    while left <= right:
        mid = (right+left)//2

        people = 0
        for time in times: people += (mid//time)

        if people >= n:
            answer = mid
            right = mid-1
        else: left = mid+1

    return answer
