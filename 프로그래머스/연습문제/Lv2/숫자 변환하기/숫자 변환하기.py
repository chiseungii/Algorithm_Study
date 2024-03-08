def solution(x, y, n):
    if x == y: return 0

    saved_num = set()
    saved_num.add(x)

    cnt = 0
    while True:
        cnt += 1

        maked_num = set()
        for num in saved_num:
            a = num+n
            b = num*2
            c = num*3

            if a==y or b==y or c==y: return cnt
            else:
                if a < y: maked_num.add(a)
                if b < y: maked_num.add(b)
                if c < y: maked_num.add(c)

        saved_num = maked_num
        if len(saved_num) == 0: break

    return -1
