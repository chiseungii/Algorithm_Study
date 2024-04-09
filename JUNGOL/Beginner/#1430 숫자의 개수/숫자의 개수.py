a = int(input())
b = int(input())
c = int(input())
cnt = [0 for i in range(10)]
a = a*b*c

while a > 0:
    cnt[a%10] += 1
    a //= 10

for c in cnt: print(c)
