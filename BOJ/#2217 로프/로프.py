N = int(input())
weights = []
for i in range(N):
    weights.append(int(input()))

weights = sorted(weights, reverse=True)

max_weights = -1
for i in range(len(weights)):
    tmp = weights[i]*(i+1)
    max_weights = max(tmp, max_weights)

print(max_weights)
