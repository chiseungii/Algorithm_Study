for tc in range(int(input())):
    costs = list(map(int, input().split()))

    print("#%d"%(tc+1), end=' ')

    A = costs[0]*costs[-1]
    B = costs[1]+costs[3]*(costs[-1]-costs[2]) if costs[-1]>costs[2] else costs[1]

    print(min(A, B))
