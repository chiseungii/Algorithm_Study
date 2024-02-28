def solution(t, p):
    cnt = 0
    for i in range(len(t)-len(p)+1):
        if t[i:i+len(p)] <= p: cnt += 1

    return cnt
