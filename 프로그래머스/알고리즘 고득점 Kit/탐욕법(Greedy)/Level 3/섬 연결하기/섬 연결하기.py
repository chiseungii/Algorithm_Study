def solution(n, costs):
    parents = [i for i in range(n)]
    costs = sorted(costs, key=lambda x:x[2])

    min_cost = 0
    for a,b,c in costs:
        if parents[a] == parents[b]:
            continue

        min_cost += c

        tmp = parents[b]
        for i in range(n):
            if parents[i] == tmp:
                parents[i] = parents[a]

        flag = True
        for i in range(1, n):
            if parents[i] != parents[0]:
                flag = False
                break

        if flag: break

    return min_cost
