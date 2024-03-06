def solution(s):
    if not s[0].isdigit(): answer = s[0].upper()
    else: answer = s[0]

    for i in range(1, len(s)):
        if s[i].isdigit() or s[i]==' ': answer += s[i]
        elif s[i-1] == ' ': answer += s[i].upper()
        else: answer += s[i].lower()

    return answer
