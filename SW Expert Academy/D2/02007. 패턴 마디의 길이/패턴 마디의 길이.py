for tc in range(int(input())):
    s = input()

    print("#%d"%(tc+1), end=' ')

    for i in range(1, len(s)//2+1):
        if s[0:i] == s[i:i+i]:
            print(i)
            break
