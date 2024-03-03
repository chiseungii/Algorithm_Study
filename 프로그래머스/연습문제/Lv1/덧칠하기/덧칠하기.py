def solution(n, m, section):
    painted = [True for i in range(n)]
    for s in section: painted[s-1] = False

    cnt = 0
    for i in range(len(painted)):
        if not painted[i]:
            cnt += 1
            for j in range(m):
                if j+i >= len(painted): break
                painted[i+j] = True

    return cnt
