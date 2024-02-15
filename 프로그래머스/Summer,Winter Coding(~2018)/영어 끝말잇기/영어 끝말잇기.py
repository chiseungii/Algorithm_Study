def solution(n, words):
    turn=1; cycle=1
    last = words[0]
    visit = [words[0]]

    for i in range(1, len(words)):
        if last[-1] != words[i][0]: return [turn+1, cycle]
        elif words[i] in visit: return [turn+1, cycle]
        elif len(words[i]) == 1: return [turn+1, cycle]
        else:
            turn += 1
            last = words[i]
            visit.append(words[i])

            if turn == n:
                turn = 0
                cycle += 1

    return [0, 0]
