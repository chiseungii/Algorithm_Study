N = int(input())

if N == 1: print(1)
else:
    rooms,base,cnt = 1,6,1
    while True:
        rooms += base
        cnt += 1

        if N <= rooms:
            print(cnt)
            break

        base += 6
