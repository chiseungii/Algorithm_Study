from collections import Counter

def solution(weights):
    cnt = 0
    cnts = Counter(weights)
    
    for k, v in cnts.items():
        if v >= 2:
            cnt += v*(v-1)//2
    weights = set(weights)
    
    for w in weights:
        if w*2 in weights:
            cnt += cnts[w]*cnts[w*2]
        if w*3/2 in weights:
            cnt += cnts[w]*cnts[w*3/2]
        if w*4/3 in weights:
            cnt += cnts[w]*cnts[w*4/3]

    return cnt
