def solution(n, left, right):
    answer = []
    for ll in range(left, right+1):
        i,j = ll//n,ll%n
        answer.append(max(i,j)+1)

    return answer
