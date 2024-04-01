for tc in range(int(input())):
    N,M = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    if N > M:
        A,B = B,A
        N,M = M,N

    max_sum = -1
    for i in range(M-N+1):
        sum = 0
        for j in range(N):
            sum += A[j]*B[i+j]

        max_sum = max(max_sum, sum)

    print(max_sum)
