def solution(n):
    a = int(n**0.5)
    if a*a == n: return (a+1)**2
    else: return -1
