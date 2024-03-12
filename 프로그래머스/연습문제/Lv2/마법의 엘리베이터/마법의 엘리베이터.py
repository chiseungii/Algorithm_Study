def solution(storey):
    cnt = 0
    while storey > 5:
        n = storey%10

        if n > 5:
            cnt += (10-n)
            storey += (10-n)
        elif n == 5:
            if (storey%100)//10 >= 5:
                cnt += (10-n)
                storey += (10-n)
            else:
                cnt += n
                storey -= n
        else:
            cnt += n
            storey -= n

        storey //= 10

    return cnt+storey
