def solution(plans):
    v = []
    for plan in plans:
        start = int(plan[1][:2])*60+int(plan[1][3:])
        v.append([plan[0], [start, int(plan[2])]])

    v = sorted(v, key=lambda x:x[1][0])
    st = []
    now = v[0][1][0]
    idx = 0

    answer = []
    while idx < len(v):
        while now<v[idx][1][0] and len(st)>0:
            tmp = st[-1]
            st.pop(-1)

            pos = v[idx][1][0]-now
            if pos >= tmp[1]:
                answer.append(tmp[0])
                now += tmp[1]
            else:
                tmp[1] -= pos
                st.append(tmp)
                now += pos

        if idx == len(v)-1:
            answer.append(v[idx][0])
            break
        elif v[idx][1][0]+v[idx][1][1] <= v[idx+1][1][0]:
            answer.append(v[idx][0])
            now = v[idx][1][0]+v[idx][1][1]
            idx += 1
        else:
            pos = v[idx+1][1][0]-v[idx][1][0]
            st.append([v[idx][0], v[idx][1][1]-pos])
            now = v[idx+1][1][0]
            idx += 1

    while len(st) > 0:
        answer.append(st[-1][0])
        st.pop(-1)

    return answer
