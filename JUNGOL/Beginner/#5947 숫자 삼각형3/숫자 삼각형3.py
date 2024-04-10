def main():
    n = int(input())

    if n<1 or n>50 or n%2==0: print("INPUT ERROR!")
    else:
        for i in range(n//2+1):
            for j in range(i+1):
                print(j+1, end=' ')
            print()

        for i in range(n//2, -1, -1):
            for j in range(i):
                print(j+1, end=' ')
            print()

main()
