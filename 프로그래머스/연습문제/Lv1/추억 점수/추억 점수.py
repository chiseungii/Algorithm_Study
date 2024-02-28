def solution(name, yearning, photo):
    m = dict(zip(name, yearning))
    
    answer = []
    for p in photo:
        sum = 0
        for s in p:
            if s in m:
                sum += m[s]

        answer.append(sum)

    return answer
