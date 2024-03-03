def solution(s):
    cnt,idx = 0,0
    while idx < len(s):
        x = s[idx]
        cnt += 1
        xi,yi = 1,0

        idx += 1
        while idx<len(s) and xi!=yi:
            if s[idx] == x: xi += 1
            else: yi += 1
            idx += 1

    return cnt
