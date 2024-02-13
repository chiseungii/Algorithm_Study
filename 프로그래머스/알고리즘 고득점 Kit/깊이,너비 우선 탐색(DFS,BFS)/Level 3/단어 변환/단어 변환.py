def possible(s1, s2):
    cnt = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            cnt += 1

    if cnt == 1: return True
    else: return False

def solution(begin, target, words):
    # words 안에 target이 없는 경우
    if target not in words: return 0

    visit = {}
    for word in words:
        visit[word] = -1
    visit[begin] = 0

    q = [begin]

    while len(q) > 0:
        tmp = q[0]
        q.pop(0)

        for word in words:
            if visit[word]==-1 and possible(tmp, word):
                visit[word] = visit[tmp]+1
                q.append(word)

    if visit[target] != -1: return visit[target]
    else: return 0
