for tc in range(int(input())):
    pos = list(map(int, input().split()))
    dist = ((pos[0]-pos[3])**2 + (pos[1]-pos[4])**2)**0.5

    if dist>abs(pos[2]-pos[5]) and dist<pos[2]+pos[5]: print(2)
    elif dist==abs(pos[2]-pos[5]) or dist==pos[2]+pos[5]:
        if pos[0]==pos[3] and pos[1]==pos[4]: print(-1)
        else: print(1)
    else: print(0)
