def isProg(n):
    if n < 100: return True

    last = n%10
    n //= 10
    sub = last-n%10

    while n >= 10:
        last = n%10
        n //= 10

        if last-n%10 != sub: return False

    return True

def main():
    N = int(input())

    cnt = 0
    for i in range(1, N+1):
        if isProg(i): cnt += 1

    print(cnt)

main()
