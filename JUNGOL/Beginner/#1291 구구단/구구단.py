s,e = map(int, input().split())
while s<2 or s>9 or e<2 or e>9:
    print("INPUT ERROR!")
    s,e = map(int, input().split())

for i in range(1, 10):
    if s < e:
        for j in range(s, e+1):
            print("%d * %d = %2d"%(j, i, j*i), end="   ")
        print()
    else:
        for j in range(s, e-1, -1):
            print("%d * %d = %2d"%(j, i, j*i), end="   ")
        print()
