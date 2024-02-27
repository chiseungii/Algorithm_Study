def solution(n, m, x, y, queries):
    start = [x, y]
    end = [x, y]

    for i in range(len(queries)-1, -1, -1):
        dir,dist = queries[i][0],queries[i][1]

        if dir == 0:
            if start[1] != 0: start[1] += dist

            end[1] += dist
            if end[1] >= m: end[1] = m-1
        elif dir == 1:
            start[1] -= dist
            if start[1] < 0: start[1] = 0

            if end[1] != m-1: end[1] -= dist
        elif dir == 2:
            if start[0] != 0: start[0] += dist
            
            end[0] += dist
            if end[0] >= n: end[0] = n-1
        else:
            start[0] -= dist
            if start[0] < 0: start[0] = 0
            
            if end[0] != n-1: end[0] -= dist

        if start[0]>=n or end[0]<0 or start[1]>=m or end[1]<0:
            return 0
        
    return (end[0]-start[0]+1)*(end[1]-start[1]+1)
