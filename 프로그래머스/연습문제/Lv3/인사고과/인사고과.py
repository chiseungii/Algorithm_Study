def solution(scores):
    won = scores[0]
    scores = sorted(scores, key=lambda x:(-x[0], x[1]))

    max_second = 0
    fail = [False for i in range(len(scores))]
    for i in range(len(scores)):
        if scores[i][0] == scores[0][0]:
            max_second = scores[i][1]
        else:
            if scores[i][1] < max_second:
                fail[i] = True
            elif scores[i][1] > max_second:
                max_second = scores[i][1]

    for i in range(len(scores)):
        if scores[i]==won and fail[i]: return -1

    sums = []
    for i in range(len(scores)):
        if not fail[i]: sums.append(scores[i][0]+scores[i][1])

    sums = sorted(sums, reverse=True)

    for i in range(len(sums)):
        if sums[i] == won[0]+won[1]: return i+1
