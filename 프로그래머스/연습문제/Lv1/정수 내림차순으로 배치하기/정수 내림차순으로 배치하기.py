def solution(n):
    v = [i for i in str(n)]
    v = sorted(v, reverse=True)

    answer = 0
    for i in v:
        answer = answer*10+int(i)

    return answer
