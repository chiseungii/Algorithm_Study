def solution(n, s):
    if s < n: return [-1]
    else:
        answer = [s//n for i in range(n)]
        for i in range(s%n):
            answer[i] += 1

        return sorted(answer)
