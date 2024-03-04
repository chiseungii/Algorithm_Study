def solution(park, routes):
    x,y = -1,-1
    for i in range(len(park)):
        for j in range(len(park[0])):
            if park[i][j] == 'S':
                x,y = i,j
                break

        if x != -1: break

    for route in routes:
        op = route[0]
        dist = int(route[2])

        if op == 'E':
            if y+dist >= len(park[0]): continue
            else:
                flag = True
                for i in range(1, dist+1):
                    if park[x][y+i] == 'X':
                        flag = False
                        break

                if flag: y += dist
        elif op == 'W':
            if y-dist < 0: continue
            else:
                flag = True
                for i in range(1, dist+1):
                    if park[x][y-i] == 'X':
                        flag = False
                        break

                if flag: y -= dist
        elif op == 'N':
            if x-dist < 0: continue
            else:
                flag = True
                for i in range(1, dist+1):
                    if park[x-i][y] == 'X':
                        flag = False
                        break
                
                if flag: x -= dist
        else:
            if x+dist >= len(park): continue
            else:
                flag = True
                for i in range(1, dist+1):
                    if park[x+i][y] == 'X':
                        flag = False
                        break

                if flag: x += dist

    return [x, y]
