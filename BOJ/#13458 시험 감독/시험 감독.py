N = int(input())
students = list(map(int, input().split()))
B,C = map(int, input().split())

cnt = N
for i in range(N):
    students[i] -= B
    if students[i] < 0: students[i] = 0

    cnt += students[i]//C
    if students[i]%C != 0: cnt += 1

print(cnt)
