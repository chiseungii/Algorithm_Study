N = int(input())

cnt,num = 0,N
while True:
    cnt += 1

    tmp = num%10
    tmp *= 10
    tmp += (num//10+num%10)%10

    if tmp == N: break
    else: num = tmp

print(cnt)
