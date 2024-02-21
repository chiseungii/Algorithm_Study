v = []

def merge(start_i, start_j, N):
    global v
    flag = True
    a = v[start_i][start_j]
    for i in range(N):
        for j in range(N):
            if v[start_i+i][start_j+j] != a:
                flag = False
                break
        if not flag: break

    if flag:
        if a == 1: return [0, 1]
        else: return [1, 0]
    else:
        answer = [0, 0]

        tmp = merge(start_i, start_j, N//2)
        answer[0] += tmp[0]
        answer[1] += tmp[1]

        tmp = merge(start_i, start_j+N//2, N//2)
        answer[0] += tmp[0]
        answer[1] += tmp[1]

        tmp = merge(start_i+N//2, start_j, N//2)
        answer[0] += tmp[0]
        answer[1] += tmp[1]

        tmp = merge(start_i+N//2, start_j+N//2, N//2)
        answer[0] += tmp[0]
        answer[1] += tmp[1]

        return answer
    
def solution(arr):
    global v
    v = arr
    answer = [0, 0]

    p = merge(0, 0, len(arr))
    return [p[0], p[1]]
