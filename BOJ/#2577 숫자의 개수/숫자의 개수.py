A = int(input())
A *= int(input())
A *= int(input())

cnt = [0 for i in range(10)]
while A > 0:
    cnt[A%10] += 1
    A //= 10

for c in cnt: print(c)
