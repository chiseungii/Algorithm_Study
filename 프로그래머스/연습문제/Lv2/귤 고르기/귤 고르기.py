def solution(k, tangerine):
    tangerine = sorted(tangerine)

    cnts = []
    i = 0
    while i < len(tangerine):
        j = i+1
        while j<len(tangerine) and tangerine[i]==tangerine[j]:
            j += 1
        cnts.append(j-i)
        i = j

    cnts = sorted(cnts, reverse=True)

    cnt = 0
    for c in cnts:
        if k <= 0: break
        cnt += 1
        k -= c

    return cnt
