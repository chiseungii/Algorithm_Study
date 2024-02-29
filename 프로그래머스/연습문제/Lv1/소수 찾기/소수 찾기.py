def solution(n):
    primes = [True for i in range(n+1)]
    primes[0] = primes[1] = False

    for i in range(2, n+1):
        if not primes[i]: continue
        for j in range(i*2, n+1, i):
            primes[j] = False

    return primes.count(True)
