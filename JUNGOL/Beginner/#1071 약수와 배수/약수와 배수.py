n = int(input())
v = list(map(int, input().split()))
m = int(input())

a,b = 0,0
for n in v:
    if m%n == 0: a += n
    if n%m == 0: b += n

print(a, b, sep='\n')
