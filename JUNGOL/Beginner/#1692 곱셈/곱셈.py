a = int(input())
b = int(input())

base,sum = 1,0
while b > 0:
    tmp = a*(b%10)
    sum += tmp*base
    print(tmp)

    base *= 10
    b //= 10

print(sum)
