def solution(grid):
    # visit[i][j][k]: (i, j)에서 k방향으로 간 적이 있는지
    visit = [[[False for i in range(4)] 
              for i in range(len(grid[0]))] for i in range(len(grid))]
    
    # dir: 0(상)1(우)2(하)3(좌)
    answer = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            for k in range(4):
                if not visit[i][j][k]:
                    visit[i][j][k] = True
                    cnt=0; x,y=i,j; dir=k

                    while True:
                        cnt += 1

                        # 좌표 움직이기
                        if dir == 0: x -= 1
                        elif dir == 1: y += 1
                        elif dir == 2: x += 1
                        else: y -= 1

                        # 범위 벗어났는지 체크
                        if x < 0: x = len(grid)-1
                        elif x >= len(grid): x = 0

                        if y < 0: y = len(grid[0])-1
                        elif y >= len(grid[0]): y = 0

                        # 다음 방향 계산
                        if grid[x][y] == 'L':
                            dir -= 1
                            if dir < 0: dir += 4
                        elif grid[x][y] == 'R':
                            dir += 1
                            dir %= 4

                        # 방문 체크
                        if visit[x][y][dir]: break
                        else: visit[x][y][dir] = True
                    
                    answer.append(cnt)

    return sorted(answer)
