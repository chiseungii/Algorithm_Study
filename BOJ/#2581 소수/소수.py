M = int(input())
N = int(input())

isPrime = [True for i in range(N+1)]
isPrime[1] = False

for i in range(3, N+1):
    if i%2 == 0: isPrime[i] = False
    elif isPrime[i]:
        for j in range(i*2, N+1, i): isPrime[j] = False

sum = 0
for i in range(N, M-1, -1):
    if isPrime[i]:
        sum += i
        minPrime = i

if sum == 0: print(-1)
else: print(sum, minPrime, sep='\n')
