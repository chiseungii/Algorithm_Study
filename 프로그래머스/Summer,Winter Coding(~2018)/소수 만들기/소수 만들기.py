from math import sqrt

def isPrime(n):
    if n == 1: return False
    if n == 2: return True
    if n%2 == 0: return False

    s = int(sqrt(n))
    for i in range(3, s+1, 2):
        if n%i == 0: return False

    return True

def solution(nums):
    cnt = 0
    for i in range(len(nums)-2):
        for j in range(i+1, len(nums)-1):
            for k in range(j+1, len(nums)):
                tmp = nums[i]+nums[j]+nums[k]
                if isPrime(tmp): cnt += 1

    return cnt
