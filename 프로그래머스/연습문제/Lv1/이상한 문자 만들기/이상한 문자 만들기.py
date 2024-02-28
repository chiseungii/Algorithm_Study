def solution(s):
    idx=0; answer=""
    for i in range(len(s)):
        if s[i] == ' ':
            answer += ' '
            idx = 0
        elif idx%2 == 1:
            answer += s[i].lower()
            idx += 1
        else:
            answer += s[i].upper()
            idx += 1

    return answer
