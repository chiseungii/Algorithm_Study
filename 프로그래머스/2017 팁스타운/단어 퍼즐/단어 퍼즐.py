def solution(strs, t):
    DP = [0 for i in range(len(t))]
    if t[0] in strs: DP[0] = 1

    for i in range(1, len(t)):
        cnts = []
        for j in range(5):
            if i-j < 0: break

            if i==j and t[0:j+1] in strs:
                cnts.append(1)
            elif t[i-j:i+1] in strs and DP[i-j-1]>0:
                cnts.append(DP[i-j-1]+1)

        if len(cnts) > 0: DP[i] = min(cnts)

    if DP[-1] > 0: return DP[-1]
    else: return -1
