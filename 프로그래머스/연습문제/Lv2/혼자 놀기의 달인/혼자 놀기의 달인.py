def solution(cards):
    scores = []
    visit = [False for i in range(len(cards))]

    for i in range(len(cards)):
        if not visit[i]:
            score = 1
            visit[i] = True
            idx = cards[i]-1

            while True:
                if visit[idx]: break

                score += 1
                visit[idx] = True
                idx = cards[idx]-1

            scores.append(score)

    scores = sorted(scores, reverse=True)

    if len(scores) <= 1: return 0
    else: return scores[0]*scores[1]
