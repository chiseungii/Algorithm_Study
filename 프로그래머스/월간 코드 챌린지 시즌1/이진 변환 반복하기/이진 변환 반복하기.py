def toBin(n):
    str = ""
    while n > 0:
        if n%2 == 1: str = '1'+str
        else: str = '0'+str
        n //= 2

    return str

def solution(s):
    cnt,cnt_zero = 0,0
    while s != '1':
        l = len(s)
        for i in range(len(s)):
            if s[i] == '0':
                cnt_zero += 1
                l -= 1

        s = toBin(l)
        cnt += 1

    return [cnt, cnt_zero]
