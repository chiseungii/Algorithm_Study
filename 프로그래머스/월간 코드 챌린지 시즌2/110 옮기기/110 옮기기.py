def solution(s):
    ans = []
    for si in s:
        st = []
        cnt110 = 0
        for i in range(len(si)):
            if len(st) < 2: st.append(si[i])
            elif si[i] == '1': st.append('1')
            else:
                if st[-1]=='1' and st[-2]=='1':
                    st.pop(-1); st.pop(-1)
                    cnt110 += 1
                else: st.append('0')

        answer = ""
        for i in range(len(st)):
            if st[i] == '0': answer += '0'
            else:
                if i==len(st)-1 or st[i+1]=='1':
                    for j in range(cnt110):
                        answer += "110"
                    for j in range(i, len(st)):
                        answer += st[j]

                    cnt110 = 0
                    break
                else: answer += '1'

        if cnt110 > 0:
            for i in range(cnt110):
                answer += "110"

        ans.append(answer)

    return ans
