X = int(input())

cpyX,cnt = X,0
while cpyX > 0:
    cnt += 1
    cpyX -= cnt
cpyX += cnt

if cnt%2 == 1: print("%d/%d"%(cnt-(cpyX-1), cpyX))
else: print("%d/%d"%(cpyX, cnt-(cpyX-1)))
