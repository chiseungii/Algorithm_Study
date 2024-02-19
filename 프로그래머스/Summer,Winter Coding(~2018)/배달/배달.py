def solution(N, road, K):
    INF = 600000
    graph = [[0 for i in range(N+1)] for i in range(N+1)]

    for r0,r1,r2 in road:
        if not graph[r0][r1]: graph[r0][r1]=graph[r1][r0]=r2
        elif r2 < graph[r0][r1]: graph[r0][r1]=graph[r1][r0]=r2

    weights = [INF for i in range(N+1)]
    visit = [False for i in range(N+1)]
    weights[1]=0; visit[1]=True
    cnt=1; now=1

    while cnt < N:
        for i in range(2, N+1):
            if visit[i]: continue
            if graph[now][i]>0 and weights[now]+graph[now][i]<weights[i]:
                weights[i] = weights[now]+graph[now][i]

        min_weight=INF; min_vill=-1
        for i in range(2, N+1):
            if not visit[i] and weights[i]<min_weight:
                min_weight = weights[i]
                min_vill = i

        if min_vill == -1: break

        visit[min_vill] = True
        now = min_vill
        cnt += 1

    answer = 0
    for i in range(1, N+1):
        if weights[i] <= K: answer += 1

    return answer
