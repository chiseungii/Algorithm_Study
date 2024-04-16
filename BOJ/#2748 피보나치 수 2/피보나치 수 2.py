n = int(input())

if n == 0: print(0)
elif n == 1: print(1)
else:
    a,b,c = 0,1,1
    for i in range(3, n+1):
        a,b,c = b,c,b+c

    print(c)
