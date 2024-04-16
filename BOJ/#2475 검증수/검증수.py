answer = 0
for n in list(map(int, input().split())):
    answer += n**2

print(answer%10)
