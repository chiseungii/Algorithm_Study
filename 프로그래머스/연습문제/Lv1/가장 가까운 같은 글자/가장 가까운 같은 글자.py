def solution(s):
    idx = [-1 for i in range(26)]
    answer = []
    for i in range(len(s)):
        if idx[ord(s[i])-ord('a')] == -1:
            answer.append(-1)
        else:
            answer.append(i-idx[ord(s[i])-ord('a')])

        idx[ord(s[i])-ord('a')] = i

    return answer
