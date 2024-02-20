def solution(land, P, Q):
    min_land,max_land = land[0][0],land[0][0]
    for landi in land:
        for l in landi:
            max_land = max(max_land, l)
            min_land = min(min_land, l)

    answer = 100000000001
    while min_land <= max_land:
        mid = (min_land+max_land)//2

        plus,minus = 0,0
        plus_2,minus_2 = 0,0
        for li in land:
            for l in li:
                if l > mid: minus += (l-mid)
                else: plus += (mid-l)

                if l > mid+1: minus_2 += (l-mid-1)
                else: plus_2 += (mid+1-l)

        cost = plus*P + minus*Q
        cost_2 = plus_2*P + minus_2*Q

        if cost_2 < cost:
            if cost_2 < answer: answer = cost_2
            min_land = mid+2
        else:
            if cost < answer: answer = cost
            max_land = mid-1

    return answer
