def solution(n, roads, sources, destination):
    INF = 1000000

    graph = [[] for i in range(n+1)]
    for a,b in roads:
        graph[a].append(b)
        graph[b].append(a)

    dist = [INF for i in range(n+1)]
    visit = [False for i in range(n+1)]
    dist[destination] = 0

    q = [destination]
    idx = 0

    while idx < len(q):
        now = q[idx]
        idx += 1
        visit[now] = True

        for node in graph[now]:
            if not visit[node]:
                q.append(node)
                dist[node] = min(dist[now]+1, dist[node])

    answer = []
    for source in sources:
        if dist[source] == INF: answer.append(-1)
        else: answer.append(dist[source])

    return answer
