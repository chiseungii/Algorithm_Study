DP = [0 for i in range(101)]
DP[1] = DP[2] = DP[3] = 1

for i in range(4, 101):
    DP[i] = DP[i-2]+DP[i-3]

for tc in range(int(input())):
    print(DP[int(input())])
