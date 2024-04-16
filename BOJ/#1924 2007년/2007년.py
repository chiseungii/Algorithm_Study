days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]
yo = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]

x,y = map(int, input().split())

day = 0
for i in range(1, x): day += days[i-1]
day += y

print(yo[(day-1)%7])
