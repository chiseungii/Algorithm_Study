def solution(r1, r2):
    answer = 8+2*(r2-r1-1)

    r = 1
    while True:
        a = r1**2-r**2

        if a < 0:
            a = 1
            answer += 2
        else:
            sqrt_a = int(a**0.5)
            if sqrt_a**2 != a: sqrt_a += 1
            a = int(sqrt_a)
            
        b = int((r2**2-r**2)**0.5)

        if b == 0: break
        elif a == 0: a += 1

        answer += 4*(b-a+1)
        r += 1

    return answer-2
