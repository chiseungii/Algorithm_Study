def solution(X, Y):
    cnts = [0 for i in range(10)]
    for Xi in X: cnts[int(Xi)] += 1

    answer = ""
    for Yi in Y:
        if cnts[int(Yi)] > 0:
            answer += Yi
            cnts[int(Yi)] -= 1

    answer = sorted(answer, reverse=True)

    if len(answer) == 0: return "-1"
    elif answer[0] == '0': return "0"
    else: return ''.join(answer)
