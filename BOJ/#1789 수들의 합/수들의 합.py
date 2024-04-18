S = int(input())

cnt,i = 0,1
while True:
    cnt += 1
    S -= i

    i += 1
    if i > S: break

print(cnt)
