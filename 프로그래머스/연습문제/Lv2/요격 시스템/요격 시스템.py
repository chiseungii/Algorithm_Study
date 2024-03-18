def solution(targets):
    bump,cnt = 0.0,0
    targets = sorted(targets, key=lambda x:x[1])

    for target in targets:
        if bump <= target[0]:
            cnt += 1
            bump = target[1]-0.5

    return cnt
