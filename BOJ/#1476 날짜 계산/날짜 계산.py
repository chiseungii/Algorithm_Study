E,S,M = map(int, input().split())
if S == 28: S = 0
if M == 19: M = 0

i = E
while True:
    if i%28==S and i%19==M:
        print(i)
        break

    i += 15
