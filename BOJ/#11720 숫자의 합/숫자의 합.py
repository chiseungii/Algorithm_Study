N = int(input())
s = int(input())

sum = 0
while s > 0:
    sum += s%10
    s //= 10

print(sum)
