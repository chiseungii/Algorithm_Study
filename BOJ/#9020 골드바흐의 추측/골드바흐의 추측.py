SIZE = 10000

isPrime = [True for i in range(SIZE)]
isPrime[1] = False

for i in range(3, SIZE):
    if i%2 == 0: isPrime[i] = False
    elif isPrime[i]:
        for j in range(i*2, SIZE, i): isPrime[j] = False

for tc in range(int(input())):
    n = int(input())

    for i in range(n//2, 1, -1):
        if isPrime[i] and isPrime[n-i]:
            print(i, n-i)
            break
