def solution(a, b):
    days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30]
    answer = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"]

    cnt = 0
    for i in range(a-1):
        cnt += days[i]
    cnt = cnt+b-1

    return answer[cnt%7]
