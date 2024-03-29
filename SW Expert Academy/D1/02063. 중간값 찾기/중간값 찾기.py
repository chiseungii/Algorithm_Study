n = int(input())
nums = [int(i) for i in input().split()]

nums = sorted(nums)
print(nums[n//2])
