def solution(want, number, discount):
    want_list = []
    for i in range(len(want)):
        for j in range(number[i]):
            want_list.append(want[i])
    want_list = sorted(want_list)
    
    cnt = 0
    for i in range(len(discount)-9):
        cmp_list = sorted(discount[i:i+10])
        if want_list == cmp_list: cnt += 1
        
    return cnt
