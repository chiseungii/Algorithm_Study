from collections import Counter

for tc in range(int(input())):
    input()
    m = Counter(list(map(int, input().split())))

    print("#%d"%(tc+1), end=' ')

    max_cnt,max_num = -1,-1
    for a,b in m.items():
        if b > max_cnt:
            max_cnt = b
            max_num = a
        elif b==max_cnt and a>max_num:
            max_cnt = b
            max_num = a

    print(max_num)
