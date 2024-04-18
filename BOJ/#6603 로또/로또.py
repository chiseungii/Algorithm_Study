from itertools import combinations

while True:
    nums = list(map(int, input().split()))
    k = nums[0]
    nums = nums[1:]
    if k == 0: break

    cmb = list(combinations(nums, 6))
    for cm in cmb:
        for c in cm: print(c, end=' ')
        print()

    print()
