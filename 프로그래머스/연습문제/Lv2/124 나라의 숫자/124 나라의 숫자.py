def solution(n):
    three = ""
    if n%3 == 0: tmp = n-1
    else: tmp = n
    base = [4, 1, 2]

    while tmp > 0:
        a = tmp%3
        three = str(base[a])+three
        tmp //= 3
        if a == 0: tmp -= 1

    if n%3 ==0: three = three[:-1]+'4'
    return three
