for tc in range(int(input())):
    s = sum(list(map(int, input().split())))
    print("#%d %d"%(tc+1, (s+5)//10))
