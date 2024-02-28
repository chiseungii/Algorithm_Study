def solution(s, n):
    answer = ""
    for si in s:
        if si == ' ': answer += ' '
        elif si <= 'Z':
            a = ord(si)-ord('A')
            a = (a+n)%26
            answer += chr(a+ord('A'))
        else:
            a = ord(si)-ord('a')
            a = (a+n)%26
            answer += chr(a+ord('a'))

    return answer
