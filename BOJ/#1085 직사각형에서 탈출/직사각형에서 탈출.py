v = list(map(int, input().split()))
v[2] -= v[0]
v[3] -= v[1]

print(min(v))
