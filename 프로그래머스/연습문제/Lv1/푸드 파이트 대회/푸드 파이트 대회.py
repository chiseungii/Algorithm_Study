def solution(food):
    left,right = "",""
    for i in range(1, len(food)):
        s = (str(i))*(food[i]//2)
        left += s
        right = s+right

    return left+'0'+right
