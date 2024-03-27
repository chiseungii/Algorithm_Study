def solution(friends, gifts):
    n = len(friends)

    m = {}
    for i in range(n):
        m[friends[i]] = i

    given = [[0 for i in range(n)] for i in range(n)]
    for gift in gifts:
        a,b = gift.split()
        given[m[a]][m[b]] += 1

    scores = [0 for i in range(n)]
    for i in range(n):
        for j in range(n):
            if given[i][j]:
                scores[i] += given[i][j]
                scores[j] -= given[i][j]

    cnt = [0 for i in range(n)]
    for i in range(n-1):
        for j in range(i+1, n):
            a,b = given[i][j], given[j][i]
            if a == b:
                if scores[i] > scores[j]: cnt[i] += 1
                elif scores[i] < scores[j]: cnt[j] += 1
            else:
                if a > b: cnt[i] += 1
                else: cnt[j] += 1

    return max(cnt)
