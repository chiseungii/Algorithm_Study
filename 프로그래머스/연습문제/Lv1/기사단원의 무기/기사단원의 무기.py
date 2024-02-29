def solution(number, limit, power):
    div = [2 for i in range(number+1)]
    div[1] = 1

    for i in range(2, number+1):
        for j in range(i*2, number+1, i):
            div[j] += 1

    answer = 0
    for i in range(1, number+1):
        if div[i] > limit: answer += power
        else: answer += div[i]

    return answer
