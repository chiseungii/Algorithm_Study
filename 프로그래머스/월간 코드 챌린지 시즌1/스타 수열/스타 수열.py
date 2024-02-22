def solution(a):
    cnts = [0 for i in range(len(a))]
    for ai in a: cnts[ai] += 1

    answer = 0
    for i in range(len(a)):
        if cnts[i] <= answer: continue

        length,j = 0,0
        while j < len(a)-1:
            if (a[j]==i or a[j+1]==i) and a[j]!=a[j+1]:
                length,j = length+1,j+1
            j += 1

        answer = max(length, answer)

    return answer*2
