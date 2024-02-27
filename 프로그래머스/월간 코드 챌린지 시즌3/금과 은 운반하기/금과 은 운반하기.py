def solution(a, b, g, s, w, t):
    left=0; right=(10**14)*4
    answer = right

    while left <= right:
        mid = (left+right)//2

        gold,silver,mix = 0,0,0
        for i in range(len(t)):
            if mid < t[i]: continue
            cnt = 1+(mid-t[i])//(t[i]*2)

            gold += min(g[i], cnt*w[i])
            silver += min(s[i], cnt*w[i])
            mix += min(g[i]+s[i], cnt*w[i])

        if gold>=a and silver>=b and mix>=a+b:
            answer = mid
            right = mid-1
        else: left = mid+1

    return answer
