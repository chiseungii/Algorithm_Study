def solution(n, computers):
    visit = [False for i in range(n)]

    cnt = 0
    for i in range(n):
        if visit[i]: continue

        q = [i]
        visit[i] = True
        while len(q) > 0:
            tmp = q[0]
            q.pop(0)

            for j in range(n):
                if not visit[j] and computers[tmp][j]:
                    q.append(j)
                    visit[j] = True

        cnt += 1

    return cnt
