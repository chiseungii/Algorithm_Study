def solution(maps):
    visit = [[0 for i in range(len(maps[0]))] for i in range(len(maps))]

    di=[-1, 0, 1, 0]; dj=[0, 1, 0, -1]
    visit[0][0] = 1
    q = [(0, 0)]

    while len(q):
        tmp_i = q[0][0]
        tmp_j = q[0][1]
        q.pop(0)

        for i in range(4):
            move_i = tmp_i+di[i]
            move_j = tmp_j+dj[i]

            if move_i<0 or move_i>=len(maps): continue
            if move_j<0 or move_j>=len(maps[0]): continue

            if maps[move_i][move_j]==1 and visit[move_i][move_j]==0:
                q.append([move_i, move_j])
                visit[move_i][move_j] = visit[tmp_i][tmp_j]+1

    if visit[-1][-1] > 0: return visit[-1][-1]
    else: return -1
