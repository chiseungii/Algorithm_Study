def main():
    while True:
        n = int(input())
        if n == 0: break

        sum,reverse = 0,0
        while n > 0:
            reverse = reverse*10 + n%10
            sum += (n%10)
            n //= 10

        print(reverse, sum, sep=' ')

main()
