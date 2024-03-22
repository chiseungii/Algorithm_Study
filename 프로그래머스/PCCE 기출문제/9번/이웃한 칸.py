def solution(board, h, w):
    di = [-1, 0, 1, 0]
    dj = [0, 1, 0, -1]

    answer = 0
    for i in range(4):
        tmp_h = h+di[i]
        tmp_w = w+dj[i]

        if tmp_h<0 or tmp_h>=len(board): continue
        if tmp_w<0 or tmp_w>=len(board): continue

        if board[tmp_h][tmp_w] == board[h][w]: answer += 1

    return answer
