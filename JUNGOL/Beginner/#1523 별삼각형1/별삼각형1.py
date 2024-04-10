def main():
    n,m = map(int, input().split())

    if n<1 or n>100 or m<1 or m>3:
        print("INPUT ERROR!")
        return
    
    if m == 1:
        for i in range(n):
            print('*'*(i+1))
    elif m == 2:
        for i in range(n):
            print('*'*(n-i))
    else:
        for i in range(n):
            print(' '*(n-i-1), end='')
            print('*'*(i*2+1))

main()
