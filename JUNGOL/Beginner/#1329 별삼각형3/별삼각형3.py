def main():
    n = int(input())

    if n<1 or n>100 or n%2==0: print("INPUT ERROR!")
    else:
        star = 1
        for i in range(n//2+1):
            print(' '*i, '*'*star, sep='')
            star += 2

        star -= 4
        for i in range(n//2-1, -1, -1):
            print(' '*i, '*'*star, sep='')
            star -= 2

main()
