def solution(wallpaper):
    start_i,start_j = 52,52
    end_i,end_j = 0,0

    for i in range(len(wallpaper)):
        for j in range(len(wallpaper[0])):
            if wallpaper[i][j] == '#':
                start_i = min(start_i, i)
                start_j = min(start_j, j)
                end_i = max(end_i, i)
                end_j = max(end_j, j)

    return [start_i, start_j, end_i+1, end_j+1]
