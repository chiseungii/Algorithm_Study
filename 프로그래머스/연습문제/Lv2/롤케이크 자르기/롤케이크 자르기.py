from collections import Counter

def solution(topping):
    left = {}
    right = Counter(topping)

    cnt_left,cnt_right = 0,len(right)
    cnt = 0
    for i in range(len(topping)-1):
        right[topping[i]] -= 1
        if right[topping[i]] == 0:
            right.pop(topping[i])
            cnt_right -= 1

        if topping[i] not in left:
            cnt_left += 1
            left[topping[i]] = 1
        else: left[topping[i]] += 1

        if cnt_right == cnt_left: cnt += 1

    return cnt
