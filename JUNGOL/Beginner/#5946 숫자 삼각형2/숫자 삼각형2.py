def main():
    n = int(input())

    if n<1 or n>50 or n%2==0: print("INPUT ERROR!")
    else:
        cnt = n*2-1
        for i in range(n):
            print(' '*(i*2), end='')
            for j in range(cnt): print(i, end=' ')
            cnt -= 2
            print()

main()
