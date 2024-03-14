def solution(picks, minerals):
    tools = []
    for i in range(len(picks)):
        for j in range(picks[i]):
            tools.append(i)

    mines = []
    v = [0, 0, 0]
    for i in range(len(minerals)):
        if minerals[i] == "diamond": v[0] += 1
        elif minerals[i] == "iron": v[1] += 1
        else: v[2] += 1

        if (i+1)%5==0 or i==len(minerals)-1:
            mines.append(v)
            v = [0, 0, 0]

        if len(mines) == len(tools): break

    mines = sorted(mines, key=lambda x:(-x[0], -x[1], -x[2]))

    cnt,idx = 0,0
    for mine in mines:
        if tools[idx] == 0:
            cnt += (mine[0]+mine[1]+mine[2])
        elif tools[idx] == 1:
            cnt += (mine[0]*5+mine[1]+mine[2])
        else:
            cnt += (mine[0]*25+mine[1]*5+mine[2])

        idx += 1
        if idx >= len(tools): break

    return cnt
