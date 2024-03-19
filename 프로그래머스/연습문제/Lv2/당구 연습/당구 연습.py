def solution(m, n, startX, startY, balls):
    answer = []
    for ball in balls:
        min_dist = 500000000
        
        if ball[1] == startY:
            if startX < ball[0]:
                dist = startX+ball[0]
                min_dist = min(min_dist, dist**2)
            else:
                dist = (m-startX) + (m-ball[0])
                min_dist = min(min_dist, dist**2)
        else:
            tmpX = -ball[0]
            dist = abs(startY-ball[1])**2 + abs(startX-tmpX)**2
            min_dist = min(min_dist, dist)

            tmpX = m + (m-ball[0])
            dist = abs(startY-ball[1])**2 + abs(startX-tmpX)**2
            min_dist = min(min_dist, dist)

        if startX == ball[0]:
            if startY < ball[1]:
                dist = startY + ball[1]
                min_dist = min(min_dist, dist**2)
            else:
                dist = (n-startY) + (n-ball[1])
                min_dist = min(min_dist, dist**2)
        else:
            tmpY = -ball[1]
            dist = abs(startY-tmpY)**2 + abs(startX-ball[0])**2
            min_dist = min(min_dist, dist)

            tmpY = n + (n-ball[1])
            dist = abs(startY-tmpY)**2 + abs(startX-ball[0])**2
            min_dist = min(min_dist, dist)

        answer.append(min_dist)

    return answer
