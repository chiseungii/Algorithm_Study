def main():
    n = int(input())

    if n<1 or n>50 or n%2==0: print("INPUT ERROR!")
    else:
        num,dir = 1,1
        for i in range(1, n+1):
            if dir == 1:
                for j in range(i):
                    print(num, end=' ')
                    num += 1
                print()
            else:
                for j in range(num+i-1, num-1, -1):
                    print(j, end=' ')
                num += i
                print()

            dir = -dir

main()
