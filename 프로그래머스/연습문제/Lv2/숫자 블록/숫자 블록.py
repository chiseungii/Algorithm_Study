def solution(begin, end):
    MAX_DIV = 10000000

    answer = [1 for i in range(end-begin+1)]
    if begin == 1: answer[0] = 0

    for i in range(begin, end+1):
        if i == 1: continue
        else:
            max_divisor,j = 1,2
            while j**2 <= i:
                if i%j == 0:
                    if i//j <= MAX_DIV:
                        answer[i-begin] = i//j
                        break
                    else: max_divisor = j
                    
                j += 1

            if answer[i-begin]==1 and max_divisor!=1:
                    answer[i-begin] = max_divisor

    return answer
