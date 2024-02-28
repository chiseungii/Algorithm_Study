def solution(num):
    if num == 1: return 0

    answer = 0
    for i in range(500):
        answer += 1
        if num%2 == 0: num //= 2
        else: num = num*3+1

        if num == 1: return answer

    return -1
