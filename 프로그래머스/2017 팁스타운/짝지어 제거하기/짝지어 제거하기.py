def solution(s):
    st = []

    for si in s:
        if len(st)==0 or st[-1]!=si:
            st.append(si)
        else: st.pop(-1)

    if len(st) == 0: return 1
    else: return 0
