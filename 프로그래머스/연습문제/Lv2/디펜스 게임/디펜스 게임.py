def solution(n, k, enemy):
    left,right = 0,len(enemy)
    answer = 0
    while left <= right:
        mid = (left+right)//2

        v = sorted(enemy[:mid], reverse=True)

        if k >= len(v):
            answer = mid
            left = mid+1
        elif n >= sum(v[k:]):
            answer = mid
            left = mid+1
        else:
            right = mid-1

    return answer
