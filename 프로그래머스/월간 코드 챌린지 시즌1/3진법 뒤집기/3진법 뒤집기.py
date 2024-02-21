def solution(n):
    three = 0
    while n > 0:
        three = three*10 + n%3
        n //= 3

    answer,base = 0,1
    while three > 0:
        answer += ((three%10)*base)
        three //= 10
        base *= 3

    return answer
