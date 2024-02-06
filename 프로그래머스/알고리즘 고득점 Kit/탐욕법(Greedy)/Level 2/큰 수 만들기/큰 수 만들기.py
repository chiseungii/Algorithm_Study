# stack 이용해서 풀기

def solution(number, k):
    st = [number[0]]
    
    for i in range(1, len(number)):
        if k <= 0: st.append(number[i])
        else:
            # 안에 든 숫자보다 크면 빼고 넣기
            while k>0 and len(st)>0 and number[i]>st[-1]:
                k -= 1
                st.pop(-1)
            st.append(number[i])
            
    # 횟수 아직 남았으면 뒤에서 빼기
    if k > 0:
        st = st[:-k]
        
    return ''.join(st)
