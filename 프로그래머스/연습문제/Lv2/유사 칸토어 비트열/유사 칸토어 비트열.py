def recursive(n, l):
    if n == 1:
        if l < 2: return l+1
        else: return l

    five = 5**(n-1)
    a = l//five

    four = 4**(n-1)
    b = l%five

    if a < 2: return four*a+recursive(n-1, b)
    elif a == 2: return four*a
    else: return four*(a-1)+recursive(n-1, b)

def solution(n, l, r):
    return recursive(n, r-1) - recursive(n, l-2)
