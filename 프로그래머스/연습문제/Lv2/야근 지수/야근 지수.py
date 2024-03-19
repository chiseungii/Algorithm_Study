from collections import Counter

def solution(n, works):
    if sum(works) <= n: return 0
    else:
        m = dict(Counter(works))
        while n > 0:
            m = dict(sorted(m.items(), key=lambda x:x[0], reverse=True))
            for k,v in m.items():
                if v <= n:
                    n -= v
                    if k-1 in m:
                        m[k-1] += v
                    else: m[k-1] = v
                    del m[k]
                else:
                    m[k] -= n
                    if k-1 in m:
                        m[k-1] += n
                    else: m[k-1] = n
                    n = 0

                break

        answer = 0
        for k,v in m.items():
            answer += (k**2)*v

        return answer
