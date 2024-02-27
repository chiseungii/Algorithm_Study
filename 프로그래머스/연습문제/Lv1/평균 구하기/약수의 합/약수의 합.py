def solution(n):
    if n == 0: return 0
    if n == 1: return 1

    answer = n+1
    for i in range(2, n):
        if n%i == 0: answer += i

    return answer
