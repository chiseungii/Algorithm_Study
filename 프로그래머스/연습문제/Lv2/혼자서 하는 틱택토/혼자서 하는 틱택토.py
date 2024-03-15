def solution(board):
    cntO,cntX = 0,0
    for i in range(len(board)):
        cntO += board[i].count('O')
        cntX += board[i].count('X')

    if cntO!=cntX and cntO!=cntX+1: return 0

    winO,winX = False,False
    for i in range(3):
        if board[i][0]==board[i][1] and board[i][0]==board[i][2]:
            if board[i][0] == 'O': winO = True
            elif board[i][0] == 'X': winX = True

        if board[0][i]==board[1][i] and board[0][i]==board[2][i]:
            if board[0][i] == 'O': winO = True
            elif board[0][i] == 'X': winX = True

    if board[0][0]==board[1][1] and board[2][2]==board[0][0]:
        if board[0][0] == 'O': winO = True
        elif board[0][0] == 'X': winX = True
    if board[0][2]==board[1][1] and board[0][2]==board[2][0]:
        if board[0][2] == 'X': winX = True
        elif board[0][2] == 'O': winO = True

    if winX and winO: return 0
    if winO and cntO==cntX: return 0
    if winX and cntO==cntX+1: return 0

    return 1
