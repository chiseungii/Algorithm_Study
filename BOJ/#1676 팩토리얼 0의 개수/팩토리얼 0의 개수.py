N = int(input())

fact,zero = 1,0
for i in range(2, N+1):
    fact *= i

    while True:
        if fact%10 != 0: break
        zero += 1
        fact //= 10

    fact = fact%1000

print(zero)
