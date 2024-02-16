def solution(dirs):
    m = {}
    for i in range(12):
        for j in range(12):
            m[(i, j)] = [0, 0, 0, 0]

    x,y,cnt = 5,5,0
    for dir in dirs:
        if dir=='U' and y<10:
            if m[(x, y)][0] == 0: cnt += 1
            m[(x, y)][0] = 1
            m[(x, y+1)][1] = 1
            y += 1
        elif dir=='D' and y>0:
            if m[(x, y)][1] == 0: cnt += 1
            m[(x, y)][1] = 1
            m[(x, y-1)][0] = 1
            y -= 1
        elif dir=='R' and x<10:
            if m[(x, y)][3] == 0: cnt += 1
            m[(x, y)][3] = 1
            m[(x+1, y)][2] = 1
            x += 1
        elif dir=='L' and x>0:
            if m[(x, y)][2] == 0: cnt += 1
            m[(x, y)][2] = 1
            m[(x-1, y)][3] = 1
            x -= 1

    return cnt
