def solution(s):
    st = []
    max_len = 1

    for i in range(len(s)):
        if len(st) == 0: st.append(s[i])
        elif len(st) == 1:
            if st[0] == s[i]:
                max_len = max(2, max_len)
                st.append(s[i])
            else:
                st.append(s[i])
        else:
            if st[-2] == s[i]:
                l = 1
                tmp = st.copy()
                tmp.pop(-1)
                idx = i

                while len(tmp)>0 and idx<len(s):
                    if tmp[-1] == s[idx]:
                        idx += 1
                        l += 2
                        tmp.pop(-1)
                    else: break

                max_len = max(l, max_len)
            
            if st[-1] == s[i]:
                l = 2
                tmp = st.copy()
                tmp.pop(-1)
                idx = i+1

                while len(tmp)>0 and idx<len(s):
                    if tmp[-1] == s[idx]:
                        idx += 1
                        l += 2
                        tmp.pop(-1)
                    else: break

                max_len = max(l, max_len)

            st.append(s[i])

    return max_len
