def solution(keymap, targets):
    alphas = [101 for i in range(26)]
    ordA = ord('A')
    for key in keymap:
        for i in range(len(key)):
            alphas[ord(key[i])-ordA] = min(alphas[ord(key[i])-ordA], i+1)

    answer = []
    for target in targets:
        sum = 0
        for t in target:
            if alphas[ord(t)-ordA] == 101:
                sum = -1
                break
            else: sum += alphas[ord(t)-ordA]
        answer.append(sum)

    return answer
