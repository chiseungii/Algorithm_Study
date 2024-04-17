nums = []
for i in range(5):
    nums.append(int(input()))
nums = sorted(nums)

print(sum(nums)//5)
print(nums[2])
