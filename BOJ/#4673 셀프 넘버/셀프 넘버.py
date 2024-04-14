SIZE = 10001

isSelf = [True for i in range(SIZE)]

for i in range(1, SIZE):
    sum,n = 0,i
    while n > 0:
        sum += n%10
        n //= 10
    sum += i

    if sum < SIZE: isSelf[sum] = False

for i in range(1, SIZE):
    if isSelf[i]: print(i)
