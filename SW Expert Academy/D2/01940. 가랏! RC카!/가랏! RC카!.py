for tc in range(int(input())):
    N = int(input())

    print("#%d"%(tc+1), end=' ')

    speed,length = 0,0
    for i in range(N):
        cmd = input()

        if cmd[0] == '0': length += speed
        elif cmd[0] == '1':
            speed += int(cmd[2:])
            length += speed
        else:
            speed -= int(cmd[2:])
            speed = max(speed, 0)
            length += speed

    print(length)
