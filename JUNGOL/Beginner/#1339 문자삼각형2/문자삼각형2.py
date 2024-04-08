n = int(input())

if n<1 or n>100 or n%2==0:
    print("INPUT ERROR")
else:
    tri = [[0 for i in range(n)] for i in range(n)]

    c = ord('A')
    a,b = n//2,1
    for i in range((n+1)//2):
        for j in range(a, a+b):
            tri[j][n//2-i] = c
            c += 1
            if c > ord('Z'): c = ord('A')

        a,b = a-1,b+2

    for t in tri:
        for ti in t:
            if ti == 0: continue
            print(chr(ti), end=' ')
        print()
