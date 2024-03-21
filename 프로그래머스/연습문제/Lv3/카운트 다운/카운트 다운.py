def solution(target):
    DP = [[0, 0]]
    num = 1

    while num<=target and num<=70:
        if num==50 or num<=20: DP.append([1, 1])
        elif num<=60 and num%3==0: DP.append([1, 0])
        elif num<=40 and num%2==0: DP.append([1, 0])
        elif num>50 and num<=70: DP.append([2, 2])
        else:
            if num <= 40: DP.append([2, 2])
            else: DP.append([2, 1])

        num +=1

    if target > 70:
        for i in range(71, target+1):
            a,b = DP[i-60][0],DP[i-50][0]

            if a == b: DP.append([b+1, DP[i-50][1]+1])
            elif a < b: DP.append([a+1, DP[i-60][1]])
            else: DP.append([b+1, DP[i-50][1]+1])

    return [DP[target][0], DP[target][1]]
