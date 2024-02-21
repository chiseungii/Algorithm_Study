def solution(n):
    snail = [[0 for i in range(n)] for i in range(n)]

    cnt,dir = n,0
    i,j,num = -1,0,1
    while cnt > 0:
        if dir == 0:
            for k in range(cnt):
                i += 1
                snail[i][j] = num
                num += 1
        elif dir == 1:
            for k in range(cnt):
                j += 1
                snail[i][j] = num
                num += 1
        else:
            for k in range(cnt):
                i-=1; j-=1
                snail[i][j] = num
                num += 1

        cnt-=1; dir+=1; dir%=3

    answer = []
    for i in range(n):
        for j in range(i+1):
            answer.append(snail[i][j])

    return answer
