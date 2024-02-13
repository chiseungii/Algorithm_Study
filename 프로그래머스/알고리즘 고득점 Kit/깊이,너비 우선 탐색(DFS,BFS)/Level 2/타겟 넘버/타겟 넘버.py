def DFS(numbers, target, index, n):
    if index >= len(numbers):
        if n == target: return 1
        else: return 0

    cnt = 0
    cnt += DFS(numbers, target, index+1, n+numbers[index])
    cnt += DFS(numbers, target, index+1, n-numbers[index])

    return cnt

def solution(numbers, target):
    return DFS(numbers, target, 0, 0)
