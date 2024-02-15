def solution(distance, rocks, n):
    rocks = sorted(rocks)

    dists = [rocks[0]]
    for i in range(1, len(rocks)):
        dists.append(rocks[i]-rocks[i-1])
    dists.append(distance-rocks[-1])

    right=distance; left=0
    while left <= right:
        mid = (left+right)//2

        cnt=0; tmp_dist=0
        for dist in dists:
            tmp_dist += dist
            if tmp_dist < mid: cnt += 1
            else: tmp_dist = 0

        if cnt <= n:
            answer = mid
            left = mid+1
        else: right = mid-1

    return answer
