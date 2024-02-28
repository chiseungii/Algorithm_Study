def solution(k, score):
    answer=[]; scores=[]
    for sc in score:
        if len(scores) < k: scores.append(sc)
        elif sc > min(scores):
            scores.pop(scores.index(min(scores)))
            scores.append(sc)

        answer.append(min(scores))

    return answer
