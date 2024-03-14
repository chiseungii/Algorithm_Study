def BFS(maps, start, end):
    visit = [[-1 for i in range(len(maps[0]))] for i in range(len(maps))]
    q = [[start[0], start[1]]]
    visit[start[0]][start[1]] = 0

    di = [-1, 0, 1, 0]
    dj = [0, 1, 0, -1]

    while len(q) > 0:
        tmp_i = q[0][0]
        tmp_j = q[0][1]
        q.pop(0)

        if tmp_i==end[0] and tmp_j==end[1]:
            return visit[tmp_i][tmp_j]
        
        for i in range(4):
            move_i = tmp_i+di[i]
            move_j = tmp_j+dj[i]

            if move_i<0 or move_i>=len(maps): continue
            if move_j<0 or move_j>=len(maps[0]): continue

            if visit[move_i][move_j]==-1 and maps[move_i][move_j]!='X':
                q.append([move_i, move_j])
                visit[move_i][move_j] = visit[tmp_i][tmp_j]+1

    return visit[end[0]][end[1]]

def solution(maps):
    start,lever,exit = [],[],[]
    for i in range(len(maps)):
        for j in range(len(maps[0])):
            if maps[i][j] == 'S':
                start.append(i)
                start.append(j)
            elif maps[i][j] == 'L':
                lever.append(i)
                lever.append(j)
            elif maps[i][j] == 'E':
                exit.append(i)
                exit.append(j)

    toLever = BFS(maps, start, lever)
    toExit = BFS(maps, lever, exit)

    if toLever==-1 or toExit==-1: return -1
    else: return toLever+toExit
