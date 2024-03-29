for tc in range(int(input())):
    print("#%d"%(tc+1), end=' ')

    s = input()
    month = int(s[4:6])
    day = int(s[6:])

    if month<1 or month>12: print("-1")
    elif month==2 and (day<1 or day>28): print("-1")
    elif month in [4, 6, 8, 9, 11] and (day<1 or day>30): print("-1")
    elif month in [1, 3, 5, 7, 8, 10, 12] and (day<1 or day>31): print("-1")
    else: print("%04d/%02d/%02d"%(int(s[0:4]), month, day))
