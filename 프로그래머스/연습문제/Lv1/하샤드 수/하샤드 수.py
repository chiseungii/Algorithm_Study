def solution(x):
    sum,n_x = 0,x
    while n_x > 0:
        sum += (n_x%10)
        n_x //= 10

    return x%sum == 0
