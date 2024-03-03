def solution(s, skip, index):
    answer = ""
    for i in range(len(s)):
        ch = s[i]
        for j in range(index):
            ch = chr(ord(ch)+1)
            if ch > 'z': ch = 'a'

            while ch in skip:
                ch = chr(ord(ch)+1)
                if ch > 'z': ch = 'a'
        answer += ch

    return answer
