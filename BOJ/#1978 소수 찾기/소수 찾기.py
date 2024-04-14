SIZE = 1001

isPrime = [True for i in range(SIZE)]
isPrime[1] = False

for i in range(4, SIZE, 2): isPrime[i] = False
for i in range(3, SIZE, 2):
    if isPrime[i]:
        for j in range(i*2, SIZE, i):
            isPrime[j] = False

N = int(input())
nums = list(map(int, input().split()))

cnt = 0
for n in nums:
    if isPrime[n]: cnt += 1

print(cnt)
