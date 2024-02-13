def DFS(tickets, path, now, visit):
    if len(path) == (len(tickets)+1): return path

    flag = False
    for i in range(len(tickets)):
        if tickets[i][0]==now and not visit[i]:
            flag = True
            path.append(tickets[i][1])

            visit[i] = True
            v = DFS(tickets, path, tickets[i][1], visit)

            if len(v) == (len(tickets)+1): return v
            visit[i] = False
            path.pop(-1)

    if not flag: return []
    else: return path 

def solution(tickets):
    tickets = sorted(tickets, key=lambda x:(x[0], x[1]))
    print(tickets)
    visit = [False for i in range(len(tickets))]

    answer = []
    for i in range(len(tickets)):
        if tickets[i][0] == "ICN":
            visit[i] = True
            answer = DFS(tickets, ["ICN", tickets[i][1]], tickets[i][1], visit)

            if len(answer) == len(tickets)+1: return answer
            visit[i] = False

    return answer
