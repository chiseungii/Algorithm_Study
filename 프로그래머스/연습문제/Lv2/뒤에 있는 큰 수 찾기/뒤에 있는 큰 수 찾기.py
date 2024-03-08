def solution(numbers):
    answer = [-1 for i in range(len(numbers))]
    st = [numbers[-1]]

    for i in range(len(numbers)-2, -1, -1):
        while len(st)>0 and st[-1]<=numbers[i]:
            st.pop(-1)

        if len(st) > 0: answer[i] = st[-1]
        st.append(numbers[i])

    return answer
