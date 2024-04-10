def main():
    MAX_NUM = 10000

    isPrime = [True for i in range(MAX_NUM+1)]
    isPrime[1] = False

    for i in range(4, MAX_NUM+1, 2): isPrime[i] = False
    for i in range(3, MAX_NUM+1, 2):
        if isPrime[i]:
            for j in range(i*2, MAX_NUM+1, i):
                isPrime[j] = False

    m = int(input())
    n = int(input())
    min_prime,sum = MAX_NUM,0
    for i in range(n, m-1, -1):
        if isPrime[i]:
            min_prime = i
            sum += i

    if sum == 0: print(-1)
    else: print(sum, min_prime, sep='\n')

main()
