SIZE = 246913

isPrime = [True for i in range(SIZE)]
isPrime[1] = False

for i in range(3, SIZE):
    if i%2 == 0: isPrime[i] = False
    elif isPrime[i]:
        for j in range(i*2, SIZE, i): isPrime[j] = False

while True:
    n = int(input())
    if n == 0: break

    cnt = 0
    for i in range(n+1, n*2+1):
        if isPrime[i]: cnt += 1

    print(cnt)
