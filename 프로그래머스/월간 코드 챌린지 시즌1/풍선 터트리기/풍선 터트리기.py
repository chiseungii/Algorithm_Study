def solution(a):
    min_num = min(a)
    min_idx = a.index(min_num)

    left,right = False,False
    if min_idx == 0: left = True
    elif min_idx == len(a)-1: right = True

    cnt = 1
    if not left:
        st = [a[0]]

        for i in range(1, min_idx):
            if a[i] < st[-1]: st.append(a[i])

        cnt += len(st)

    if not right:
        st = [a[-1]]

        for i in range(len(a)-2, min_idx, -1):
            if a[i] < st[-1]: st.append(a[i])

        cnt += len(st)

    return cnt
