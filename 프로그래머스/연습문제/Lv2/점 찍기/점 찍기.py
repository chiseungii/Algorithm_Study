def solution(k, d):
    cnt = 0
    i = 0
    while True:
        if i**2 > d**2: break

        j = (d**2-i**2)**0.5
        cnt += (j//k+1)

        i += k

    return cnt
