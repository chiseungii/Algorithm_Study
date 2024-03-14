def solution(data, col, row_begin, row_end):
    data = sorted(data, key=lambda x:(x[col-1], -x[0]))

    answer = 0
    for i in range(row_begin-1, row_end):
        sum = 0
        for j in data[i]:
            sum += j%(i+1)

        answer ^= sum
    
    return answer
