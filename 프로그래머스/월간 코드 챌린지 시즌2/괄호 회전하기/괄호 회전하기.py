def isRight(s):
    st = []
    for si in s:
        if len(st)==0 or si=='(' or si=='[' or si=='{':
            if si=='(': st.append(')')
            elif si=='[': st.append(']')
            else: st.append('}')
        elif st[-1] == si: st.pop(-1)
        else: return 0

    if len(st) == 0: return 1
    else: return 0

def solution(s):
    answer = 0
    for i in range(len(s)):
        if s[i]==')' or s[i]==']' or s[i]=='}': continue
        else: answer += isRight(s[i:]+s[:i])

    return answer
