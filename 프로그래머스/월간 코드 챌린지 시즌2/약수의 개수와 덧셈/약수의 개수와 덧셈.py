from math import sqrt

def solution(left, right):
    answer = 0
    for i in range(left, right+1):
        sq = int(sqrt(i))
        if sq**2 == i: answer -= i
        else: answer += i

    return answer
