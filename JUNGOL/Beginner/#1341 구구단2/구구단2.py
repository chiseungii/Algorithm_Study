s,e = map(int, input().split())

if s < e:
    for i in range(s, e+1):
        for j in range(1, 10):
            print("%d * %d = %2d"%(i, j, i*j), end="   ")
            if j%3 == 0: print()
        print()
else:
    for i in range(s, e-1, -1):
        for j in range(1, 10):
            print("%d * %d = %2d"%(i, j, i*j), end="   ")
            if j%3 == 0: print()
        print()
