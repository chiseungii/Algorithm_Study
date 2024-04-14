N = int(input())
scores = list(map(int, input().split()))
scores = sorted(scores, reverse=True)

max_score = scores[0]
for i in range(N):
    scores[i] = scores[i]/max_score*100

print(sum(scores)/N)
