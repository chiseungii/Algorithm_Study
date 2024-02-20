def solution(cookie):
    leftSum = [0 for i in range(len(cookie)+1)]
    rightSum = [0 for i in range(len(cookie)+1)]

    leftSum[1] = cookie[0]
    rightSum[len(cookie)] = cookie[-1]

    for i in range(1, len(cookie)):
        leftSum[i+1] = leftSum[i]+cookie[i]
    for i in range(len(cookie)-1, 0, -1):
        rightSum[i] = rightSum[i+1]+cookie[i-1]

    leftSum.append(0)
    rightSum.append(0)

    max_cookie = 0
    for i in range(1, len(cookie)+1):
        if leftSum[i] == rightSum[i+1]:
            max_cookie = max(max_cookie, leftSum[i])
            continue

        left=0; right=len(cookie)+1
        while left<i and right>i+1:
            a = leftSum[i]-leftSum[left]
            b = rightSum[i+1]-rightSum[right]

            if a == b:
                max_cookie = max(max_cookie, a)
                break
            elif a < b: right -= 1
            else: left += 1

    return max_cookie
