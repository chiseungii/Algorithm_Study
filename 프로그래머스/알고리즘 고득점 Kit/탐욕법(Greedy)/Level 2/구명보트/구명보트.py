def solution(people, limit):
    people = sorted(people, reverse=True)

    cnt,left = 0,0; right=len(people)-1
    while left < right:
        if people[left]+people[right] <= limit:
            left += 1; right -= 1
            cnt += 1
        else:
            left += 1
            cnt += 1

    if left == right: cnt += 1

    return cnt
