def solution(n, stations, w):
    non_connects = []
    apt = 1

    for s in stations:
        tmp = s-w-apt
        if tmp > 0: non_connects.append(tmp)
        apt = s+w+1
    if apt <= n: non_connects.append(n+1-apt)

    cnt=0; wifi=w*2+1
    for n in non_connects:
        cnt += n//wifi
        if n%wifi != 0: cnt += 1

    return cnt
