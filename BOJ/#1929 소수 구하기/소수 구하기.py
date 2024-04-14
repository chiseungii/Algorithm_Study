M,N = map(int, input().split())

isPrime = [True for i in range(N+1)]
isPrime[1] = False

for i in range(4, N+1, 2): isPrime[i] = False
for i in range(3, N+1, 2):
    if isPrime[i]:
        for j in range(i*2, N+1, i): isPrime[j] = False

for i in range(M, N+1):
    if isPrime[i]: print(i)
