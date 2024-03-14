def BFS(board, start):
    visit = [[-1 for i in range(len(board[0]))] for i in range(len(board))]
    q = [[start[0], start[1]]]
    visit[start[0]][start[1]] = 0

    while len(q) > 0:
        tmp = q[0]
        q.pop(0)

        if board[tmp[0]][tmp[1]] == 'G':
            return visit[tmp[0]][tmp[1]]
        
        dist = visit[tmp[0]][tmp[1]]
        
        # 상, 좌
        move = [tmp[0], tmp[1]]
        while move[0]>=0 and board[move[0]][tmp[1]]!='D': move[0] -= 1
        while move[1]>=0 and board[tmp[0]][move[1]]!='D': move[1] -= 1
        move[0],move[1] = move[0]+1,move[1]+1

        if visit[move[0]][tmp[1]] == -1:
            q.append([move[0], tmp[1]])
            visit[move[0]][tmp[1]] = dist+1

        if visit[tmp[0]][move[1]] == -1:
            q.append([tmp[0], move[1]])
            visit[tmp[0]][move[1]] = dist+1

        # 하, 우
        move = [tmp[0], tmp[1]]
        while move[0]<len(board) and board[move[0]][tmp[1]]!='D': move[0] += 1
        while move[1]<len(board[0]) and board[tmp[0]][move[1]]!='D': move[1] += 1
        move[0],move[1] = move[0]-1,move[1]-1

        if visit[move[0]][tmp[1]] == -1:
            q.append([move[0], tmp[1]])
            visit[move[0]][tmp[1]] = dist+1

        if visit[tmp[0]][move[1]] == -1:
            q.append([tmp[0], move[1]])
            visit[tmp[0]][move[1]] = dist+1

    return -1

def solution(board):
    start = []
    for i in range(len(board)):
        if 'R' in board[i]:
            start.append(i)
            start.append(board[i].index('R'))
            break

    return BFS(board, start)
