N = int(input())

answer = 0
while N > 0:
    answer += N%10
    N //= 10

print(answer)
