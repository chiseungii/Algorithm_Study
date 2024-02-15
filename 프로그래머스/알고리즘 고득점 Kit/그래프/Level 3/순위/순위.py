def solution(n, results):
    win = [set() for i in range(n+1)]
    lose = [set() for i in range(n+1)]

    for w,l in results:
        win[w].add(l)
        for wi in win[l]:
            win[w].add(wi)
            lose[wi].add(w)
            for li in lose[w]:
                lose[wi].add(li)

        lose[l].add(w)
        for li in lose[w]:
            lose[l].add(li)
            win[li].add(l)
            for wi in win[l]:
                win[li].add(wi)

    cnt = 0
    for i in range(1, n+1):
        if len(win[i])+len(lose[i]) == n-1: cnt += 1

    return cnt
