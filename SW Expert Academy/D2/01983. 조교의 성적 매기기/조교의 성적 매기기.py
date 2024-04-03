grades = ["A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"]
for tc in range(int(input())):
    N,K = map(int, input().split())
    scores = []

    for i in range(N):
        a,b,c = map(int, input().split())
        a = int(a*0.35)
        b = int(b*0.45)
        c = int(c*0.2)
        scores.append([i+1, a+b+c])

    print("#%d"%(tc+1), end=' ')

    scores = sorted(scores, key=lambda x:(-x[1]))
    for i in range(len(scores)):
        if scores[i][0] == K:
            tmp = N//10
            print(grades[i//tmp])
            break
