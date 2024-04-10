def main():
    MAX_NUM = 1000000

    isPrime = [True for i in range(MAX_NUM+1)]
    isPrime[1] = False

    for i in range(4, MAX_NUM+1, 2): isPrime[i] = False
    for i in range(3, MAX_NUM+1, 2):
        for j in range(i*2, MAX_NUM+1, i): isPrime[j] = False

    for i in range(int(input())):
        m = int(input())

        if isPrime[m]: print(m)
        else:
            for j in range(m-1, 0, -1):
                if isPrime[j]:
                    left = j
                    break

            for j in range(m+1, MAX_NUM+1):
                if isPrime[j]:
                    right = j
                    break

            if m-left == right-m: print(left, right, sep=' ')
            elif m-left > right-m: print(right)
            else: print(left)

main()
