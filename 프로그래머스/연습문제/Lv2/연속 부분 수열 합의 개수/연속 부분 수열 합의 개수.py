def solution(elements):
    twice_ele = []
    for e in elements: twice_ele.append(e)
    for e in elements: twice_ele.append(e)

    nums = set()
    for i in range(1, len(elements)+1):
        for j in range(len(elements)):
            nums.add(sum(twice_ele[j:j+i]))

    return len(nums)
