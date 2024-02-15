def solution(n, edge):
    graph = [[] for i in range(n+1)]
    for a,b in edge:
        graph[a].append(b)
        graph[b].append(a)

    visit = [0 for i in range(n+1)]
    q = [1]
    visit[1] = 0

    while len(q) > 0:
        tmp = q.pop(0)

        for i in graph[tmp]:
            if i!=1 and visit[i]==0:
                q.append(i)
                visit[i] = visit[tmp]+1

    max_dist = max(visit)
    return visit.count(max_dist)
