for i in range(int(input())):
    print("#%d"%(i+1), end=' ')

    a,b = map(int, input().split())
    if a < b: print("<")
    elif a == b: print("=")
    else: print(">")
