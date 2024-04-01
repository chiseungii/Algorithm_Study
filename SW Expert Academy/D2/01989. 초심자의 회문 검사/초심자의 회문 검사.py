for tc in range(int(input())):
    s = input()

    print("#%d"%(tc+1), end=' ')

    left,right = 0,len(s)-1
    flag = True
    while left <= right:
        if s[left] != s[right]:
            flag = False
            print(0)
            break
        else: left,right = left+1,right-1

    if flag: print(1)
