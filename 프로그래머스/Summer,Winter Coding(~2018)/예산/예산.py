def solution(d, budget):
    d = sorted(d)

    cnt = 0
    for di in d:
        if budget < di: break

        cnt += 1
        budget -= di

    return cnt
