N,K = map(int, input().split())

nums = [1, N]
sq = int(N**0.5)
for i in range(2, sq):
    if N%i == 0:
        nums.append(i)
        nums.append(N//i)
if sq**2 == N: nums.append(sq)
elif N%sq == 0:
    nums.append(sq)
    nums.append(N//sq)
nums = sorted(nums)

if K > len(nums): print(0)
else: print(nums[K-1])
