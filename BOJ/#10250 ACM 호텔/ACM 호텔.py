for tc in range(int(input())):
    H,W,N = map(int, input().split())

    roomNum = (N-1)//H+1
    floor = N%H
    if floor == 0: floor = H

    print("%d%02d"%(floor, roomNum))
