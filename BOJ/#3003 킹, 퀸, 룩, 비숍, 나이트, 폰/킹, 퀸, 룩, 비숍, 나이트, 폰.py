right = [1, 1, 2, 2, 2, 8]
cnt = list(map(int, input().split()))

for i in range(6):
    print(right[i]-cnt[i], end=' ')
