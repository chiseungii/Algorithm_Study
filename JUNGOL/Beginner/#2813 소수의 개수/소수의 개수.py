def main():
    MAX_NUM = 3000000

    isPrime = [True for i in range(MAX_NUM+1)]
    isPrime[1] = False

    for i in range(4, MAX_NUM+1, 2): isPrime[i] = False
    for i in range(3, MAX_NUM+1, 2):
        if isPrime[i]:
            for j in range(i*2, MAX_NUM+1, i):
                isPrime[j] = False

    m,n = map(int, input().split())
    cnt = 0
    for i in range(m, n+1):
        if isPrime[i]: cnt += 1

    print(cnt)

main()
