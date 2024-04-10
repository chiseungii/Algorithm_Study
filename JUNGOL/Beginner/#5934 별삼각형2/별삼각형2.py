def main():
    n = int(input())

    if n<1 or n>100 or n%2==0: print("INPUT ERROR!")
    else:
        a = n//2+1
        for i in range(a, 0, -1):
            print(' '*(a-i), '*'*i, sep='')
        
        b = a-1
        for i in range(2, a+1):
            print(' '*b, '*'*i, sep='')

main()
