n = int(input())
nums = [1, n]

for i in range(2, int(n**0.5+1)):
    if n%i == 0:
        nums.append(i)
        if n//i != i: nums.append(n//i)
nums = sorted(nums)

for n in nums: print(n, end=' ')
