visit = []
verticals = []
m = {}
numbers = {}

def BFS(n, i, j):
    global visit, verticals, m, numbers

    q = [[i, j]]
    visit[i][j] = n
    numbers[j].add(n)
    cnt = 1

    di = [-1, 0, 1, 0]
    dj = [0, 1, 0, -1]

    while len(q) > 0:
        tmp_i,tmp_j = q[0][0],q[0][1]
        q.pop(0)

        for i in range(4):
            move_i,move_j = tmp_i+di[i],tmp_j+dj[i]

            if move_i<0 or move_i>=len(visit): continue
            if move_j<0 or move_j>=len(visit[0]): continue

            if visit[move_i][move_j] == 1:
                q.append([move_i, move_j])
                visit[move_i][move_j] = n
                numbers[move_j].add(n)
                cnt += 1

    m[n] = cnt
    return

def solution(land):
    global visit, verticals, m, numbers

    visit = land.copy()
    for i in range(len(land[0])):
        numbers[i] = set()
    n = 2

    for i in range(len(land)):
        for j in range(len(land[0])):
            if visit[i][j] == 1:
                BFS(n, i, j)
                n += 1

    verticals = [0 for i in range(len(land[0]))]
    for i in range(len(land[0])):
        for num in numbers[i]:
            verticals[i] += m[num]

    return max(verticals)
