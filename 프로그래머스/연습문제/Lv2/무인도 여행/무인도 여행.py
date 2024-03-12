def BFS(maps, visit, i, j):
    q = [[i, j]]
    cnt = int(maps[i][j])
    visit[i][j] = True

    di = [-1, 0, 1, 0]
    dj = [0, 1, 0, -1]

    while len(q) > 0:
        tmp_i = q[0][0]
        tmp_j = q[0][1]
        q.pop(0)

        for i in range(4):
            move_i = tmp_i+di[i]
            move_j = tmp_j+dj[i]

            if move_i<0 or move_i>=len(maps): continue
            if move_j<0 or move_j>=len(maps[0]): continue

            if not visit[move_i][move_j] and maps[move_i][move_j]!='X':
                q.append([move_i, move_j])
                cnt += int(maps[move_i][move_j])
                visit[move_i][move_j] = True

    return cnt

def solution(maps):
    visit = [[False for i in range(len(maps[0]))] for i in range(len(maps))]
    answer = []
    for i in range(len(maps)):
        for j in range(len(maps[0])):
            if not visit[i][j] and maps[i][j]!='X':
                answer.append(BFS(maps, visit, i, j))

    if len(answer) == 0: answer.append(-1)
    answer = sorted(answer)

    return answer
