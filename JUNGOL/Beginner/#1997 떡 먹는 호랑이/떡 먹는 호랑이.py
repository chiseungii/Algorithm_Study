def main():
    d,k = map(int, input().split())
    DP = [[0, 0] for i in range(d)]

    DP[0][0] = DP[1][1] = 1
    DP[0][1] = DP[1][0] = 0

    for i in range(2, d):
        DP[i][0] = DP[i-1][0]+DP[i-2][0]
        DP[i][1] = DP[i-1][1]+DP[i-2][1]

    a,b = DP[-1][0],DP[-1][1]
    A,B = 1,1
    while True:
        if A*a+B*b == k:
            print(A, B, sep='\n')
            break

        B += 1
        if A*a+B*b > k:
            A += 1
            B = A

main()
