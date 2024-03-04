def solution(ingredient):
    st = []
    cnt = 0

    for ing in ingredient:
        if len(st)<3 or ing!=1: st.append(ing)
        elif st[-1]==3 and st[-2]==2 and st[-3]==1:
            st.pop(-1); st.pop(-1); st.pop(-1)
            cnt += 1
        else: st.append(ing)

    return cnt
