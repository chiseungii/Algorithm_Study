def solution(routes):
    routes = sorted(routes, key=lambda x:x[1])

    cam=-300001; cnt=0
    for a,b in routes:
        if cam < a:
            cam = b
            cnt += 1

    return cnt
